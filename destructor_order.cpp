#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    int *ptr;

    ~Person(){
        cout<<"parent destructor\n";
    }
};

class Student : public Person{
public:
    ~Student(){
        cout<<"child destructor\n";
    }
};

int main(){
    Student s1;

    return 0;
}