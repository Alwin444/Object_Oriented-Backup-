#include <iostream>
using namespace std;
class mode;
class student
{
 int clno,mark,mod_mark;
 char name[12];
 public:
 void in();
 friend void moder(student &,mode &);
 void out();
};
void student::in()
{
 cout<<"Enter class number,name and mark: ";
 cin>>clno>>name>>mark;
}
class mode
{
 int mod;
 public:
 mode()
 {
  mod = 20;
 }
 friend void moder(student &,mode &);
};
void moder(student &T,mode &M)
{
 T.mod_mark = M.mod+T.mark;
}
void student::out()
{
 cout<<"Class number: "<<clno<<"\t\tName: "<<name<<"\t\tMark: "<<mark<<"\t\tModeration mark: "<<mod_mark<<endl;
}
int main()
{
 int i;
 student S[5];
 mode M[5];
 for(i=0;i<5;i++)
  S[i].in();
 for(i=0;i<5;i++)
  moder(S[i],M[i]);
 for(i=0;i<5;i++)
  S[i].out();
 return 0;
}
