#ifndef STUDENT_HPP 
#define STUDENT_HPP

#include <string>
using std::string;

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
#endif