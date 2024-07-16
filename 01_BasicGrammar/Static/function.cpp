//
// Created by main on 2024/7/14.
//
#include <iostream>
// 被关键字static修饰的函数就是静态函数，与静态属性类似，
// 静态函数依然不隶属于某一个对象，而是隶属于当前类的。
// 静态的函数可以使用对象来调用，也可以直接使用类来调用。
using namespace std;

namespace part1 {
    class Person
    {
    public:
        static void test() {
            int a=1;
            a++;
            cout<<a<<endl;
            cout << "person test" << endl;
        }
    };
}

using namespace part1;

int main() {
    // 使用类来访问
    Person::test();
    Person::test();
    //使用对象来访问
    Person xiaobai;
    xiaobai.test();

    return 0;
}