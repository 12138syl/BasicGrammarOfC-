//
// Created by main on 2024/7/14.
//
#include <iostream>
#include "Basic/Person.h"
using  namespace std;

int main() {

    std::cout << "Memory addresses of various object instantiations:" << std::endl;
    // 1. Implicit call by directly creating an object on the stack
    Person xiaobai;
    std::cout << &xiaobai << std::endl;

    // 2. Explicit instantiation using the default constructor
    Person xiaobei = Person();
    std::cout << &xiaobei << std::endl;

    // 3. Using the 'new' keyword to create an object on the heap
    Person* xiaowang = new Person();
    std::cout << xiaowang << std::endl;

    std::cout << "Calling methods:" << std::endl;

    std::cout << "Calling methods on objects instantiated with 'new':" << std::endl;
    xiaowang->eat();
    xiaowang->sleep();
    xiaowang->walk();

    std::cout << "Calling methods on objects not instantiated with 'new':" << std::endl;
    xiaobai.eat();
    xiaobai.sleep();
    xiaobai.walk();

    delete xiaowang; // Remember to free the memory allocated with 'new'

    return 0;
}