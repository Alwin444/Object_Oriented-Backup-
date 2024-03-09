#include <iostream>
using namespace std;
class base1
{
    protected:
    char name[12];
    int m1,m2,m3;
    public:
    void accept();
};
void base1::accept()
{
    cout<<"Enter name and 3 marks: ";
    cin>>name>>m1>>m2>>m3;
}
class base2
{
    protected:
    int mm1,mm2,mm3;
    base2()
    {
        mm1 = 10;
        mm2 = 10;
        mm3 = 10;
    }
};
class child: public base1, public base2
{
    public:
    void display()
    {
        cout<<"Total marks are: "<<m1+mm1+m2+mm2+m3+mm3<<"\tName: "<<name;
    }
    
};
int main()
{
    child obj1;
    obj1.accept();
    obj1.display();
    return 0;
}
