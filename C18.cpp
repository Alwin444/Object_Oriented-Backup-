#include <iostream>
using namespace std;
class student
{
 int mark,clno;
 char name[12];
 public:
 void accept();
 void operator++();
};
void student::accept()
{
 cout<<"Enter Class number,name and marks: ";
 cin>>clno>>name>>mark;
}
void student::operator++()
{cout<<"Class number: "<<clno<<"\t\tName: "<<name<<"\t\tMarks: "<<mark;}
int main()
{
 student s1;
 s1.accept();
 ++s1;
 return 0;
}
