#include <iostream>

// ����һ�����������а����ֲ���̬����
void func() {
    static int count = 0; // ����һ���ֲ���̬��������������������func()�����ڣ�
    // �������������ڹᴩ�����������й��̡�
    count++;
    std::cout << "This function has been called " << count << " times.\n";
}

// ������
int main() {
    func(); // ��һ�ε���func()
    func(); // �ڶ��ε���func()
    func();
    // ע�⣬����count�Ǿ�̬�ģ�����ֵ�������ε���֮�䱣�ֲ��䡣
    return 0;
}