#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=12;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<x<<endl;
    cout<<std::setw(5);
    cout<<std::left;
    cout<<x<<endl;
    cout<<std::setw(5);
    cout<<std::right;
    cout<<x;
    return 0;
    

}