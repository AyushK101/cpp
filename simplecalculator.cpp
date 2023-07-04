#include<iostream>
using namespace std;
int main()
{
    int op, x, y;
    cin>>op>>x>>y;
    if(op==1)
    {
        cout<<x+y;
    }
    else if(op==2)
    {
        cout<<x-y;
    }
    else if (op=3)
    cout<<x*y;
    else
    cout<<"invalid value";
    return 0;
    
    
}