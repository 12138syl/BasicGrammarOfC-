//#include <iostream>
//#include"qfmath.h"
//using namespace std;
//
//
//// ������һ�����������з�װ��һ���ֹ���: ��ӡ�žų˷���
//void printNineNineTable() {
//	for (int line = 1; line <= 9; line++) {
//		for (int column = 1; column <= line; column++) {
//			cout << line << " x " << column << " = " << (column * line) << "\t";
//		}
//		cout << endl;
//	}
//}
//
//// �βΣ��β��Ǻ�������ʱ������Ĳ�������������ʱ�����ݸ������Ĳ���
//void add00(int num1, int num2) {
//	cout << "num1 = " << num1 << ", num2 = " << num2 << ", num1 + num2 = " << (num1 + num2) << endl;
//}
//
////�����η����β�
////const���η��������β�num1����ʾnum1��ֵ���ܱ��޸�
//void cal(const int num1, int num2) {
//cout << "num1 = " << num1 << ", num2 = " << num2 << ", num1 + num2 = " << (num1 + num2) << endl;
//
//}
//
//
////������ֵ�ĺ���
////����ֵ���ͣ���������ʱ������ķ���ֵ���ͣ���������ʱ������ֵ���ͺͺ�������ʱһ��
//int abs(int number) {
//	return number > 0 ? number : -number;
//}
//
//void return_test() {
//	/*
//	1.   �ڷ���ֵ���Ͳ���void�ĺ����У�����ִ�н���֮ǰ������Ҫʹ��return��ȷ�ķ���һ�������
//	2.   �ڷ���ֵ������void�ĺ����У���Ȼ����ʹ��return�ؼ��֣���ʱ����ʾ����������ִ�С�
//	*/
//
//	//��ӡ��50��ǿ���˳�
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
////��Ĭ��ֵ�ĺ���
////Ĭ�ϲ���ֻ�ܷ������
//int add01(int num1, int num2 = 100) {
//	return num1 + num2;
//}
//float add02(float num1=56.333, float num2 = 100.999) {
//
//	cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
//	return num1 + num2;
//}
//
////��������
////�������أ���������ͬ�������б�ͬ
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
////�ݹ麯��
//// �ݹ麯�������������Լ�����
//
//// �ݹ麯����ȱ�㣺
//// 1. �ݹ麯���ĵ�����ȿ��ܴﵽһ���̶ȣ��ͻᵼ��ջ���
//// 2. �ݹ麯����Ч�ʱȽϵ�
//
//// �ݹ麯�����ŵ㣺
//// 1. �ݹ麯���Ĵ���ṹ�Ƚ�����
//// 2. �ݹ麯����Ч�ʱȽϸ�
//int multiply(int number) {
//	if (number == 1) {
//		return 1;
//	}
//	return number * multiply(number - 1);
//}
//
//// ����һ��������
//int main() {
//
//	//// �����ں����еĴ��룬Ĭ���ǲ���ִ�е�
//	//// �����Ҫִ�к����еĴ��룬������Ҫ�����á�����
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
