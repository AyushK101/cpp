#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
    {
        cout<<"positive ";
        if(n%2==0)
        cout<<"and even";
        else
        cout<<"and odd";
    }
    else if(n<0)
    {
        cout<<"negative";
    if(n%2==0)
        cout<<"and even";
        else
        cout<<"and odd";
    }    
    else
    cout<<"zero";
    return 0;
}
 