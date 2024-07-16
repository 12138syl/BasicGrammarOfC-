//
// Created by main on 2024/7/15.
//

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>
using namespace std;



class person {
public:
    int age;
    string gender;
    int* score;
    // // 这就是一个无参的构造函数
    // person();
    //
    //
    // // 这就是一个有参的构造函数
    // person(int age);
    //
    // person(string gender);
    //
    //
    // // 使用explicit关键字，可以禁止隐式类型转换
    //
    // // explicit person(int age);
    // // explicit person(string gender);
    // person(int age, string gender);

    person():age(0),gender("default") {
        cout << "The no-argument constructor is executed!" << endl;
    }
    person(int age):age(age),gender("default") {
        cout << "The parameterized constructor is executed! Parameter age = " << age << endl;
    }
    person(string gender):age(0),gender(gender) {
        cout << "The parameterized constructor is executed! Parameter gender = " << gender << endl;
    }

    person(int age, string gender):age(age),gender(gender) {
        cout << "The parameterized constructor is executed! Parameter age = " << age << ", Parameter gender = " << gender << endl;
    }

    person(int age, string gender, int score) {
        cout << "The parameterized constructor is executed! Parameter age = " << age << ", Parameter gender = " << gender << endl;
        this->score = new int(score);
        this->gender = gender;
        this->age = age;

    }
    //自带的浅拷贝函数
    // person (const person &p) {
    //     this->age = p.age;
    //     this->gender = p.gender;
    // }

    //自己写的浅拷贝函数
    // person (const person &p) {
    //     cout<<"This is my shallow copy constructor!"<<endl;
    //     this->age = p.age;
    //     this->gender = "mannnnnnnnnnnnn";
    // }
    //深拷贝函数
    person (const person &p) {
        cout<<"This is my deep copy constructor!"<<endl;
        this->age = p.age;
        this->gender = p.gender;
        this->score = new int(*(p.score));
    }

    // 这就是Person的析构函数，析构函数只能这样书写，且不能有参数
    // 通常在析构函数中，我们会进行一些资源的释放，例如开辟的堆中的内存
    ~person() {
        cout <<this->gender<< "     The destructor is executed!~~~~~~~~~~~~~~~~" << endl;
        if (score != NULL) {
            delete score;	// 释放对应的堆空间
            score = NULL;	// 释放本来存储的地址，防止野指针
        }

    }



};
//类外实现构造函数


// // This is a no-argument constructor
// person::person() {
//     cout << "The no-argument constructor is executed!" << endl;
// }
//
// // This is a parameterized constructor
// person::person(int age) {
//     this->age = age;
//     cout << "The parameterized constructor is executed! Parameter age = " << age << endl;
// }
// person::person(string gender) {
//     this->gender = gender;
//     cout << "The parameterized constructor is executed! Parameter gender = " << gender << endl;
//
// }
//
// // This is another parameterized constructor with two parameters
// person::person(int age, string gender) {
//     this->age = age;
//     this->gender = gender;
//     cout << "The parameterized constructor is executed! Parameter age = " << age << ", Parameter gender = " << gender << endl;
// }

#endif //PERSON_H
