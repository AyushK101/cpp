#include<iostream>
using namespace::std;
int main()
{
 int   x=123, y=-352;
    cout<<x%10<<"   "<<-(y%10)<<endl;
//2nd method
int a=123 ,b=-352;
int ansa=a%10;
int ansb=abs(b%10); //abs=absolute converts negative no. to posit
cout<<ansa<<" "<<ansb;

return 0;

}