#include<iostream>
using namespace std;
int main()
{
    int x=0 ,y=0;
    int dice;
    cout<<"throw dice:";
    cin>>dice;
    switch (dice)
    {
    case 1:x++;
    break;
    case 2:x--;
    break;
    case 3:y++;
    break;
    case 4:y--;
    break;
    default:cout<<"invalid input";
    }
    cout<<x<<" "<<y;
    return 0;

   
     
}