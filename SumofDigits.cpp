#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }

    for(int j=0; j<t; j++){        
        int sum=0;
        int n=arr[j];
        
        while (n>0){
        sum = sum + (n%10);
        n = n/10;
    }    
    cout<<sum<<endl;
    }
    return 0;
}