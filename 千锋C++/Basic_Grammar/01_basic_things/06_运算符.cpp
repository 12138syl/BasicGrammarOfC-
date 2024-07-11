//#include <iostream>
//
//int main()
//{
//    //算术运算符
//    int a = 1;
//    int b = 2;
//    std::cout<<"a="<<a<<std::endl;
//    std::cout << "b="<<b<<std::endl;
//    std::cout << std::endl;
//    std::cout << "a+b="<<a + b << std::endl;
//    std::cout<<"a-b="<<a-b<<std::endl;
//    std::cout << "a*b="<<a * b << std::endl;
//    std::cout << "a/b="<<a / b << std::endl;
//    std::cout << "a%b="<<a % b << std::endl;
//    std::cout << "a++="<<a++ << std::endl;
//    std::cout << "a--="<<a-- << std::endl;
//    std::cout << "++a="<<++a << std::endl;
//    std::cout << "--a="<<--a << std::endl;
//    std::cout << std::endl;
//    //赋值运算符
//    a = 1;
//    b = 2;
//    std::cout << "a="<<a << std::endl;
//    std::cout << "b="<<b << std::endl;
//    std::cout << "a+=b="<<(a += b) << std::endl;
//    std::cout << "a-=b="<<(a -= b) << std::endl;
//    std::cout << "a*=b="<<(a *= b) << std::endl;
//    std::cout << "a/=b="<<(a /= b) << std::endl;
//    std::cout << "a%=b="<<(a %= b) << std::endl;
//    std::cout << "a>b?a:b="<<(a > b ? a : b) << std::endl;
//  
//    std::cout << std::endl;
//   
//    //关系运算符
//    std::cout << "a==b="<<(a == b) << std::endl;
//    std::cout << "a!=b="<<(a != b) << std::endl;
//    std::cout << "a>b="<<(a > b) << std::endl;
//    std::cout << "a<b="<<(a < b) << std::endl;
//    std::cout << "a>=b="<<(a >= b) << std::endl;
//    std::cout << "a<=b="<<(a <= b) << std::endl;
//    std::cout << std::endl;
//
//    //逻辑运算符
//    /*
//| &    | 与运算，两真即为真，任意一个为假，结果即为假   | true & false    |
//| |    | 或运算，两假即为假，任意一个为真，结果即为真   | true  | false   |
//| !    | 非运算，非真即假，非假即真                   | !true           |
//| ^    | 异或运算，相同为假，不同为真                 | true ^ false    |
//| &&   | 短路与，左边的结果为假，右边的表达式不参与运算 | false && true   |
//| ||   | 短路或，左边的结果为真，右边的表达式不参与运算 | true || false   |
//    
//    */
//    a = 0;
//    b = 1;
//    std::cout << "a="<<a << std::endl;
//    std::cout << "b="<<b << std::endl;
//    std::cout << "a&b="<<(a & b) << std::endl;
//    std::cout << "a|b="<<(a | b) << std::endl;
//    std::cout << "a^b="<<(a ^ b) << std::endl;
//    std::cout << "a&&b="<<(a && b) << std::endl;
//    std::cout << "a||b="<<(a || b) << std::endl;
//    std::cout << "!a="<<(!a) << std::endl;
//    std::cout << std::endl;
//    
//    //位运算符
//    /*
//| &    | 位与运算     | 10 & 20  |
//|  |   | 位或运算     | 10  | 20 |
//| ^    | 位异或运算   | 10 ^ 20  |
//| ~    | 按位取反运算 | ~10      |
//| <<   | 位左移运算   | 10 << 2  |
//| >>   | 位右移运算   | 10 >> 2  |
//    */
//    a = 0x0F;
//    b = 0xF0;
//    std::cout << "a="<<a << std::endl;
//    std::cout << "b="<<b << std::endl;
//    std::cout << "a&b="<<(a & b) << std::endl;
//    std::cout << "a|b="<<(a | b) << std::endl;
//    std::cout << "a^b="<<(a ^ b) << std::endl;
//    std::cout << "~a="<<(~a) << std::endl;
//    std::cout << "a<<1="<<(a << 1) << std::endl;
//    std::cout << "a>>1="<<(a >> 1) << std::endl;
//    std::cout << std::endl;
//    std::cin.get();
//
//
//    return 0;
//
//
//
//}