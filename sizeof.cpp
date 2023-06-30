/*sizeof() operator example*/
#include<iostream>
using namespace std;
int main()
{
    cout<<sizeof(int)<<"\n";
    cout<<sizeof(char)<<"\n";
    cout<<sizeof(float)<<"\n";
    cout<<sizeof(long double)<<"\n";
    cout<<sizeof(10LL)<<"\n";//when suffix an int value with LL it become long long 
    cout<<sizeof(10.5)<<"\n";//double 
    cout<<sizeof(10.5f); //become float
    return 0;
}