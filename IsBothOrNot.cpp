
// You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). If N is divisible by both
// 5 and 11 then print "BOTH"(without quotes). If N is not divisible by 5 or 11 then print "NONE"(without quotes).


#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N%5!=0 & N%11!=0){
        cout<<"NONE\n";
    }
    else if (N%5==0 & N%11==0)
    {
        cout<<"Both\n";
    }
    else if (N%5==0 or N%11==0){
        cout<<"ONE\n";

    }
  
    return 0;
     
}