//
// Created by main on 2024/7/16.
//
#include <iostream>


#include "person.h"
using namespace std;



int main() {

    // person p1;
    // cout << p1.getAge() << endl;
    // cout << p1.getGender() << endl;
    //
    // person p2=person(100,"male");
    // cout << &p2 << endl;
    // cout << p2.getAge() << endl;
    // cout << p2.getGender() << endl;
    //
    // person p3=p1.growup(p2);
    // cout<<&p3<<endl;
    // cout << p3.getAge() << endl;
    // cout << p3.getGender() << endl;

    //空指针访问成员函数
    // person* a=NULL;
    // a->testFunction01();
    // a->testFunction02();
    // a->getAge();

    person p1(100,"male");
    p1.fixperson(1000,"female");
    cout << p1.getAge() << endl;
    cout << p1.getGender() << endl;



    //常对象
    /*
     *
在对象创建的时候，使用const修饰的对象，就是常对象。
常对象可以访问任意的属性值，但是不能修改普通属性的值。
常对象可以修改mutable属性的值。
常对象只能调用常函数。
     */
    const person p2(100,"male");
    cout << p2.age << endl;
    cout << p2.gender << endl;

    //p2.age=10000;
    p2.gender="female";
    cout<<p2.gender<<endl;


    return 0;









}