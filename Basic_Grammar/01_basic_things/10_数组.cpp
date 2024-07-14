#include <iostream>

using namespace std;

void 数组定义() {
    // 数组：数组的定义
  // 数据类型 标识符[];

  // 1、定义指定长度的数组，此时数组中的元素是不安全的。
   static int array1[10];
   cout <<"array1=" << array1 << endl;
   cout<<"*array1="<<*array1 << endl;

  // 2、定义数组的同时，设置数组中初始化填充的元素。
   int array2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     // 定义了一个长度为10的数组，其中存储的元素分别是1、2、3、4、5、6、7、8、9、10
   cout<<"array2=" << array2 << endl;
   cout <<"*array2=" << *array2 << endl;
   int array3[10] = { 1, 2, 3, 4, 5 };     // 定义了一个长度为10的数组，其中填充的元素是1、2、3、4、5，后面的元素都是默认值0
   cout <<"array3=" << array3 << endl;
    cout <<"*array3=" << *array3 << endl;
  // 3、定义一个数组，直接指定初始化的元素，不去指定长度，此时数组的长度是由初始化部分元素的数量决定的
   int array4[] = { 1, 2, 3, 4, 5 };   // 定义了一个数组，填充的元素是1、2、3、4、5，此时数组的长度是5
    cout <<"array4=" << array4 << endl;
    cout <<"*array4=" << *array4 << endl;


  

}
void 数组遍历() {
    cout << "数组遍历下标遍历：" << endl;
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // 计算长度
    int len = sizeof(array) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cout << array[i] << endl;
    }
    cout << "数组范围遍历：" << endl;
    int arr[10] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};

    for (int ele : arr) {
        cout << ele << endl;
    }

   

   
}
void 数组内存分析() {
    cout << "数组内存分析" << endl;
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++) {
        cout << array[i] <<"\t的地址："<< & array[i] << endl;
    }
}
void 浅拷贝与深拷贝() {

     //浅拷贝：也就是地址拷贝，拷贝到的是数组的首元素地址。
     //深拷贝：定义一个新的数组，长度与原来的数组相同，将原来数组中的每一个元素依次拷贝到新的数组中。
    cout << "浅拷贝与深拷贝" << endl;
    // 定义一个需要拷贝的数组
    int array[] = { 1, 2, 3, 4, 5 };
    cout << "原始数组：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
    cout<<"原始数组的地址："<<&array << endl;
    // 浅拷贝、地址拷贝
   
    cout << "浅拷贝：" << endl;
    int* array_copy_1 = array;
    cout << "浅拷贝的地址：" << array_copy_1 << endl;
    for (int i = 0; i < 5; i++) {
        cout << array_copy_1[i] << endl;
    }

    
    cout << "深拷贝：" << endl;
    // 深拷贝，创建一个新的等长的数组，并将元素依次拷贝过来
    int array_copy_deep[5];
    cout<<"深拷贝地址："<<&array_copy_deep<<endl;
    for (int i = 0; i < 5; i++) {
        array_copy_deep[i] = array[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << array_copy_deep[i] << endl;
    }


}

void 二维数组() {
    cout<<"二维数组："<<endl;
    // 定义二维数组:
     // 数据类型 标识符[行数][列数];
    int array1[3][5];

    // 数据类型 标识符[行数][列数] = { {val1, val2, val3}, {val1, val2, val3} };
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

    // 数据类型 标识符[行数][列数] = { val1, val2, val3, val4 };
    // 此时系统会将这些元素中，每5个元素组合到一起
    // 最后剩余到不到5个的元素，补0凑够5位拼成一个数组
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

    // 数据类型 标识符[][列数] = { val1, val2, val3, ... }
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
    //数组定义();
    //数组遍历();
    //数组内存分析();
    //浅拷贝与深拷贝();
    二维数组();
    cin.get();
   
  
    return 0;
}