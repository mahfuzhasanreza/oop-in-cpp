#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name=name;
    //     this->age=age;
    // }

    Person(){
        cout<<"parent constructor\n";
    }
};

class Student : public Person{
public:
    int rollno;

    Student(){
        cout<<"child constructor\n";
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name="Mahfuz";
    s1.age=18;
    s1.rollno=123;

    s1.getInfo();

    return 0;
}