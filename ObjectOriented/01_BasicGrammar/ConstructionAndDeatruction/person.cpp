//
// Created by main on 2024/7/15.
//

#include "person.h"
#include <iostream>
#include <string>

using namespace std;


// This is a no-argument constructor
person::person() {
    cout << "The no-argument constructor is executed!" << endl;
}

// This is a parameterized constructor
person::person(int age) {
    this->age = age;
    cout << "The parameterized constructor is executed! Parameter age = " << age << endl;
}
person::person(string gender) {
    this->gender = gender;
    cout << "The parameterized constructor is executed! Parameter gender = " << gender << endl;

}

// This is another parameterized constructor with two parameters
person::person(int age, string gender) {
    this->age = age;
    this->gender = gender;
    cout << "The parameterized constructor is executed! Parameter age = " << age << ", Parameter gender = " << gender << endl;
}
