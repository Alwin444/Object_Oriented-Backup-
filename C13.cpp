#include <iostream>
using namespace std;
class item
{
 int itn,price;
 char name[12];
 public:
 void accept();
 item give(item &);
 void display();
};
void item::accept()
{
 cout<<"Enter item number,name and price: ";
 cin>>itn>>name>>price;
}
item item::give(item &T)
{
 if(T.price > price)
  return T;
 else
  return *this;
}
void item::display()
{
 cout<<"Item number: "<<itn<<"\t\tItem name: "<<name<<"\t\tItem price: "<<price;
}
int main()
{
 item q,temp,q2;
 q.accept();
 q2.accept();
 temp = q.give(q2);
 temp.display();
 return 0;
}
