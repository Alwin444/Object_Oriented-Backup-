#include <iostream>
using namespace std;
class Ratio
{
    float ratio[3];
    int limit,Ar[100],Ncount,Pcount,Zcount;
    char y;
    public:
    void input();
    Ratio();
    friend void calc(Ratio &T);
    void display();
};
void calc(Ratio &T)
{
    T.ratio[0] = static_cast<float>(T.Pcount)/T.limit;
    T.ratio[1] = static_cast<float>(T.Ncount)/T.limit;
    T.ratio[2] = static_cast<float>(T.Zcount)/T.limit;
}
Ratio::Ratio()
{
    ratio[0]=ratio[1]=ratio[2]=0.0;
    limit = 0;
    Ncount = 0;
    Pcount = 0;
    Zcount = 0;
}
void Ratio::input()
{
   int i = 1;
   do {
   cout<<"Enter number"<<" "<<i<<": ";
   cin>>Ar[limit];
   if(Ar[limit]<0)
    Ncount++;
   else if(Ar[limit]>0)
    Pcount++;
   else
    Zcount++;
   limit++;
   i++;
   cout<<"Do you want to enter again: ";
   cin>>y;
   }while (y == 'Y'||y == 'y');
}
void Ratio::display()
{
    cout<<"Ratio of Positive Numbers: "<<ratio[0]<<endl;
    cout<<"Ratio of Negative Numbers: "<<ratio[1]<<endl;
    cout<<"Ratio of zeros: "<<ratio[2]<<endl;
}
int main()
{
    Ratio S1;
    S1.input();
    calc(S1);
    S1.display();
    return 0;
}