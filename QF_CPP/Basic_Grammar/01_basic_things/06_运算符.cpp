//#include <iostream>
//
//int main()
//{
//    //���������
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
//    //��ֵ�����
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
//    //��ϵ�����
//    std::cout << "a==b="<<(a == b) << std::endl;
//    std::cout << "a!=b="<<(a != b) << std::endl;
//    std::cout << "a>b="<<(a > b) << std::endl;
//    std::cout << "a<b="<<(a < b) << std::endl;
//    std::cout << "a>=b="<<(a >= b) << std::endl;
//    std::cout << "a<=b="<<(a <= b) << std::endl;
//    std::cout << std::endl;
//
//    //�߼������
//    /*
//| &    | �����㣬���漴Ϊ�棬����һ��Ϊ�٣������Ϊ��   | true & false    |
//| |    | �����㣬���ټ�Ϊ�٣�����һ��Ϊ�棬�����Ϊ��   | true  | false   |
//| !    | �����㣬���漴�٣��Ǽټ���                   | !true           |
//| ^    | ������㣬��ͬΪ�٣���ͬΪ��                 | true ^ false    |
//| &&   | ��·�룬��ߵĽ��Ϊ�٣��ұߵı��ʽ���������� | false && true   |
//| ||   | ��·����ߵĽ��Ϊ�棬�ұߵı��ʽ���������� | true || false   |
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
//    //λ�����
//    /*
//| &    | λ������     | 10 & 20  |
//|  |   | λ������     | 10  | 20 |
//| ^    | λ�������   | 10 ^ 20  |
//| ~    | ��λȡ������ | ~10      |
//| <<   | λ��������   | 10 << 2  |
//| >>   | λ��������   | 10 >> 2  |
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