#include <iostream>

using namespace std;

void ���鶨��() {
    // ���飺����Ķ���
  // �������� ��ʶ��[];

  // 1������ָ�����ȵ����飬��ʱ�����е�Ԫ���ǲ���ȫ�ġ�
   static int array1[10];
   cout <<"array1=" << array1 << endl;
   cout<<"*array1="<<*array1 << endl;

  // 2�����������ͬʱ�����������г�ʼ������Ԫ�ء�
   int array2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     // ������һ������Ϊ10�����飬���д洢��Ԫ�طֱ���1��2��3��4��5��6��7��8��9��10
   cout<<"array2=" << array2 << endl;
   cout <<"*array2=" << *array2 << endl;
   int array3[10] = { 1, 2, 3, 4, 5 };     // ������һ������Ϊ10�����飬��������Ԫ����1��2��3��4��5�������Ԫ�ض���Ĭ��ֵ0
   cout <<"array3=" << array3 << endl;
    cout <<"*array3=" << *array3 << endl;
  // 3������һ�����飬ֱ��ָ����ʼ����Ԫ�أ���ȥָ�����ȣ���ʱ����ĳ������ɳ�ʼ������Ԫ�ص�����������
   int array4[] = { 1, 2, 3, 4, 5 };   // ������һ�����飬����Ԫ����1��2��3��4��5����ʱ����ĳ�����5
    cout <<"array4=" << array4 << endl;
    cout <<"*array4=" << *array4 << endl;


  

}
void �������() {
    cout << "��������±������" << endl;
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // ���㳤��
    int len = sizeof(array) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cout << array[i] << endl;
    }
    cout << "���鷶Χ������" << endl;
    int arr[10] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};

    for (int ele : arr) {
        cout << ele << endl;
    }

   

   
}
void �����ڴ����() {
    cout << "�����ڴ����" << endl;
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++) {
        cout << array[i] <<"\t�ĵ�ַ��"<< & array[i] << endl;
    }
}
void ǳ���������() {

     //ǳ������Ҳ���ǵ�ַ�����������������������Ԫ�ص�ַ��
     //���������һ���µ����飬������ԭ����������ͬ����ԭ�������е�ÿһ��Ԫ�����ο������µ������С�
    cout << "ǳ���������" << endl;
    // ����һ����Ҫ����������
    int array[] = { 1, 2, 3, 4, 5 };
    cout << "ԭʼ���飺" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
    cout<<"ԭʼ����ĵ�ַ��"<<&array << endl;
    // ǳ��������ַ����
   
    cout << "ǳ������" << endl;
    int* array_copy_1 = array;
    cout << "ǳ�����ĵ�ַ��" << array_copy_1 << endl;
    for (int i = 0; i < 5; i++) {
        cout << array_copy_1[i] << endl;
    }

    
    cout << "�����" << endl;
    // ���������һ���µĵȳ������飬����Ԫ�����ο�������
    int array_copy_deep[5];
    cout<<"�����ַ��"<<&array_copy_deep<<endl;
    for (int i = 0; i < 5; i++) {
        array_copy_deep[i] = array[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << array_copy_deep[i] << endl;
    }


}

void ��ά����() {
    cout<<"��ά���飺"<<endl;
    // �����ά����:
     // �������� ��ʶ��[����][����];
    int array1[3][5];

    // �������� ��ʶ��[����][����] = { {val1, val2, val3}, {val1, val2, val3} };
    int array2[3][5] = {
            {1, 2, 3, 4, 5},
            {2, 2, 3, 3, 3},
            {3, 2, 1, 4, 5}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // �������� ��ʶ��[����][����] = { val1, val2, val3, val4 };
    // ��ʱϵͳ�Ὣ��ЩԪ���У�ÿ5��Ԫ����ϵ�һ��
    // ���ʣ�ൽ����5����Ԫ�أ���0�չ�5λƴ��һ������
    int array3[3][5] = { 1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200 };
   /* for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }*/
    for (int* p : array3) {
        for (int p2 = 0; p2 < 5;p2++ ) {
            cout << *(p+p2) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // �������� ��ʶ��[][����] = { val1, val2, val3, ... }
    int array4[][5] = { 1, 2, 3, 4, 5, 2, 2, 3, 4, 5, 1 };
   /* for (int i = 0;; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array4[i][j] << " ";
            if(array4[i][j] ==0)
                return;
        }
        cout << endl;
    }*/
    for (int* i : array4) {
        for (int j = 0; j < 5; j++) {
            cout << *(i + j) << " ";
        }
        cout<<endl;
    }




}
int main10() {
    //���鶨��();
    //�������();
    //�����ڴ����();
    //ǳ���������();
    ��ά����();
    cin.get();
   
  
    return 0;
}