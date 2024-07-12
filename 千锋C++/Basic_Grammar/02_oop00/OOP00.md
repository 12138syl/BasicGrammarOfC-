# **OOP00**

## 类的设计与对象的创建
### 1. 类的设计

从若干个具有相同的特征和行为的对象中，提取出这些相同的特征和行为，设计为一个类。

类中定义所有的对象共有的特征和行为，其中，特征用**属性**表示，行为用**方法**表示。

> 所谓属性，其实就是定义在类中的一个变量。

```c++
// 设计一个类，描述人
// 属性: 姓名、性别、年龄
// 方法: 走路、吃饭
class Person {
public:
    string name;
    string gender;
    int age;
    
    void walk() {
        cout << "人类会走路" << endl;
    }
    void eat() {
        cout << "人类会吃饭" << endl;
    }
}
```

>   注意事项:
>
>   在类中定义的属性、方法，默认都是private的权限，在类外是不能访问的。如果需要在类外访问，需要修改为public权限。
>
>    // 
>
>   public: 在任意位置都可以访问
>
>   protected: 在当前类和子类中可以访问
>
>   private: 只能在当前类中访问


### 2. 对象的创建

```c++
int main() {
	// 1. 直接创建对象，隐式调用
    Person xiaobai;

    // 2. 显式调用
    Person xiaobei = Person();
    
    // 3. 关键字new   
    Person* xiaowang = new Person();
    
    return 0;
}
```

在上述的三种创建方式中，前两种方式是类似的。我们在创建对象的时候，区别主要是有没有使用关键字new。

|            | 使用new                | 没有使用new    |
| ---------- | ---------------------- | -------------- |
| 内存方面   | 在堆空间开辟           | 在栈空间开辟   |
| 内存管理   | 需要手动使用delete销毁 | 不需要手动销毁 |
| 属性初始化 | 自动有默认的初始值     | 没有初始值     |
| 语法       | 需要用类*来接收变量    | 不需要使用*    |
| 成员访问   | 通过.访问              | 通过->访问     |


### 3. 成员访问

成员访问，即访问类中的成员（属性、方法）。

```c++
int main() {
    // 创建Person对象
    Person xiaobai;
    
    // 访问类中的属性
    xiaobai.name = "xiao bai";
    xiaobai.age = 10;
    
    // 访问类中的方法
    xiaobai.walk();
    xiaobai.eat();
}
```

```c++
int main() {
    // 使用new创建对象
    Person* xiaobai = new Person();
    
    // 访问类中的属性
    xiaobai -> name = "xiao bai";
    xiaobai -> age = 1;
    
    // 访问类中的方法
    xiaobai -> walk();
    xiaobai -> eat();
}
```


### 4. 类的本质
类的本质，其实就是一个结构体。
在C++中，struct 和 class 在语法上非常相似，  
主要区别在于默认的访问级别不同：  
struct 的默认访问级别是 public，而 class 的默认访问级别是 private。  
下面我将给出一个 Person 类和一个同功能的 PersonStruct 结构体的例子，它们都将包含一些成员变量和成员函数。

```c++

class Person {
public:
    // 构造函数
    Person(const std::string& name, int age) : m_name(name), m_age(age) {}

    // 成员函数
    void printInfo() const {
        std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
    }

private:
    std::string m_name; // 姓名
    int m_age;          // 年龄
};

```

```c++
struct PersonStruct {
    // 构造函数
    PersonStruct(const std::string& name, int age) : m_name(name), m_age(age) {}

    // 成员函数
    void printInfo() const {
        std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
    }

private:
    std::string m_name; // 姓名
    int m_age;          // 年龄
};
```