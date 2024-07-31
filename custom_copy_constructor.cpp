#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    
    Teacher(string name, string dept, string subject, double salary){
        this->name=name; // (*this).name = this->name
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){ // pass by reference
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
    }
};

int main(){
    Teacher t1("Mahfuz", "CSE", "C++", 30000);

    Teacher t2(t1); // custom copy constructor -invoke
    t2.getInfo();

    return 0;
}