#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

    Student(Student &obj){
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*obj.cgpaPtr;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Mahfuz", 5);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr)=6;
    s1.getInfo();

    s2.getInfo();

    return 0;
}