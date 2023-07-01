#include<iostream>
using namespace std;
int main()
{
    // with getline we can print string after space also
    string name;
    cout<<"enter name\n";
    // getline(cin function, variable);
    getline(cin,name);
    cout<<"welcome"<<" "<<name;
    return 0;

}