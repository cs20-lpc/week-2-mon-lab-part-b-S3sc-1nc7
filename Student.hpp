class Student{
    private:
    string * name;
    int* age;
    public:
    Student();
    ~Student();
    void setName(string);
    void setAge(int);
    string getName();
    int getAge();
};

Student::Student(){
    cout<<"Student object created!" << endl;
}
Student::~Student(){
    delete name;
    delete age;
    cout<<"Student object destroyed!" << endl;
}
void Student::setName(string s){
    name = s;
}
void Student::setAge(int n){
    age = n
}

string Student::getName(){
    return name;
}
int Student::getAge(){
    return age;
}
