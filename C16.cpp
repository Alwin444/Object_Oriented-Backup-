#include <iostream>
using namespace std;
class reduce;
class stock
{
 int itn,val,sto;
 char name[12];
 public:
 void accept();
 friend void reducer(stock &T,reduce &R);
};
void stock::accept()
{
 cout<<"Enter item number,name,price and stock: ";
 cin>>itn>>name>>val>>sto;
}
class reduce
{
 float new_v;
 public:
 friend void reducer(stock &T,reduce &R);
};
void reducer(stock &T,reduce &R)
{
 if(T.sto>100)
  R.new_v = T.val - static_cast<float>(T.val)/10;
 else
  R.new_v = T.val;
 cout<<"Item number: "<<T.itn<<"\t\tItem name: "<<T.name<<"\t\tPrice: "<<T.val<<"\t\tCurrent stock: "<<T.sto<<"\t\tDiscount price: "<<R.new_v<<endl;
}
int main()
{
 reduce R[5];
 stock S[5];
 int i;
 for(i=0;i<5;i++)
  S[i].accept();
 for(i=0;i<5;i++)
  reducer(S[i],R[i]);
 return 0;
}
