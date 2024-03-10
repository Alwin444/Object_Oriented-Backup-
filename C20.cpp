#include <iostream>
using namespace std;
class student
{
    int clno;
    char name[12];
    protected:
    int m1,m2,m3,total;
    public:
    void acc1();
};
class m:public student
{
  public:
  void accept();
  void display();
};
void student::acc1()
{
    cout<<"Enter class number and name: ";
    cin>>clno>>name;
}
void m::accept()
{
    cout<<"Marks for 3 subjects: ";
    cin>>m1>>m2>>m3;
}
void m::display()
{
    total = m1+m2+m3;
    cout<<"Total marks are: "<<total;
}
int main()
{
    student s;
    m t;
    s.acc1();
    t.accept();
    t.display();
    return 0;
}
