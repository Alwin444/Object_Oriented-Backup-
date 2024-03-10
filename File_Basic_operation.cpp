#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ptr;
    string sent;
    char a;
    ptr.open("New.txt");
    cout<<"Enter the sentence below: ";
    getline(cin,sent);
    ptr<<sent;
    ptr.close();
    ifstream ptr1;
    ptr1.open("New.txt");
    while(ptr1.get(a))
    {
        cout<<a;
    }
    ptr1.close();
    return 0;
}
