#include <iostream>
using namespace std;
class vehicle
{
  char reg_no[12],name[12];
  int price;
  public:
  void accept();
  void display();
};
void vehicle::accept()
{
    cout<<"Enter The register number,name and price of the vehicle: ";
    cin>>reg_no>>name>>price;
}
void vehicle::display()
{cout<<"The vehicle is verified at national level";}
int main()
{
    vehicle V,*V1;
    V1 = &V;
    V1->accept();
    V1->display();
    return 0;
}
