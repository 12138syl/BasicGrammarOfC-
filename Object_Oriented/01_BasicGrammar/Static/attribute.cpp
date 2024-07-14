//
// Created by main on 2024/7/14.
//
#include <iostream>

using namespace std;

namespace part1 {
    class Person
    {
    public:
        // 静态的成员变量，必须在类内定义、类外初始化赋值
        static int countOfObjs;

        // 静态的常量，可以在类内定义，并同时进行初始化；也可以在类内定义、类外进行初始化
        const static int MIN_AGE;
    };
    int Person::countOfObjs = 0;
    const int Person::MIN_AGE = 0;
}

using namespace part1;

int main() {

    // 访问静态成员变量（属性）

    // 可以直接使用类来访问
    Person::countOfObjs = 20;

    // 也可以通过对象来访问，但是即便使用不同的对象，访问到的空间仍然是相同的空间
    Person xiaobai;
    Person xiaohei;
    xiaohei.countOfObjs = 100;
    xiaobai.countOfObjs = 200;
    xiaohei.countOfObjs ++;
    cout << xiaobai.countOfObjs << endl;
    cout << xiaohei.countOfObjs << endl;
    //xiaobai.MIN_AGE = 10;

    return 0;
}