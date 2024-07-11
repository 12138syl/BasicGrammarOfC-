#include<iostream>
#include<string.h>
using namespace std;
void for_loop_test0() {
	cout << "1~100遍历：" << endl;
	for (int i = 1; i < 100; i++) {
		cout << i << " ";
	}
}
void for_loop_test1(){
	int i = 0;
	for (;;) {
		cout << "无限循环！"<<i << endl;
		i++;
	}
}
void for_loop_test2() {
	int i = 0;
	for (;;i++) {
		if (30 > i)
			break;
		cout << "循环到30" << i << endl;
	
	}
}
void while_loop_test() {
	cout << "10!的计算：";
	int i = 1;
	int sum=1;
	while (i <=10) {
		sum =sum* i;
		i++;

	}
	cout << "10!="<< sum << endl;

}
void do_while_loop_test() {

	cout << "10!的计算：";
	int i = 1;
	int sum = 1;
	do
	{
		sum = sum * i;
		i++;

	} while (i <=10);
	
	cout << "10!=" << sum << endl;

}