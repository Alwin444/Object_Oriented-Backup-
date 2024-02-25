#include <iostream>
using namespace std;
class student
{
 int clno,age,mark;
 char name[12];
 public:
 void accept();
 student find(student &);
 void display();
 student()
 {mark = 0;}
};
void student::accept()
{
 cout<<"Enter Class number,name,age and mark: ";
 cin>>clno>>name>>age>>mark;
}
student student::find(student &s)
{
 if(mark<s.mark)
  return s;
 else
  return *this;
}
void student::display()
{
 cout<<"Class number: "<<clno<<"\t\tName: "<<name<<"\t\tAge: "<<age<<"\t\tmark: "<<mark<<endl;
}
int main()
{
 student temp,s[10];
 int i;
 for(i=0;i<10;i++)
  s[i].accept();
 for(i=0;i<10;i++)
  temp = temp.find(s[i]);
 temp.display();
 return 0;
}
