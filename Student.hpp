#ifndef STUDENT_HPP 
#define STUDENT_HPP

#include <iostream>
#include <string>

using namespace std;

class Student{
    
private:
    string name;
    int age;

public:
    Student();
    ~Student();

    void setName(string);
    void setAge(int);

    string getName() const;
    int getAge() const;
};

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


#endif
