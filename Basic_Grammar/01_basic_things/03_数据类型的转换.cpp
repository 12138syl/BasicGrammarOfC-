//#include <iostream>
///*
//数据类型的转换可以分为两种: 自动类型转换	强制类型转换。
//    自动类型转换:
//    由取值范围小的数据类型，向取值范围大的数据类型转换。
//    转换的过程不需要进行额外的操作，直接赋值就可以了。
//    且转型完成后，不存在值的精度丢失的情况
//
//    强制类型转换:
//    由取值范围大的数据类型，向取值范围小的数据类型转换。
//    转换的过程中需要进行强制的类型转换操作，
//    且转型完成后，可能会出现精度丢失的情况。
//*/
//namespace A {
//    //自动类型转换
//    // 1. 定义一个short类型的变量
//    short num1 = 10;
//    // 2. 转型为int类型的变量
//    //    直接赋值即可完成转型
//    int num2 = num1;
//}
//namespace B {
//    //强制类型转换
//    // 1. 定义一个int类型的变量
//   long double num1 = 200.364589;
//    // 2. 转型为char类型的变量
//    //    需要进行强制类型转换，在需要转型的变量之前添加小括号，里面写上需要转型的类型即可
//    int  num2 = (int)num1;
//
//}
//int main()
//{  
//
//
//    std::cout << "Hello world!" << std::endl;
//    std::cout<<"自动转换："<<std::endl;
//    std::cout<<A::num1<<"\t"<<sizeof(A::num1) << std::endl;
//    std::cout<<A::num2<<"\t"<< sizeof(A::num2) << std::endl;
//    std::cout<<"强制转换："<<std::endl;
//    std::cout<<B::num1<<std::endl;
//    std::cout<<B::num2<<std::endl;
//    std::cout<<"丢失的精度："<<(B::num1 - B::num2)<<std::endl;
//
//    return 0;
//}
