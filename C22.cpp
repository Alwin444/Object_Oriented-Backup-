#include <iostream>
using namespace std;
class A
{
  int clno,m1,m2,m3;
  char name[12];
  protected:
  void accept();
  void display();
  public:
  void ad()
  {
    accept();
    display();
  }
};
void A::accept()
{
    cout << "Enter class number and name: ";
    cin >> clno >> name;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
}
void A::display()
{
    cout << "Class number: " << clno << "\tName: " << name << "\tTotal marks: " << m1 + m2 + m3 << endl;
}
class B:public A
{
    
};
class C:public B
{
    
};
int main()
{
    B b;
    C c;
    b.ad();
    c.ad();
    return 0;
}
