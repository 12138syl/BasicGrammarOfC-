//#include<iostream>
//using namespace std;
//
//void string_test0() {
///*string str：生成空字符串
//
//string s(str)：生成字符串为str的复制品
//
//string s(str, strbegin, strlen)：将字符串str中从下标strbegin开始、长度为strlen的部分作为字符串初值
//
//string s(cstr, char_len)：以C_string类型cstr的前char_len个字符串作为字符串s的初值
//
//string s(num, c)：生成num个c字符的字符串
//
//string s(str, stridx)：将字符串str中从下标stridx开始到字符串结束的位置作为字符串初值*/
//
//      
//    cout << "string的构造函数的形式：" << endl;
//    string str1;               //生成空字符串
//    string str2("123456789");  //生成"1234456789"的复制品
//    string str3("12345", 2, 3);//结果为"123"
//    string str4("0123456", 5);  //从该字符串的结果为"01234"
//    string str5(5, '1');       //结果为"11111"
//    string str6(str2, 5);      //从str2的第二个字符到最后一个字符,结果为"3456789"
//
//    cout << "str1:" << str1 << endl;
//    cout << "str2:" << str2 << endl;
//    cout << "str3:" << str3 << endl;
//    cout << "str4:" << str4 << endl;
//    cout << "str5:" << str5 << endl;
//    cout << "str6:" << str6 << endl;
//}
//void string_test1() {
//
///*1. size()和length()：返回string对象的字符个数，他们执行效果相同。
//
//2. max_size()：返回string对象最多包含的字符数，超出会抛出length_error异常
//
//3. capacity()：重新分配内存之前，string对象能包含的最大字符数*/
//
//
//    cout << "string的大小和容量：" << endl;
//    string s("1234567");
//    cout << "s:" << s << endl;
//    cout << "size=" << s.size() << endl;
//    cout << "length=" << s.length() << endl;
//    cout << "max_size=" << s.max_size() << endl;
//    cout << "capacity=" << s.capacity() << endl;
//    }
//void string_test2() {
//    cout << "string的字符串比较：" << endl;
//    
//    // (A的ASCII码是65，a的ASCII码是97)
//   // 前面减去后面的ASCII码，>0返回1，<0返回-1，相同返回0
//    string A("aBcd");
//    string B("Abcd");
//    string C("123456");
//    string D("123dfg");
//
//    // "aBcd" 和 "Abcd"比较------ a > A
//    cout << "A.compare(B)：" << A.compare(B) << endl;                          // 结果：1
//
//    // "cd" 和 "Abcd"比较------- c > A
//    cout << "A.compare(2, 3, B):" << A.compare(2, 3, B) << endl;                // 结果：1
//
//    // "cd" 和 "cd"比较 
//    cout << "A.compare(2, 3, B, 2, 3):" << A.compare(2, 3, B, 2, 3) << endl;  // 结果：0
//
//
//    // 由结果看出来：0表示下标，3表示长度
//    // "123" 和 "123"比较 
//    cout << "C.compare(0, 3, D, 0, 3)" << C.compare(0, 3, D, 0, 3) << endl;    // 结果：0
//
//    
//}
//void string_test3() {
//    
//    cout << "string的插入：" << endl;
//    string s1;
//    cout << "s1:" << s1 << endl; // s1:  初始状态为空
//    
//    // 尾插一个字符
//    s1.push_back('a');
//    s1.push_back('b');
//    s1.push_back('c');
//    cout << "s1:" << s1 << endl; // s1:abc
//    s1.pop_back();
//
//    cout << "s1:" << s1 << endl; // s1:ab
//    // insert(pos,char):在制定的位置pos前插入字符char
//    s1.insert(s1.begin(), '1');
//    cout << "s1:" << s1 << endl; // s1:1abc
//
//}
//void DataTypeConversion() {
//    //自动转换
//    //short a0 = 999;
//    int a0 = 999;
//    cout << "a0:" << a0 << endl;
//    cout << sizeof(a0) << endl;
//    
//    //int a1 = a0;
//    short a1 = a0;
//    cout << a1 << endl;
//
//    cout << sizeof(a1) << endl;
//
//    //强制转换
//
//    int b0 = 35;//#的ascii码值
//    char b1 = char(b0);
//    cout << b1 << endl;;//#
//
//
//
//
//
//
//}
//int main() {
//    //// 整型
//    //short num1 = 10;
//    //int num2 = 20;
//    //long num3 = 30;
//    //long long num4 = 40;
//
//    //// 浮点型
//    //float num5 = 3.14f;		// float类型最好在字面量的后面添加f
//    //double num6 = 3.14;
//
//    //// 布尔型
//    //bool num7 = true;
//
//    //// 字符型
//    //char num8_0 = 'a';		// 字符需要包含在一对单引号里面
//    //char num8_1 = num8_0+1;//也可以这样定义字符，表示字符在ascii码表中的位置
//    //cout << "字符型数据测试：" << endl;
//    //cout << "num8_0:\t\t\t" << num8_0<<endl<<"num8_0+1（即num8_1）:" << num8_1 << endl;
//    //// 字符串类型
//    //string num9 = "hello";	// 字符串需要包含在一对双引号里面
//
//    //cout << "num9:" << num9 << endl;
//    //cout << "num9[0]:" << num9[0] << endl << "num9[3]:" << num9[3] << endl;
//    //string_test0();
//    //string_test1();
//    //string_test2();
//    //string_test3();
//    DataTypeConversion();
//
//    cin.get();
//    return 0;
//
//
//
//}
