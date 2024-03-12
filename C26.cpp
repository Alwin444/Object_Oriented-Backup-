#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1,2,3,4,5},*ptr,i;
    ptr = array;
    cout<<"Base address of array: "<<array<<endl;
    cout<<"Address stored by pointer: "<<ptr<<endl;
    cout<<"First element in the array: "<<array[0]<<endl;
    cout<<"Content in the pointer: "<<*ptr<<endl;
    cout<<"Addres of the pointer: "<<&ptr<<endl;
    cout<<"--------------------Incrementing pointer---------------------"<<endl;
    for(i=1;i<5;i++)
    {
      ptr++;
      cout<<"Content in addres"<<ptr<<" is: "<<*ptr<<endl;
    }
    cout<<"--------------------Decrementing pointer---------------------"<<endl;
    for(i=0;i<5;i++)
    {
     cout<<"Content in addres"<<(ptr)<<" is: "<<*(ptr)<<endl;
     ptr--;
    }
    return 0;
}
