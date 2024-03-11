#include <iostream>
using namespace std;
class printer
{
  public:
  void dis(int i);
};
void printer::dis(int i)
{cout<<"Hi from object "<<i<<endl;}
int main()
{
    int i = 0;
    printer *p = new printer[10];
    for(i=0;i<10;i++)
     p[i].dis(i+1);
    delete[] p;
    return 0;
}
