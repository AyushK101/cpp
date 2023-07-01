/*automatic winding conversions*/
//implicit conversion
#include<iostream>
using namespace std;
int main()
{
    float x=32.5;
    int y=x;
    bool z=y;
    cout<<x<<" "<<y<<" "<<z<<endl;

// conversion using implicit (precedence )
    int a=15 ,b=2;
    double c=a/b;
    cout<<c<<"\n";

// conversion using c-style
    int e=15 ,f=2;
    double g=double(e)/f;
    cout<<g<<"\n";
    
// conversion using c++ style(recommended)
    int i=15 ,j=2;
    double h=static_cast<double>(i)/j;
    cout<<h<<"\n";
    return 0;
}