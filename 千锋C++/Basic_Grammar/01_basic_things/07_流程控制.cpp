//#include <iostream>
//#include <sstream>
//using namespace std;
//
////if���Ļ����﷨
//void if_test00() {
////�����ֳ���������
//
//    int a = 10;
//    if (a > 10) {
//        std::cout << "a > 10" << std::endl;
//    } else {
//        std::cout << "a <= 10" << std::endl;
//    }
//}
////if���ֶ�
//void if_test01() {
////if() {}
//// else if() {}
//// else if() {}
//// else{}
////��Ϊ�������֣�1.�ж�������2.�ж���������ʱ��ִ�е���䣬3.�ж�����������ʱ��ִ�е����
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
//// ע�����
////		������if����else������Ĵ���������� ����ֻ�� һ����� ������£���ʱ�Ĵ������ǿ���ʡ�Բ�д�ģ�
////		���ǣ�ʵ������£������ڽ��г��򿪷���ʱ������Ĵ�����һ�㲻ʡ�ԣ�����
////		��Ϊ���ʡ���˴����ţ���Գ���Ŀɶ������һ��Ӱ�죬Ҳ���׳���BUG������
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
////ifǶ��
//void if_test03() {
//
//    cout<<"ifǶ�����ӣ�"<<endl;
//    cout<<"��ҵ���ŵĽ������������ɡ�"<<"����(I)���ڻ����10��Ԫʱ���������10%��"<<"�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������"<<endl;
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
//    cout<<"����"<<bonus<<endl;
//    cin.get();
//  
//
//  
//
//
//}
////switch���Ļ����﷨
//void switch_test00() {
//    //switch���Ļ����÷�����if�ֶ����ƣ���
//    //switch(���ʽ)
//    //{
//    //	case �������ʽ1��
//    //		���1;
//    //		break;
//    //	case �������ʽ2��
//    //		���2;
//    //		break;
//    //	case �������ʽ3��
//    //		���3;
//    //		break;
//    //	default:
//    //		���4;
//    //		break;
//    //}
//
//    int season = 0;
//    cout << "������һ�����ڣ�1-4����";
//    cin >> season;
//
//    switch (season) {
//    case 1:
//        cout << "��ů����" << endl;
//        break;
//    case 2:
//        cout << "����" << endl;
//        break;
//    case 3:
//        cout << "�����ˬ" << endl;
//        break;
//    case 4:
//        cout << "��ˮ�ɱ�" << endl;
//        break;
//    default:
//        cout << "����ļ���" << endl;
//        break;
//    }
//}
//
////switch��͸
//void switch_test01() {
//    // ָ���ǣ���switch�ı�����ĳһ��caseֵƥ����֮��
//    // ��������������case����default��ƥ�䣬ֱ�����͸��
//
//    //eg:�ж�һ�������ǵ���ĵڼ��죿
//    int year = 0, month = 0, day = 0;
//    cout << "������һ����: ";
//    cin >> year;
//    cout << "������һ����: ";
//    cin >> month;
//    cout << "������һ����: ";
//    cin >> day;
//
//    // ����һ��������������¼�ܵ�����
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
//    cout << year << "��" << month << "��" << day << "����" << year << "��ĵ�" << days << "��" << endl;
//
//
//
//}
//
//
//void while_test00 (){
//    //ѭ����ӡ10��hello world
//    cout<<"while�������﷨��"<<endl;
//    int count = 0;
//    while (count < 10) {
//        cout << count<<" hello world" << endl;
//        count++;
//    }
//
//}
//void while_test01 (){
//     //��100���ڵ�ż���ĺ�
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
//    // ��Ҫ�ڿ���̨������һ�����͵����֣�����û��ڿ���̨������Ĳ���ȷ�����û��ظ����룬ֱ��������ȷΪֹ��
//    int number = 0;
//
//    cout << "������һ�����͵�����: ";
//    cin >> number;
//    while (cin.fail()) {
//        cout << "���������������: ";
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cin >> number;
//    }
//    cout << "number = " << number << endl;
//
//}
//void do_while_test00 (){
//    //do...while���
//    //do�����е��������ִ��һ�Σ���while�����е������ܲ�ִ�С�
//    //do�����е��������ִ��һ�Σ���while�����е������ܲ�ִ�С�
//    int count = 0;
//    do {
//        cout << count << " hello world" << endl;
//        count++;
//    } while (count < 10);
//
//}
//void for_test00() {
//    //��10�Ľ׳�
//    cout << "��10�Ľ׳�" << endl;
//    long long result = 1;
//    for (int i = 1; i <= 10; i++) {
//        result *= i;
//    }
//    cout << result << endl;
//
//}
//void for_test01() {
//    //��100����ż���ĺ�
//    cout << "��100����ż���ĺ�" << endl;
//    int result = 0;
//    for (int i = 2; i <= 100; i += 2) {
//        result += i;
//    }
//    cout << result << endl;
//
//}
//void for_test02() {
//    int count3 = 0, count5 = 0, count35 = 0;
//    // ���������������ֱ�����ͳ���ܹ���3���������֡��ܹ���5���������֡��ܹ�ͬʱ��3��5����������
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
//    cout << "�ܹ���3���������ǲ��ܱ�5���������ָ���: " << count3 << endl;
//    cout << "���Ƿֱ���: " << oss3.str() << endl;
//
//    cout << "�ܹ���5���������ǲ��ܱ�3���������ָ���: " << count5 << endl;
//    cout << "���Ƿֱ���: " << oss5.str() << endl;
//
//    cout << "�ܹ�ͬʱ��3��5���������ָ���: " << count35 << endl;
//    cout << "���Ƿֱ���: " << oss35.str() << endl;
//
//}
//void for_test03() {
//    // for�������﷨:
//    // forѭ����С�����е�ÿһ�����ֶ�����ʡ�Բ�д��
//    // ʡ�Գ�ʼ������: ���԰�ѭ�����Ʊ�����������ѭ�������
//    // ʡ�������жϲ���: Ĭ����������Զ������
//    // ʡ�Ե�������: ���԰Ѷ�ѭ�����Ʊ������޸ķ���ѭ��������
//
//    // ע������: ��Ȼÿһ���ֶ�����ʡ�Բ�д�����Ƿֺ��ǲ���ʡ�Եġ�
//    
//    int i=0;
//    //��ѭ��
//    for (;i<100;) {
//        cout << i << endl;
//        i++;
//    }
//    
//}
//void break_test() {
//    // break: ����ѭ���У���ʾ��������ѭ�������������Ƿ����
//    //        �������Ƕ�׵�ѭ���У�ֻ�ܽ�����ǰ��һ���ѭ��
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
//    // continue: ����ѭ���У���ʾ��������ѭ��
//    //        �������Ƕ�׵�ѭ���У�ֻ�ܽ�����ǰ��һ���ѭ��
//    for (int i = 1; i <=100; i++) {
//        if (i %10==0) {
//            continue;	// �����￪ʼ��ѭ������֮��Ĵ��벻��ִ�У�����ִ�е������ֵĴ��룬�����ж�ѭ�������Ƿ����
//        }
//        cout << i << endl;
//    }
//}
//
//void goto_test() {
//    // goto��䣺
//    // 1. goto���ֻ����ת��һ����ǩ��������ת�������ǩ
//
//    cout<<"goto��䣺"<<endl;
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
//        //goto������ѭ��
//        label4_5:
//            for (int i = 1; i <= 100; i++) {
//                if (i % 10) {
//                    continue;	// �����￪ʼ��ѭ������֮��Ĵ��벻��ִ�У�����ִ�е������ֵĴ��룬�����ж�ѭ�������Ƿ����
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
//    //ѭ����Ƕ��
//    //��ӡ�žų˷���
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