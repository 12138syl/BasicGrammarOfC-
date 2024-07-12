//#include <iostream>
//#include"qfmath.h"
//using namespace std;
//
//
//// 定义了一个函数，其中封装了一部分功能: 打印九九乘法表
//void printNineNineTable() {
//	for (int line = 1; line <= 9; line++) {
//		for (int column = 1; column <= line; column++) {
//			cout << line << " x " << column << " = " << (column * line) << "\t";
//		}
//		cout << endl;
//	}
//}
//
//// 形参：形参是函数定义时，定义的参数，函数调用时，传递给函数的参数
//void add00(int num1, int num2) {
//	cout << "num1 = " << num1 << ", num2 = " << num2 << ", num1 + num2 = " << (num1 + num2) << endl;
//}
//
////带修饰符的形参
////const修饰符：修饰形参num1，表示num1的值不能被修改
//void cal(const int num1, int num2) {
//cout << "num1 = " << num1 << ", num2 = " << num2 << ", num1 + num2 = " << (num1 + num2) << endl;
//
//}
//
//
////带返回值的函数
////返回值类型：函数定义时，定义的返回值类型，函数调用时，返回值类型和函数定义时一致
//int abs(int number) {
//	return number > 0 ? number : -number;
//}
//
//void return_test() {
//	/*
//	1.   在返回值类型不是void的函数中，函数执行结束之前，必须要使用return明确的返回一个结果。
//	2.   在返回值类型是void的函数中，仍然可以使用return关键字，此时仅表示结束函数的执行。
//	*/
//
//	//打印到50后强制退出
//	int number = 1;
//	while (true) {
//
//		cout << number << endl;
//
//		number++;
//		if (number > 50) {
//
//			return;
//
//		}
//	}
//}
//
////带默认值的函数
////默认参数只能放在最后
//int add01(int num1, int num2 = 100) {
//	return num1 + num2;
//}
//float add02(float num1=56.333, float num2 = 100.999) {
//
//	cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
//	return num1 + num2;
//}
//
////函数重载
////函数重载：函数名相同，参数列表不同
//int myadd(int num1=0, int num2=0) {
//	return num1 + num2;
//	
//}
//float myadd(int num1, float num2) {
//	return num1 + num2;
//}
//
//double myadd(double num1, float num2=666) {
//	return num1 + num2;
//	
//}
//
//
////递归函数
//// 递归函数：函数调用自己本身
//
//// 递归函数的缺点：
//// 1. 递归函数的调用深度可能达到一定程度，就会导致栈溢出
//// 2. 递归函数的效率比较低
//
//// 递归函数的优点：
//// 1. 递归函数的代码结构比较清晰
//// 2. 递归函数的效率比较高
//int multiply(int number) {
//	if (number == 1) {
//		return 1;
//	}
//	return number * multiply(number - 1);
//}
//
//// 这是一个主函数
//int main() {
//
//	//// 定义在函数中的代码，默认是不会执行的
//	//// 如果想要执行函数中的代码，我们需要“调用”函数
//	//printNineNineTable();
//
//	//cout << "============" << endl;
//
//	//printNineNineTable();
//	/*add(10, 20);
//	cal(56,44);
//	cout << "abs(-100) = " << abs(-100) << endl;
//	cout << "abs(-45879) = " << abs(100) << endl;*/
//	//return_test();
//	/*cout << "add01(10) = " << add01(10) << endl;
//	cout << "add01(10, 20) = " << add01(10, 20) << endl;
//	cout << "add02(10.5, 20.5) = " << add02(10.5, 20.5) << endl;
//	cout << "add02(10.5) = " << add02(10.5) << endl;
//	cout << "add02() = " << add02() << endl;*/
//	
//
//
//	//printf("myadd(10,20)=%d\n", myadd(10, 20));
//	//printf("myadd(10.5,20.5)=%f\n", myadd(10.5, 20.5));
//	//printf("myadd(10.5)=%f\n", myadd(10.5625));
//	//printf("myadd()=%f\n", myadd());
//
//	//printf("3!=%d\n", multiply(3));
//	for (int index = 1; index <= 100; index++)
//	{
//		cout << getNumber(index) << endl;
//	}
//
//
//
//	cin.get();
//	return 0;
//}
