#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<sizeof(x++)<<"\n";
    //as sizeof is evaluated in compile time  therefore it will have no effect
    cout<<x;
    return 0;
}