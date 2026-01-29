#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(){
    cout<<"Student object created!" << endl;
}
Student::~Student(){
    cout<<"Student object destroyed!" << endl;
}
void Student::setName(string s){
    name = s;
}
void Student::setAge(int n){
    age = n;
}

string Student::getName() const{
    return name;
}
int Student::getAge() const{
    return age;
}
