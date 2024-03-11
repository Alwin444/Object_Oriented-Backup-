#include <iostream>
using namespace std;
class a
{
  protected:
  int twice = 0;
};
class b:public a
{
    protected:
    int twicer = twice+2;
};
class c:public b
{
    int total1,s1,s2;
    public:
    void accept();
    void display()
    {cout<<"Twice of the sum of given number is "<<total1;}
};
void c::accept()
{
    cout<<"Enter two numbers here: ";
    cin>>s1>>s2;
    total1 = twicer*(s1+s2);
}
int main()
{
    c u;
    u.accept();
    u.display();
    return 0;
}
