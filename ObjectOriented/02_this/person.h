//
// Created by main on 2024/7/16.
//

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class person {

public:


    int age;
    mutable  string gender;
    //构造函数
    person() {}
    //person(int a): age(a) {}


    //this指针不能省略的情况
    person(int age) {
        this->age = age;
    }
    person(int a, string g): age(a), gender(g) {}




    //成员函数
    //不使用this指针
    int getAge() {
        cout<<"age is "<<age<<endl;
        return age;
    }
    string getGender() {
        return gender;
    }


    //使用this指针
    // int getAge() {
    //     return this->age;
    // }
    // string getGender() {
    //     return this->gender;
    // }



    person& growup(person &p) {
        age=p.age;
        gender=p.gender;


        // this是一个指针，用来指向当前的对象
        // 因此，如果需要返回当前的对象的话，就需要使用*来访问
        return *this;



    }
    void testFunction01() {
        cout << "testFunction01" << endl;
    }

    void testFunction02() {
        if (this == NULL) {
            cout << "this is NULL pointer" << endl;
            return;
        }
        cout << "testFunction02" << endl;
    }





    //常函数
    /*
使用关键字const修饰的函数，叫做常函数。
常函数中，不允许修改属性的值。
常函数中，不允许调用其他的普通函数。
如果想要在常函数中修改某个属性的值，需要将这个属性设置为mutable。
     */
    void fixperson(int newAge,string newGender) const{
            //age = newAge;        // 这里会出错，不允许在常函数中修改普通属性的值
        gender = newGender;     // 这里可以正常修改，因此此时的gender已经被修饰为mutable
        cout << "fixperson" << endl;
        cout << "age is " << age << endl;
        cout << "gender is " << gender << endl;

        //test();  // 这里会出错，不允许在常函数中调用其他的普通函数
    }


    void test() {}

private:

};

#endif //PERSON_H
