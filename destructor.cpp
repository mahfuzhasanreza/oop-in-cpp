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

    // destructor
    ~Student(){
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Mahfuz", 5);
    s1.getInfo();

    return 0;
}