//
// Created by main on 2024/7/14.
//

#ifndef PERSON_H
#define PERSON_H
#include<string>
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    string gender;
    int age;

    void walk() ;
    void eat() ;
    void sleep() ;
};

//类外实现类函数


//当类外实现类函数，需要使用类名::函数名
//类外实现类函数，可以写在类外，也可以写在类内
//当头文件内已经将成员函数完成了，则  一定  不需要cpp文件了


/*void Person::eat() {
    cout << "I can eat" << endl;
}
void Person::sleep() {
    cout << "I can sleep" << endl;
}
void Person::walk() {
    cout << "I can walk" << endl;
}*/



#endif //PERSON_H
