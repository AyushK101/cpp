#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=2;
    auto b=13.75;
    auto d='c';
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name()<<"\n";
    cout<<typeid(d).name()<<"\n";
    return 0;
}