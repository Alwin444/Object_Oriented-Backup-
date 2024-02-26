#include <iostream>
using namespace std;
class constructor
{
 int mark,clno;
 public:
 constructor();
 constructor(int,int);
 constructor(constructor &);
};

//Default Constructor
constructor::constructor()
{
 mark = 12;
 clno = 10;
 cout<<"Default Constructor: "<<endl<<"Mark is: "<<mark<<"\t\tClass number is: "<<clno<<endl;
}

//Parameterized Constructor
constructor::constructor(int T,int P)
{
 mark = T;
 clno = P;
 cout<<"Parameterized Constructor: "<<endl<<"Mark is: "<<mark<<"\t\tClass number is: "<<clno<<endl;
}

//Copy Constructor
constructor::constructor(constructor &T)
{
 mark = T.mark;
 clno = T.clno;
 cout<<"Copy Constructor: "<<endl<<"Mark is: "<<mark<<"\t\tClass number is: "<<clno<<endl;
}

int main()
{
 constructor T1,T2(20,4),T3(T1);
 return 0;
}
