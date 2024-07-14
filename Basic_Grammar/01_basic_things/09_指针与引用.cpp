//#include <iostream>
//
//using namespace std;
//
////程序在执行的时候，会在内存中开辟一些空间，存储一些数据。而内存又可以分为四个分区:
//
////栈区:	由系统进行内存的管理。主要存放函数的参数以及局部变量。
////		在函数完成执行，系统自行释放栈区内存，不需要用户管理。
////
////堆区:	由编程人员手动申请，手动释放，若不手动释放，
////		程序结束后由系统回收，生命周期是整个程序运行期间。
//// 
////全局区:	全局区内的变量在程序编译阶段已经分配好内存空间并初始化。
////		这块内存在程序的整个运行期间都存在，主要存放静态变量、全局变量和常量。
//// 
////代码区:	存放程序编译之后生成的二进制代码，例如我们写的函数，
////		就是存储在这里的。函数在程序编译之后，存储于代码区。调用函数的时候，会压到栈区执行其中的代码。
//
//
////全局区
//int g_a = 10;//全局区 变量
//const int g_b = 10;//全局区 常量
//static int g_s_a = 10;//全局区 静态变量
//static const int g_s_b = 10;//全局区 静态常量
//
//
//void 栈区内存测试(){
//	//栈区
//	int a = 10;
//	const int b = 10;
//
//	static int s_a = 10;
//	static const int s_b = 10;
//
//
//	cout << "栈区变量：" << &a << endl;
//	cout <<"栈区常量" << &b << endl;
//	cout << endl;
//	cout << "栈区静态变量：" << &s_a << endl;
//	cout << "栈区静态常量" << &s_b << endl;
//
//
//}
//
//
//int* getNumber() {
//	int* number = new int(100);
//	cout << "number = " << number << endl;
//	return number;
//}
//
////指针变量定义
//void 指针定义(){
//	// 定义了一个int类型的变量num，值为100
//// 也就是在内存中开辟了一个4字节的空间，存储的值为100
//	int num = 100;
//
//	// 那么，num的地址怎么获取呢？
//	// &num 就可以获取到变量num的地址！
//	// 那么，这个地址应该用什么类型的变量来接收呢？
//	int* p = &num;
//
//	// 我们可以直接输出指针类型的变量p中存储的内存地址
//	cout <<"num=" << num << endl;
//	cout<<"&num="<<&num << endl;
//	cout <<"p=" << p << endl;	// 输出的就是一个内存地址，一般是用一个十六进制的数字来表示
//
//	// 那么我们如何通过这个地址来找到它指向的空间呢？
//	// *p
//	cout <<"*p=" << *p << endl;	// 输出的就是指针变量p中存储的地址所指向的空间中存储的值！也就是变量num的值！
//
//}
//
//
//void 空指针(){
//	cout << "空指针" << endl;
//	int* p = NULL;		// 这里的指针变量p没有存储任何的地址，就是一个空指针。
//
//	// 设置为NULL的指针变量，存储的地址其实是0，但是地址0到255的内存为系统内存，不允许访问
//	// 因此这里会出现“读取访问权限”的问题
//	cout << *p << endl;
//
//
//	
//
//}
//
//void 野指针(){
//
//	cout << "野指针" << endl;
//	// 这里定义了一个指针变量，随便写了一个地址，这个地址对应的空间极有可能是不存在的
//	int* q = (int*)0x1234;
//	// 访问野指针，也是会出现问题的
//	cout << *q << endl;
//
//}
//
//void 常量指针与指针常量() {
//	cout << "常量指针与指针常量" << endl;
//	int num1 = 100;
//	int num2 = 200;
//
//	// const放在*之前，表示常量指针，即常量的指针
//	// 指针的指向是可以修改的，但是不能通过指针来修改指向空间的值
//	const int* p1 = &num1;
//	p1 = &num2;
//	// *p1 = 200;
//
//	// const放在*之后，表示指针常量，即这个指针是一个常量
//	// 可以通过指针修改指向空间的值，但是指针的指向是不可以修改的
//	int* const p2 = &num1;
//	// p2 = &num2;
//	*p2 = 300;
//}
//
////指针在函数中的应用
//void changeNumber(int number) {
//	number = 100;
//	cout << "number = " << number << endl;
//	cout << "changeNumber(int number)结束" << endl;
//}
//
//void changeNumber(int* number) {
//	*number = 100;
//	cout<<"*number = " << *number << endl;
//	cout << "changeNumber(int* number)结束" << endl;
//
//
//}
//
//void changeNumber1(int n) {
//	n = 200;
//}
//void changeNumber2(int& n) {
//	n = 200;
//}
////常量引用
////函数体无法修改引用的值
//void change(const int& n) {
//	cout<<"常量引用"<<endl;
//	// 这里会出问题
//	 //n = 200;//取消注释会报错
//
//	cout << n << endl;
//
//}
//
//void 引用() {
//	cout<<"基本引用"<<endl;
//	int num1 = 10;
//	int num2 = 20;
//
//	// 引用
//	// 引用是定义一个变量，并让这个变量指向另一个变量，两个变量是同一个变量
//	// 引用必须初始化，不能为空
//	// 引用不能改变，引用一旦定义，就不能改变
//	// 引用不能定义为指针，指针可以定义为引用
//	int& num3 = num1;
//	num3 = 30;
//	cout << "num1 = " << num1 << endl;
//	cout << "num3 = " << num3 << endl;
//
//	// 引用的底层原理
//	// 引用就是指针，指针的指向就是引用变量指向的变量
//	//本质来讲就是一个指针常量。
//
//
//	//引用在函数中的应用
//	cout<<"引用在函数中的应用"<<endl;
//	int number = 10;
//
//	changeNumber1(number);
//	cout << "number = " << number << endl;	// 值传递，因此这里的number并没有发生变化
//
//	changeNumber2(number);
//	cout << "number = " << number << endl;	// 引用传递，因此这里的number也会发生变化
//
//
//	//常量引用
//	change(num1);
//
//
//
//
//	//引用的本质
//
//	// 定义一个整型的变量n
//	cout<<"引用的本质"<<endl;
//	int n = 10;
//
//	// 定义n的引用
//	// 这里相当于是 int* const rn = &a;
//	// 这也就解释通了为什么rn和a引用的同一块空间，并且为什么rn不能修改引用。
//	int& rn = n;
//
//	// 在通过引用进行空间访问的时候，系统会自动的转换成 *rn = 200;
//	rn = 200;
//	cout << "n = " << n << endl;
//	cout << "rn = " << rn << endl;
//
//}
//int main()
//{
//	//// 定义局部变量
//	//int num1 = 10;
//	//// 定义局部常量
//	//const int num2 = 10;
//	//// 定义局部静态变量
//	//static int num3 = 10;
//	//// 定义局部静态常量
//	//static const int num4 = 10;
//	//cout << "全局区" << endl;
//	//cout << "全局区变量：" << &g_a << endl;
//	//cout << "全局区常量：" << &g_b << endl;
//	//cout  << endl;
//	//cout <<"全局区静态变量：" << &g_s_a << endl;
//	//cout << "全局区静态常量：" << &g_s_b << endl;
//
//	//cout << &num1 << endl;		// 栈区
//	//cout << &num2 << endl;		// 栈区
//	//cout << &num3 << endl;		// 全局区
//	//cout << &num4 << endl;		// 全局区
//	//cout << "栈区" << endl;
//	
// //   栈区内存测试();
//
//
//	//cout << "堆区：" << endl;
//	//int* p = getNumber();
//	//cout << "p = " << p << endl;
//	//cout << "*p = " << *p << endl;
//
//
//	//指针定义();
//	//空指针();
//	//野指针();
//
//	////指针在函数中的应用
//	//int num = 10;
//
//	//// 这里是值传递，传递到函数changeNumber中的是10，因此在函数中修改参数number的值，对这里的变量num没有影响
//	//changeNumber(num);
//	//cout << "num = " << num << endl;
//
//	//// 这里是地址传递，传递到函数changeNumber中的是变量num的地址，在函数中通过地址修改指向空间的值，这里的num会受到影响
//	//changeNumber(&num);
//	//cout << "num = " << num << endl;
//
//
//	//引用
//	引用();
//	cin.get();
//	return  EXIT_SUCCESS;
//
//}