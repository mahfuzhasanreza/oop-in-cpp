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
    
    // parameterized
    Teacher(string name, string dept, string subject, double salary){
        this->name=name; // (*this).name = this->name
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
    }
};

int main(){
    Teacher t2("Mahfuz", "CSE", "C++", 30000);

    t2.getInfo();

    return 0;
}