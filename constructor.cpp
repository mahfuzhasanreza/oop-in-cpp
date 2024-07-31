#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    // non-parameterized
    Teacher(){
        dept="Computer Science";
    }

    // parameterized
    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    string name;
    string dept;
    string subject;

    void getInfo(){
        cout<<name<<endl;
        cout<<subject<<endl;
    }
};

int main(){
    Teacher t1;
    cout<<t1.dept<<endl;

    Teacher t2("Mahfuz", "CSE", "C++", 30000);

    t2.getInfo();

    return 0;
}