# Object Oriented Cpp
[toc]
## 00 OOP基础
### 00.0 面向对象和面向过程的区别
-   **面向过程**
    -   是一种看待问题、解决问题的思维方式，着眼点在于问题是如何一步步的解决的，然后亲力亲为的解决问题。
-   **面向对象**
    -   是一种看待问题、解决问题的思维方式，着眼点在于找到一个能够帮助解决问题的实体，然后委托这个实体来解决问题。
### 00.1 类与对象
在面向对象的编程思想中，着眼点在于找到一个能够帮助解决问题的实体，然后委托这个实体解决问题。

在这里，这个具有特定的功能，能够解决特定问题的实体，就是一个**对象**。

由若干个具有相同的特征和行为的对象的组成的集合，就是一个**类**。

> 类是对象的集合，对象是类的具体例子。
### 00.2 类的设计与对象的创建
#### 00.2.0 类的设计

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
>   public: 在任意位置都可以访问
>
>   protected: 在当前类和子类中可以访问
>
>   private: 只能在当前类中访问

#### 00.2.1 对象的创建

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

#### 00.2.2 对象成员的访问

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
#### 00.2.3  类的本质
类的本质，其实就是一个结构体。
在C++中，struct 和 class 在语法上非常相似，  
主要区别在于默认的访问级别不同：  
struct 的默认访问级别是 public，而 class 的默认访问级别是 private。  
下面我将给出一个 Person 类和一个同功能的 PersonStruct 结构体的例子，它们都将包含一些成员变量和成员函数。


1. person类
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
2. person结构体
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
#### 00.2.4 类外和其他文件中实现类函数
类外其他文件中实现类函数，需要使用类名::函数名来调用。
##### 00.2.4.1 类外实现类函数
```c++
class Person {
public:
    void walk();		// 在这里只是定义
}

void Person::walk() {
    cout << "person walk" << endl;
}
```
##### 00.2.4.2 其他文件中实现

>   如果我们设计的类需要在其他的文件中访问，需要设计头文件！

**person.h**

```c++
#ifndef BASIC_LEARNING_PERSON_H
#define BASIC_LEARNING_PERSON_H

class Person {
public:
    void walk();
};

#endif
```

**person.cpp**

```c++
#include "Person.h"

void Person::walk() {
    cout << "person walk" << endl;
}
```
#### 00.2.5 静态
静态成员变量和静态成员函数，不需要创建对象，就可以直接访问。  
我们在类中定义成员的时候（函数、属性），可以使用关键字**static**来修饰，而这里的关键字static表示的就是**静态**。
在一个类中，被static修饰的成员，称为静态成员，可以分为: 静态属性、静态函数
##### 00.2.5.1 静态属性

静态的属性内存是开辟在全局区的，与对象无关，并不隶属于对象。在程序编译的时候，就已经完成了空间的开辟与初始化的赋值操作了，并且在程序运行的整个过程中是始终保持的。

静态属性的空间开辟早于对象的创建，并且静态属性不隶属于对象，而是被所有的对象所共享的。因此，如果你希望某一个属性是可以被所有的对象所共享的，就可以设置为静态的属性。

```c++
#include <iostream>

using namespace std;

namespace part1 {
	class Person
	{
	public:
		// 静态的成员变量，必须在类内定义、类外初始化赋值
		static int countOfObjs;
		// 静态的常量，可以在类内定义，并同时进行初始化；也可以在类内定义、类外进行初始化
		const static int MIN_AGE;
	};
	int Person::countOfObjs = 0;
	const int Person::MIN_AGE = 0;
}

using namespace part1;

int main() {

	// 访问静态成员变量（属性）
	
	// 可以直接使用类来访问
	Person::countOfObjs = 20;		

	// 也可以通过对象来访问，但是即便使用不同的对象，访问到的空间仍然是相同的空间
	Person xiaobai;
	Person xiaohei;
	xiaohei.countOfObjs = 100;
	cout << xiaobai.countOfObjs << endl;
    
    return 0;
}
```
##### 00.2.5.2 静态函数

被关键字static修饰的函数就是静态函数，与静态属性类似，静态函数依然不隶属于某一个对象，而是隶属于当前类的。静态的函数可以使用对象来调用，也可以直接使用类来调用。

```c++
#include <iostream>

using namespace std;

namespace part1 {
	class Person
	{
	public:
		static void test() {
			cout << "person test" << endl;
		}
	};
}

using namespace part1;

int main() {
	// 使用类来访问
	Person::test();

	return 0;
}
```

## 01 构造与析构
### 01.0 构造函数的定义
构造函数，是一个比较特殊的函数。我们在使用一个类的对象的时候，需要为其分配空间。空间分配完成之后，我们一般都会对创建的对象的属性进行初始化的操作。而这个过程就可以在构造函数中来完成了。

因此: 构造函数是一个函数，是在对象创建的时候触发，用来对对象的属性进行初始化的赋值操作。
###  01.1 构造函数的声明
-   构造函数的名字，必须和类的名字相同！
-   构造函数不能写返回值类型！
-   构造函数可以有不同的重载！

```c++
class Person {
public:
    // 这就是一个无参的构造函数
    Person() {
        cout << "无参构造函数执行了!" << endl;
    }
    
    // 这就是一个有参的构造函数
    Person(int age) {
        cout << "有参构造函数执行了！参数age = " << age << endl;
    }
}
```
### 01.2 构造函数的调用
```c++
// 构造函数的定义：
//		1、构造函数没有返回值类型，不能写，连void都不能写
//		2、构造函数的名字必须与类名相同
//		3、构造函数可以通过不同的参数，来实现重载(Overload)

class Person {
public:
	Person() {
		cout << "Person类的无参构造函数执行了" << endl;
	}

	Person(int age) {
		cout << "Person类的有参构造函数执行了" << endl;
	}

	Person(int age, int score) {
		cout << "Person(int, int)构造函数执行了" << endl;
	}
};

int main() {

	// 构造函数的使用：是在创建对象的时候调用的。
	// 
	// 显式调用
	// Person xiaoming = Person();
	// Person xiaoming = Person(10);
	// Person xiaoming = Person(10, 20);
	// 
	// Person xiaoming;		// 注意事项：如果用这种缩写的方式，切记，如果使用无参构造函数的方式来创建对象，不能添加()
	// Person xiaoming(10);
	// Person xiaoming(10, 20);

	// 隐式调用
    // Person xiaoming = {};
	// Person xiaoming = {10};		// 这里的大括号可以省略不写
    // Person xiaoming = {10, 20};

	// Person* xiaoming = new Person();
	// Person* xiaoming = new Person(10);
	// Person* xiaoming = new Person(10, 20);

	return 0;
}
```

### 01.3 explicit关键字

c++提供了关键字explicit，禁止通过构造函数进行的隐式转换。声明为explicit的构造函数不能在隐式转换中使用。

```c++
class Person {
public:
    int age;
    explicit Person(int a) {
        age = a;
    }
}

int main() {
    // 这里创建对象会出错，因为一个参数的构造函数已经被修饰为了explicit，不允许隐式转换。
    Person xiaoming = 10;
    
    return 0;
}
```

### 01.4 构造函数注意事项
-   如果在一个类中，没有手动写任意的构造函数，此时系统会自动为其提供一个public权限的无参构造函数。
-   如果在一个类中，写了任意的一个构造函数，此时系统将不再提供默认的无参构造函数。如果需要的话，需要自己书写。

```c++
class Person {
public:
    int age;
    
    Person(int age) {
        this->age = age;
    }
}

int main() {
    
    Person p;	// 这样的对象创建会出错，因为现在Person类中，没有无参的构造函数。
    
    return 0;
}
```
### 01.5 构造函数的初始化列表
我们自己书写构造函数，很大的一个用途就是对属性进行初始化的赋值操作，就像如下代码：

```c++
class Person {
public:
    string name;
    int age;
    string gender;
    int score;
    
    Person() {
        cout << "Person的无参构造函数执行了" << endl;
        // 希望给属性进行初始化的赋值操作
        name = "xiaobai";
        age = 18;
        gender = "male";
        score = 99;
    }
    
    Person(string n, int a, string g, int s) {
        cout << "Person的有参构造函数执行了" << endl;
        // 希望给属性使用指定的值进行初始化
        name = n;
        age = a;
        gender = g;
        score = s;
    }
}
```

在上述的代码中，无论是无参的构造函数还是有参的构造函数，我们的目的都是在创建对象的时候，为属性进行初始化的赋值操作。但是重复的这样的赋值有点麻烦，此时，C++为我们提供了初始化列表的方式，来对属性进行初始化的赋值操作。

```c++
class Person {
public:
    string name;
    int age;
    string gender;
    int score;
    
    Person() : name("xiaobai"), age(18), gender("male"), score(99)
    {
        cout << "Person的无参构造函数执行了" << endl;
    }
    
    Person(string n, int a, string g, int s) : name(n), age(a), gender(g), score(s)
    {
        cout << "Person的有参构造函数执行了" << endl;
    }
}
```
### 01.6 拷贝构造函数
拷贝构造函数是C++中的另外一种构造函数，这个构造函数也是可以由系统自动提供的。

```
如果我们没有给一个类写拷贝构造函数，系统会自动的生成一个默认的拷贝构造函数，为每一个属性进行赋值。
如果需要在拷贝构造函数中实现自己的拷贝逻辑，需要自己书写拷贝构造函数。
```

**系统默认的拷贝构造函数：**

```c++
class Person {
public:
    string name;
    int age;
    
    Person() {
        cout << "Person的无参构造函数执行了" << endl;
    }
    
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person的有参构造函数执行了" << endl;
    }
}

int main() {
    
    // 在上述的Person类中，我们并没有去写拷贝构造函数，此时系统会自动的提供一个拷贝构造函数，实现对属性的赋值操作。
    Person p1("xiaoming", 19);
    // 这里就是默认执行的拷贝构造函数，相当于 Person p2 = Person(p1);
    // 得到的对象p2的属性值与p1对象的属性值完全相同
    Person p2(p1);
    
    cout << "p1.name = " << p1.name << ", p1.age = " << p1.age << endl;
    cout << "p2.name = " << p2.name << ", p2.age = " << p2.age << endl;
    
    return 0;
}
```

**自己实现拷贝构造函数：**

```c++
class Person {
public:
    string name;
    int age;
    
    Person() {
        cout << "Person的无参构造函数执行了" << endl;
    }
    
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person的有参构造函数执行了" << endl;
    }
    
    Person(const Person& p) {
        cout << "Person的拷贝构造函数执行了" << endl;
        name = p.name;
        age = p.age;
    }
}

int main() {
    
    Person p1("xiaoming", 19);
    // 这里就是执行的拷贝构造函数，相当于 Person p2 = Person(p1);
    // 得到的对象p2的属性值与p1对象的属性值完全相同
    Person p2(p1);
    
    cout << "p1.name = " << p1.name << ", p1.age = " << p1.age << endl;
    cout << "p2.name = " << p2.name << ", p2.age = " << p2.age << endl;
    
    return 0;
}
```

### 01.7 析构函数
我们将一个对象从空间开辟开始，到空间销毁结束，这样的过程称为是一个对象的一生，用“生命周期”来描述这样的过程。对象的生命周期的起点是构造函数，而对象的生命周期的终点就是析构函数。

析构函数，将会在对象被销毁之前自动调用。

析构函数也是可以由系统自动生成的。

```c++
class Person {
public:
    int age;
    int* score;
    
    Person() {
        cout << "Person的无参构造函数执行了" << endl;
    }
    
    // 这就是Person的析构函数，析构函数只能这样书写，且不能有参数
    // 通常在析构函数中，我们会进行一些资源的释放，例如开辟的堆中的内存
    ~Person() {
        cout << "Person的析构函数执行了，表示这个对象即将被销毁了" << endl;
        if (score != NULL) {
            delete score;	// 释放对应的堆空间
            score = NULL;	// 释放本来存储的地址，防止野指针
        }
    }
}
```
### 01.8 深拷贝与浅拷贝的问题

深拷贝与浅拷贝是一个老生常谈的问题，在数组的部分提到过，在面向对象部分也有这两个概念。在这里我们首先需要先区分一下什么是深拷贝，什么是浅拷贝。

**浅拷贝：**在拷贝构造函数中，直接完成属性的赋值操作。

**深拷贝：**在拷贝构造函数中，创建一个新的空间，使得属性中的指针指向这个新的空间。
#### 01.8.0 浅拷贝案例

```c++
class Person {
public:
    int age;
    int* score;
    
    Person(int a, int s) {
        cout << "Person的有参构造函数执行了" << endl;
        age = a;
        score = new int(s);
    }
    
    Person(const Person& p) {
        cout << "拷贝构造函数" << endl;
		// 拷贝构造函数的默认实现，是直接进行属性值的拷贝
        age = p.age;
        score = p.score;
    }
    
    ~Person() {
        cout << "析构函数执行了" << endl;
        // 将score指向的堆空间销毁
        if (score != NULL) {
            delete score;
            score = NULL;
        }
    }
}

int main() {
    // 创建一个对象
    Person p1(18, 99);
    // 通过拷贝构造函数，拷贝出一个新的对象
    Person p2(p1);
    
    // 在刚才的拷贝构造函数中，属性值直接进行值的拷贝，这个过程就是一个浅拷贝
    // 对比两个对象的score地址，完全相同
    cout << p1.score << endl;
    cout << p2.score << endl;
    
    // 现在直接运行这个程序就会出问题了
    
    // 问题出现原因：
    // 由于现在是浅拷贝，p2的属性score和p1的属性score存储的地址是完全相同的。
    // main函数执行结束，p1、p2都是局部变量，需要销毁。
    // 先销毁p2，执行p2的析构函数，此时p2.score指向的空间被销毁了。
    // 再销毁p1，执行p1的析构函数，此时p1.score指向了一个已经被销毁了空间，p1.score已经是一个野指针了。会出现问题！
    
    return 0;
}
```

#### 01.8.1 深拷贝案例

```c++
class Person {
public:
    int age;
    int* score;
    
    Person(int a, int s) {
        cout << "Person的有参构造函数执行了" << endl;
        age = a;
        score = new int(s);
    }
    
    Person(const Person& p) {
        cout << "拷贝构造函数" << endl;
		// 拷贝构造函数的默认实现，是直接进行属性值的拷贝
        age = p.age;
        
        // 这里不再是简简单单的值拷贝，而是在堆上创建了一个新的空间，新空间中存储原来p的score对应的值
        // 然后将这个新的空间地址给score进行赋值
        score = new int(*p.score);	
    }
    
    ~Person() {
        cout << "析构函数执行了" << endl;
        // 将score指向的堆空间销毁
        if (score != NULL) {
            delete score;
            score = NULL;
        }
    }
}

int main() {
    // 创建一个对象
    Person p1(18, 99);
    // 通过拷贝构造函数，拷贝出一个新的对象
    Person p2(p1);
    
    // 在刚才的拷贝构造函数中，score属性是开辟了一个新的空间的
    // 对比两个对象的score地址，不相同的
    cout << p1.score << endl;
    cout << p2.score << endl;
    
    // 对比两个对象的score指向的值，是相同的
    cout << *p1.score << endl;
    cout << *p2.score << endl;
    
    // 此时程序执行结束前，p2.score指向的空间被销毁，与p1.score指向的空间没有关系
    // 因此，p1.score在进行空间销毁的时候也就不会有任何问题
    return 0;
}
```
## 02 this指针
this指针，是一个隐式的指针，它指向当前对象的地址。

### 02.0 this是什么

在C++中，this是一个指针，用来指向当前的对象的！

```c++
class Person {
public:
    Person() {}
    Person(int a): age(a) {}
    
    int getAge() {
        return age;
    }
    
private:
    int age;
}
```

在上述代码中，类Person中有一个函数getAge，可以返回属性age的值。那么问题来了，一个类可以有多个对象的。而非静态的属性age是隶属于对象的。不同的对象的age，在内存中的空间肯定也是不同的。如何区分需要返回哪一个对象的age呢？

在一个类中，涉及到成员的访问的时候，非静态的成员访问，通常都会使用this指针来访问。

```c++
class Person {
public:
    Person() {}
    Person(int a): age(a) {}
    
    // 这里使用this指针来访问age属性，这种写法是默认的，并且this是可以省略不写的
    // 那么所谓的当前对象到底是谁呢？
    // 最简单的理解就是: 哪个对象调用这个函数，this指针就指向谁
    int getAge() {
        return this->age;
    }
    
private:
    int age;
}
```

### 02.1 this不可省略的情况

绝大多数的情况下，在一个类的内部，访问当前类中的非静态成员的时候，this指针都是可以省略不写的。但是有一种情况，this指针不能省略，必须要显式的写出来:

如果在一个函数中出现了与当前类的属性同名字的局部变量！为了区分局部变量还是属性，此时的this指针不能省略。

```c++
class Person {
public:
    int age;
    
    // 在这个构造函数中，出现了一个局部变量age，与属性名字相同了
    // 于是为了区分这两个，需要使用this指针显式的指向age属性来进行访问
    Person(int age) {
        this->age = age;
	}
}
```
### 02.2 返回当前对象的函数

```c++
class Point {
public:
    int x;
    int y;
    Point() {}
    Point(int x, int y): x(x), y(y) {}
    
    // 返回当前对象的引用
    Point& add(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
        // this是一个指针，用来指向当前的对象
        // 因此，如果需要返回当前的对象的话，就需要使用*来访问
        return *this;
	}
}
```
### 02.3 空指针访问成员函数

在C++中，使用空指针是可以访问成员函数的，但是需要注意：不能在函数中出现this指针！

```c++
class Person {
public:
    int age;
    
    Person() {}
    Person(int age): age(age) {}
    
	void testFunction01() {
        cout << "testFunction01执行了" << endl;
    }
    
    void testFunction02() {
        if (this == NULL) {
            cout << "this是一个空指针" << endl;
            return;
        }
        cout << "testFunction02执行了" << endl;
    }
    
    void getAge() {
        return age;
    }
}

int main() {
    // 创建一个空对象
    Person* person = NULL;
    
    // 函数访问
    person->testFunction01();		// 可以正常访问，因为在这个函数中没有使用到this指针
    person->testFunction02();		// 访问出问题，因为在这个函数中使用到了this指针
    person->getAge();				// 访问出问题，在这个函数中虽然没有写this，但是有属性的访问，默认就是用到的this
    
    return 0;
}
```
### 02.4 常函数与常对象
#### 02.4.0 什么是常函数

-   使用关键字const修饰的函数，叫做常函数。
-   常函数中，不允许修改属性的值。
-   常函数中，不允许调用其他的普通函数。
-   如果想要在常函数中修改某个属性的值，需要将这个属性设置为mutable。

```c++
class Person {
public:
    string name;
    int age;
    mutable int score;		// 修饰为可变的，这个属性可以在常函数中进行修改
    
    Person(string name, int age, int score): name(name), age(age), score(score) {}
    
    // 定义常函数
    void fixPerson(string newName, int newAge, int newScore) const {
        name = newName;		// 这里会出错，不允许在常函数中修改普通属性的值
		age = newAge;		// 这里会出错，不允许在常函数中修改普通属性的值
        score = newScore;	// 这里可以正常修改，因此此时的score已经被修饰为mutable
        
        test();		// 这里会出错，不允许在常函数中调用其他的普通函数
    }
    
    void test() {}
}
```
#### 02.4.1 常对象

-   在对象创建的时候，使用const修饰的对象，就是常对象。
-   常对象可以访问任意的属性值，但是不能修改普通属性的值。
-   常对象可以修改mutable属性的值。
-   常对象只能调用常函数。

```c++
int main() {
    // 创建一个常对象
    const Person person("zhangsan", 18, 99);
    
    // 使用这个常对象进行属性访问
	cout << person.name << endl;		// 可以正常访问
    person.age = 100;					// 不能进行修改
    person.score = 200;					// mutable属性，可以修改
}
```
## 03 友元

