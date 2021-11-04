#include<iostream>
using namespace std;

int main()
{
    int a,b,x,y;
    int Total;
    cout<<"Enter no of pens, pencils and the pen costs respectively: ";   
    cin>>a>>b>>x>>y;
    
    Total = ((a*x) + (b*y));
    cout<<"Total amount is: "<<Total;

    return 0;

}