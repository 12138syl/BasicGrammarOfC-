# **OOP00**

## �����������Ĵ���
### 1. ������

�����ɸ�������ͬ����������Ϊ�Ķ����У���ȡ����Щ��ͬ����������Ϊ�����Ϊһ���ࡣ

���ж������еĶ����е���������Ϊ�����У�������**����**��ʾ����Ϊ��**����**��ʾ��

> ��ν���ԣ���ʵ���Ƕ��������е�һ��������

```c++
// ���һ���࣬������
// ����: �������Ա�����
// ����: ��·���Է�
class Person {
public:
    string name;
    string gender;
    int age;
    
    void walk() {
        cout << "�������·" << endl;
    }
    void eat() {
        cout << "�����Է�" << endl;
    }
}
```

>   ע������:
>
>   �����ж�������ԡ�������Ĭ�϶���private��Ȩ�ޣ��������ǲ��ܷ��ʵġ������Ҫ��������ʣ���Ҫ�޸�ΪpublicȨ�ޡ�
>
>    // 
>
>   public: ������λ�ö����Է���
>
>   protected: �ڵ�ǰ��������п��Է���
>
>   private: ֻ���ڵ�ǰ���з���


### 2. ����Ĵ���

```c++
int main() {
	// 1. ֱ�Ӵ���������ʽ����
    Person xiaobai;

    // 2. ��ʽ����
    Person xiaobei = Person();
    
    // 3. �ؼ���new   
    Person* xiaowang = new Person();
    
    return 0;
}
```

�����������ִ�����ʽ�У�ǰ���ַ�ʽ�����Ƶġ������ڴ��������ʱ��������Ҫ����û��ʹ�ùؼ���new��

|            | ʹ��new                | û��ʹ��new    |
| ---------- | ---------------------- | -------------- |
| �ڴ淽��   | �ڶѿռ俪��           | ��ջ�ռ俪��   |
| �ڴ����   | ��Ҫ�ֶ�ʹ��delete���� | ����Ҫ�ֶ����� |
| ���Գ�ʼ�� | �Զ���Ĭ�ϵĳ�ʼֵ     | û�г�ʼֵ     |
| �﷨       | ��Ҫ����*�����ձ���    | ����Ҫʹ��*    |
| ��Ա����   | ͨ��.����              | ͨ��->����     |


### 3. ��Ա����

��Ա���ʣ����������еĳ�Ա�����ԡ���������

```c++
int main() {
    // ����Person����
    Person xiaobai;
    
    // �������е�����
    xiaobai.name = "xiao bai";
    xiaobai.age = 10;
    
    // �������еķ���
    xiaobai.walk();
    xiaobai.eat();
}
```

```c++
int main() {
    // ʹ��new��������
    Person* xiaobai = new Person();
    
    // �������е�����
    xiaobai -> name = "xiao bai";
    xiaobai -> age = 1;
    
    // �������еķ���
    xiaobai -> walk();
    xiaobai -> eat();
}
```


### 4. ��ı���
��ı��ʣ���ʵ����һ���ṹ�塣
��C++�У�struct �� class ���﷨�Ϸǳ����ƣ�  
��Ҫ��������Ĭ�ϵķ��ʼ���ͬ��  
struct ��Ĭ�Ϸ��ʼ����� public���� class ��Ĭ�Ϸ��ʼ����� private��  
�����ҽ�����һ�� Person ���һ��ͬ���ܵ� PersonStruct �ṹ������ӣ����Ƕ�������һЩ��Ա�����ͳ�Ա������

```c++

class Person {
public:
    // ���캯��
    Person(const std::string& name, int age) : m_name(name), m_age(age) {}

    // ��Ա����
    void printInfo() const {
        std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
    }

private:
    std::string m_name; // ����
    int m_age;          // ����
};

```

```c++
struct PersonStruct {
    // ���캯��
    PersonStruct(const std::string& name, int age) : m_name(name), m_age(age) {}

    // ��Ա����
    void printInfo() const {
        std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
    }

private:
    std::string m_name; // ����
    int m_age;          // ����
};
```