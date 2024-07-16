//
// Created by main on 2024/7/15.
//
#include <iostream>
#include  <string>
#include "person.h"
using namespace std;
int main()
{

    //默认的是无参构造函数
    cout<<"default function"<<endl;
    person p1;
    cout << "p1.age = " << p1.age << endl;
    cout << "p1.gender = " << p1.gender << endl;

    cout<<endl;

    cout<<"function with one parameter"<<endl;
    person p2(100);
    cout << "p2.age = " << p2.age << endl;
    cout << "p2.gender = " << p2.gender << endl;
    cout<<endl;
    cout<<"function with two parameters"<<endl;
    person p3(200,"man");
    cout << "p3.age = " << p3.age << endl;
    cout << "p3.gender = " << p3.gender << endl;


    // 这里创建对象会出错，因为一个参数的构造函数已经被修饰为了explicit，不允许隐式转换。
    //这里存在隐式转换


    // 当构造函数使用了explicit修饰符，不允许隐式转换
    // 此时创建对象会出错
    cout<<endl<<"Implicit Conversion"<<endl;
    person xiaoming = 210;
    string a="woman";
    person xiabai=a;
    cout << "xiaoming.age = " << xiaoming.age << endl;
    cout << "xiaoming.gender = " << xiaoming.gender << endl;

    cout<<"xiaobai.age="<<xiabai.age<<endl;
    cout<<"xiaobai.gender="<<xiabai.gender<<endl;


    // 这里创建对象会出错，因为一个参数的构造函数已经被修饰为了explicit，不允许隐式转换。


    cout<<endl<<"Shallow Copy"<<endl;
    person p4(p1);
    cout << "p4.age = " << p4.age << endl;
    cout << "p4.gender = " << p4.gender << endl;







    return  0;
}