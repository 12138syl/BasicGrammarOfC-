//#include <iostream>
//#include <sstream>
//using namespace std;
//
////if语句的基础语法
//void if_test00() {
////仅仅分成两个部分
//
//    int a = 10;
//    if (a > 10) {
//        std::cout << "a > 10" << std::endl;
//    } else {
//        std::cout << "a <= 10" << std::endl;
//    }
//}
////if语句分段
//void if_test01() {
////if() {}
//// else if() {}
//// else if() {}
//// else{}
////分为几个部分，1.判断条件，2.判断条件成立时，执行的语句，3.判断条件不成立时，执行的语句
//    int a = 10;
//    if (a > 10) {
//        std::cout << "a > 10" << std::endl;
//    }
//    else if (a == 10) {
//        std::cout << "a == 10" << std::endl;
//    }
//    else {
//        std::cout << "a < 10" << std::endl;
//    }
//}
////
//void if_test02() {
//// 注意事项：
////		无论是if还是else，后面的大括号中如果 有且只有 一条语句 的情况下，此时的大括号是可以省略不写的！
////		但是，实际情况下，我们在进行程序开发的时候，这里的大括号一般不省略！！！
////		因为如果省略了大括号，会对程序的可读性造成一定影响，也容易出现BUG！！！
//    int a = 10;
//    if (a > 10) 
//        std::cout << "a > 10" << std::endl;
//    
//    else if (a == 10) 
//        std::cout << "a == 10" << std::endl;
//    
//    else 
//        std::cout << "a < 10" << std::endl;
//    
//}
////if嵌套
//void if_test03() {
//
//    cout<<"if嵌套例子："<<endl;
//    cout<<"企业发放的奖金根据利润提成。"<<"利润(I)低于或等于10万元时，奖金可提10%；"<<"利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？"<<endl;
//        float I;
//    float bonus;
//
//    cin>>I;
//
//    bonus = 0;
//    if (I > 100)
//    {
//        bonus = (I - 100) / 100 + 3.95;
//    }
//    else
//    {
//        if (I > 60)
//        {
//            bonus = (I - 60) * 0.015 + 3.35;
//        }
//        else
//        {
//            if (I > 40)
//            {
//                bonus = (I - 40) * 0.03 + 2.75;
//            }
//            else
//            {
//                if (I > 20)
//                {
//                    bonus = (I - 20) * 0.05 + 1.75;
//                }
//                else
//                {
//                    if (I > 10)
//                    {
//                        bonus = (I - 10) * 0.075 + 1;
//                    }
//                    else
//                    {
//                        bonus = 0.1 * I;
//                    }
//                }
//            }
//        }
//    }
//    cout<<"奖金："<<bonus<<endl;
//    cin.get();
//  
//
//  
//
//
//}
////switch语句的基础语法
//void switch_test00() {
//    //switch语句的基本用法（与if分段类似）：
//    //switch(表达式)
//    //{
//    //	case 常量表达式1：
//    //		语句1;
//    //		break;
//    //	case 常量表达式2：
//    //		语句2;
//    //		break;
//    //	case 常量表达式3：
//    //		语句3;
//    //		break;
//    //	default:
//    //		语句4;
//    //		break;
//    //}
//
//    int season = 0;
//    cout << "请输入一个季节（1-4）：";
//    cin >> season;
//
//    switch (season) {
//    case 1:
//        cout << "春暖花开" << endl;
//        break;
//    case 2:
//        cout << "闷热" << endl;
//        break;
//    case 3:
//        cout << "秋高气爽" << endl;
//        break;
//    case 4:
//        cout << "滴水成冰" << endl;
//        break;
//    default:
//        cout << "错误的季节" << endl;
//        break;
//    }
//}
//
////switch穿透
//void switch_test01() {
//    // 指的是，当switch的变量和某一个case值匹配上之后，
//    // 将会跳过后续的case或者default的匹配，直接向后穿透。
//
//    //eg:判断一个日期是当年的第几天？
//    int year = 0, month = 0, day = 0;
//    cout << "请输入一个年: ";
//    cin >> year;
//    cout << "请输入一个月: ";
//    cin >> month;
//    cout << "请输入一个日: ";
//    cin >> day;
//
//    // 定义一个变量，用来记录总的天数
//    int days = day;
//
//    // 1: 
//    // 2: 1(31)
//    // 3: 1(31) + 2(28)
//    // 4: 1(31) + 2(28) + 3(31)
//    // ...
//    // 11: 1(31) + 2(28) + 3(31) + 4(30) ... + 10(31)
//    // 12: 1(31) + 2(28) + 3(31) + 4(30) ... + 10(31) + 11(30)
//
//    switch (month) {
//    case 12:
//        days += 30;
//    case 11:
//        days += 31;
//    case 10:
//        days += 30;
//    case 9:
//        days += 31;
//    case 8:
//        days += 31;
//    case 7:
//        days += 30;
//    case 6:
//        days += 31;
//    case 5:
//        days += 30;
//    case 4:
//        days += 31;
//    case 3:
//        days += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
//    case 2:
//        days += 31;
//    default:
//        break;
//    }
//
//    cout << year << "年" << month << "月" << day << "日是" << year << "年的第" << days << "天" << endl;
//
//
//
//}
//
//
//void while_test00 (){
//    //循环打印10次hello world
//    cout<<"while语句基础语法："<<endl;
//    int count = 0;
//    while (count < 10) {
//        cout << count<<" hello world" << endl;
//        count++;
//    }
//
//}
//void while_test01 (){
//     //求100以内的偶数的和
//     int result = 0;
//     int number = 1;
//     while (number <= 100) {
//     	if (number % 2 == 0) {
//     		result += number;
//     	}
//     	number++;
//     }
//     cout << result << endl;
//}
//
//void while_test02 (){
//    // 需要在控制台上输入一个整型的数字，如果用户在控制台上输入的不正确，让用户重复输入，直到输入正确为止。
//    int number = 0;
//
//    cout << "请输入一个整型的数字: ";
//    cin >> number;
//    while (cin.fail()) {
//        cout << "输入错误，重新输入: ";
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cin >> number;
//    }
//    cout << "number = " << number << endl;
//
//}
//void do_while_test00 (){
//    //do...while语句
//    //do语句块中的语句至少执行一次，而while语句块中的语句可能不执行。
//    //do语句块中的语句至少执行一次，而while语句块中的语句可能不执行。
//    int count = 0;
//    do {
//        cout << count << " hello world" << endl;
//        count++;
//    } while (count < 10);
//
//}
//void for_test00() {
//    //求10的阶乘
//    cout << "求10的阶乘" << endl;
//    long long result = 1;
//    for (int i = 1; i <= 10; i++) {
//        result *= i;
//    }
//    cout << result << endl;
//
//}
//void for_test01() {
//    //求100以内偶数的和
//    cout << "求100以内偶数的和" << endl;
//    int result = 0;
//    for (int i = 2; i <= 100; i += 2) {
//        result += i;
//    }
//    cout << result << endl;
//
//}
//void for_test02() {
//    int count3 = 0, count5 = 0, count35 = 0;
//    // 定义三个变量，分别用来统计能够被3整除的数字、能够被5整除的数字、能够同时被3和5整除的数字
//    ostringstream oss3, oss5, oss35;
//
//    for (int i = 1; i <= 100; i++) {
//        if (i % 3 == 0 && i % 5 == 0) {
//            count35++;
//            oss35 << i << ", ";
//        }
//        else if (i % 3 == 0) {
//            count3++;
//            oss3 << i << ", ";
//        }
//        else if (i % 5 == 0) {
//            count5++;
//            oss5 << i << ", ";
//        }
//    }
//    cout << "能够被3整除，但是不能被5整除的数字个数: " << count3 << endl;
//    cout << "它们分别是: " << oss3.str() << endl;
//
//    cout << "能够被5整除，但是不能被3整除的数字个数: " << count5 << endl;
//    cout << "它们分别是: " << oss5.str() << endl;
//
//    cout << "能够同时被3和5整除的数字个数: " << count35 << endl;
//    cout << "它们分别是: " << oss35.str() << endl;
//
//}
//void for_test03() {
//    // for的特殊语法:
//    // for循环的小括号中的每一个部分都可以省略不写！
//    // 省略初始化部分: 可以把循环控制变量，定义在循环的外边
//    // 省略条件判断部分: 默认条件是永远成立的
//    // 省略迭代部分: 可以把对循环控制变量的修改放在循环体里面
//
//    // 注意事项: 虽然每一部分都可以省略不写，但是分号是不能省略的。
//    
//    int i=0;
//    //死循环
//    for (;i<100;) {
//        cout << i << endl;
//        i++;
//    }
//    
//}
//void break_test() {
//    // break: 放在循环中，表示立即结束循环，无论条件是否成立
//    //        如果是在嵌套的循环中，只能结束当前这一层的循环
//
//
//    for (int i = 1; i <= 100; i++) {
//        if (i == 55) {
//            break;
//        }
//        cout << i << endl;
//    }
//}
//
//void continue_test() {
//    // continue: 放在循环中，表示结束本次循环
//    //        如果是在嵌套的循环中，只能结束当前这一层的循环
//    for (int i = 1; i <=100; i++) {
//        if (i %10==0) {
//            continue;	// 从这里开始，循环体中之后的代码不再执行，立即执行迭代部分的代码，继续判断循环条件是否成立
//        }
//        cout << i << endl;
//    }
//}
//
//void goto_test() {
//    // goto语句：
//    // 1. goto语句只能跳转到一个标签，不能跳转到多个标签
//
//    cout<<"goto语句："<<endl;
//        label1:
//            cout << 1 << endl;
//            goto label3;
//
//        label2:
//            cout << 2 << endl;
//            goto label5;
//
//        label3:
//            cout << 3 << endl;
//
//        label4:
//            cout << 4 << endl;
//            goto label2;
//
//        //goto语句的死循环
//        label4_5:
//            for (int i = 1; i <= 100; i++) {
//                if (i % 10) {
//                    continue;	// 从这里开始，循环体中之后的代码不再执行，立即执行迭代部分的代码，继续判断循环条件是否成立
//                }
//                cout << i << endl;
//            }
//            goto label4_5;
//
//        label5:
//            cout << "end" << endl;
//            goto label4_5;
//
//}
//void multiple_loops_test(){
//    //循环的嵌套
//    //打印九九乘法表
//   
//    for (int line = 1; line <= 9; line++) {
//        for (int column = 1; column <= line; column++) {
//            cout << column << " x " << line << " = " << (column * line) << "\t";
//        }
//        cout << endl;
//    }
//
//}
//int main(){
//    /*if_test00();
//    if_test01();
//    if_test02();*/
//    //if_test03();
//    /*
//    switch_test00();
//    switch_test01();*/
//   /* while_test00();
//    while_test01();
//    while_test02();*/
//
//   // do_while_test00();
//    /*for_test00();
//    for_test01();
//    for_test02();
//    for_test03();
//    */
//
//    //break_test();
//    //continue_test();
//
//    //goto_test();
//    multiple_loops_test();
//    cin.get();
//    return 0;
//}