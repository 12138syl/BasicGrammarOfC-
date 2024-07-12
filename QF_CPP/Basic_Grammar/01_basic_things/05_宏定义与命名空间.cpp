//#include <iostream>
//
////宏定义
//#define PI 3.1415926
//#define fun(x) x*x
//#define fun2(x,y) x*y
//#define fun3 3+2
//#define fun4 (3+2)
////using namespace std;
//namespace A {
//    
//    int r = 10;
//    double s=PI*fun(r);
//    void print() {
//        std::cout << "半径r=" << r << std::endl;
//        std::cout << "周长s=" << s << std::endl;
//    }
//
//
//}
//namespace B {
//    
//   int a=fun3;
//   int b = fun3 * fun3;//(3+2*3+2)
//   int c = fun4;
//   int d = fun4 * fun4;//[(3+2)*(3+2)]
//   void print() {
//        std::cout << "a=" << a << std::endl;
//        std::cout << "b=" << b << std::endl;
//        std::cout << "c=" << c << std::endl;
//        std::cout << "d=" << d << std::endl;
//    }
//
//}
//namespace C {
//
//    char a = 'c';
//
//    namespace D {
//        char b = 'd';
//        void print1();
//        void print2() {
//            std::cout << "a=" << a << std::endl;
//            std::cout << "b=" << b << std::endl;
//        }
//    }
//}
//void C::D::print1() {
//    std::cout << "a=" << a << std::endl;
//    std::cout << "b=" << b << std::endl;
//}
//// 定义命名空间
//namespace constant {
//    const double P = 3.141592653;
//    int num1 = 100;
//    int num2 = 200;
//}
//int main()
//{
//    A::print();
//    std::cout << std::endl;
//    B::print();
//    std::cout << std::endl;
//    C::D::print1();
//    std::cout << std::endl;
//    C::D::print2();
//    std::cout << std::endl;
//    //int num1 = 19987;
//    using namespace constant;
//    std::cout <<num1<< std::endl;  // 输出当前命名空间中的num1
//    std::cout << constant::num1 << std::endl; // 输出constant命名空间中的num1
//  
//
//    std::cin.get();
//    return 0;
//    
//}
