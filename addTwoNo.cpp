#include<iostream>
using namespace std;

int main(){
    int T,A,B;
    cin>>T;
    int arr[T];

    for(int i=0;i<T; i++){
        cin>>A>>B;
        arr[i]=A+B;
    }

    for(int j=0;j<T; j++){
        cout<<arr[j]<<endl;
    }
}   
// }

// "Taking again and again input"

// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
// #include <bits/stdc++.h> 

// using namespace std;

// int main() {
	
// 	int T,a,b;
// 	cin>>T;
	
// 	while (T--) {
// 	cin>>a>>b;
// 	cout<<a+b<<endl;
// 	}

// 	return 0;
// }

// "Another way by taking one time input"

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cin>>x;
//     int array[x];
//     for (int i=0;i<x;i++)
//     {
//         cin>>y>>z;
//         array[i] = y+z;
//     }
//     for(int j=0;j<x;j++)
//     {
//         cout<<array[j]<<endl;
//     }
// }