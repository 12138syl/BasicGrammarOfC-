#include <iostream>

// 定义一个函数，其中包含局部静态变量
void func() {
    static int count = 0; // 这是一个局部静态变量，其作用域限制在func()函数内，
    // 但是其生存周期贯穿整个程序运行过程。
    count++;
    std::cout << "This function has been called " << count << " times.\n";
}

// 主函数
int main() {
    func(); // 第一次调用func()
    func(); // 第二次调用func()
    func();
    // 注意，由于count是静态的，它的值将在两次调用之间保持不变。
    return 0;
}