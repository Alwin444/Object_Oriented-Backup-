#include <iostream>
using namespace std;
class add
{
 int i;
 char im;
 public:
 void accept();
 void accept2();
 friend int operator+(add &,add &);
};
void add::accept()
{
 cout<<"Enter first complex number: ";
 cin>>i>>im;
}
void add::accept2()
{
 cout<<"Enter second complex number: ";
 cin>>i>>im;
}
int operator+(add &T,add &P)
{
 int total = T.i+P.i;
 return total;
}
int main()
{
 add A1,A2;
 A1.accept();
 A2.accept2();
 int total = A1+A2;
 cout<<"Result: "<<total<<'i';
 return 0;
}
