//#include<iostream>
//using namespace std;
//
//void string_test0() {
///*string str�����ɿ��ַ���
//
//string s(str)�������ַ���Ϊstr�ĸ���Ʒ
//
//string s(str, strbegin, strlen)�����ַ���str�д��±�strbegin��ʼ������Ϊstrlen�Ĳ�����Ϊ�ַ�����ֵ
//
//string s(cstr, char_len)����C_string����cstr��ǰchar_len���ַ�����Ϊ�ַ���s�ĳ�ֵ
//
//string s(num, c)������num��c�ַ����ַ���
//
//string s(str, stridx)�����ַ���str�д��±�stridx��ʼ���ַ���������λ����Ϊ�ַ�����ֵ*/
//
//      
//    cout << "string�Ĺ��캯������ʽ��" << endl;
//    string str1;               //���ɿ��ַ���
//    string str2("123456789");  //����"1234456789"�ĸ���Ʒ
//    string str3("12345", 2, 3);//���Ϊ"123"
//    string str4("0123456", 5);  //�Ӹ��ַ����Ľ��Ϊ"01234"
//    string str5(5, '1');       //���Ϊ"11111"
//    string str6(str2, 5);      //��str2�ĵڶ����ַ������һ���ַ�,���Ϊ"3456789"
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
///*1. size()��length()������string������ַ�����������ִ��Ч����ͬ��
//
//2. max_size()������string�������������ַ������������׳�length_error�쳣
//
//3. capacity()�����·����ڴ�֮ǰ��string�����ܰ���������ַ���*/
//
//
//    cout << "string�Ĵ�С��������" << endl;
//    string s("1234567");
//    cout << "s:" << s << endl;
//    cout << "size=" << s.size() << endl;
//    cout << "length=" << s.length() << endl;
//    cout << "max_size=" << s.max_size() << endl;
//    cout << "capacity=" << s.capacity() << endl;
//    }
//void string_test2() {
//    cout << "string���ַ����Ƚϣ�" << endl;
//    
//    // (A��ASCII����65��a��ASCII����97)
//   // ǰ���ȥ�����ASCII�룬>0����1��<0����-1����ͬ����0
//    string A("aBcd");
//    string B("Abcd");
//    string C("123456");
//    string D("123dfg");
//
//    // "aBcd" �� "Abcd"�Ƚ�------ a > A
//    cout << "A.compare(B)��" << A.compare(B) << endl;                          // �����1
//
//    // "cd" �� "Abcd"�Ƚ�------- c > A
//    cout << "A.compare(2, 3, B):" << A.compare(2, 3, B) << endl;                // �����1
//
//    // "cd" �� "cd"�Ƚ� 
//    cout << "A.compare(2, 3, B, 2, 3):" << A.compare(2, 3, B, 2, 3) << endl;  // �����0
//
//
//    // �ɽ����������0��ʾ�±꣬3��ʾ����
//    // "123" �� "123"�Ƚ� 
//    cout << "C.compare(0, 3, D, 0, 3)" << C.compare(0, 3, D, 0, 3) << endl;    // �����0
//
//    
//}
//void string_test3() {
//    
//    cout << "string�Ĳ��룺" << endl;
//    string s1;
//    cout << "s1:" << s1 << endl; // s1:  ��ʼ״̬Ϊ��
//    
//    // β��һ���ַ�
//    s1.push_back('a');
//    s1.push_back('b');
//    s1.push_back('c');
//    cout << "s1:" << s1 << endl; // s1:abc
//    s1.pop_back();
//
//    cout << "s1:" << s1 << endl; // s1:ab
//    // insert(pos,char):���ƶ���λ��posǰ�����ַ�char
//    s1.insert(s1.begin(), '1');
//    cout << "s1:" << s1 << endl; // s1:1abc
//
//}
//void DataTypeConversion() {
//    //�Զ�ת��
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
//    //ǿ��ת��
//
//    int b0 = 35;//#��ascii��ֵ
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
//    //// ����
//    //short num1 = 10;
//    //int num2 = 20;
//    //long num3 = 30;
//    //long long num4 = 40;
//
//    //// ������
//    //float num5 = 3.14f;		// float����������������ĺ������f
//    //double num6 = 3.14;
//
//    //// ������
//    //bool num7 = true;
//
//    //// �ַ���
//    //char num8_0 = 'a';		// �ַ���Ҫ������һ�Ե���������
//    //char num8_1 = num8_0+1;//Ҳ�������������ַ�����ʾ�ַ���ascii����е�λ��
//    //cout << "�ַ������ݲ��ԣ�" << endl;
//    //cout << "num8_0:\t\t\t" << num8_0<<endl<<"num8_0+1����num8_1��:" << num8_1 << endl;
//    //// �ַ�������
//    //string num9 = "hello";	// �ַ�����Ҫ������һ��˫��������
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
