Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for 
N
N days — on the 
i
t
h
i 
th
  day, Alice ran 
A
i
A 
i
​
  meters and Bob ran 
B
i
B 
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 
200
200 meters and Bob ran 
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran 
500
500 meters and Bob ran 
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 
300
300 meters and Bob ran 
500
500, both Alice and Bob would be happy.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

   

    while(t--){
         int ct=0;
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        // your code goes here
        for(int i=0; i<n; i++){
        	if(a[i]<=2*b[i] && b[i]<=2*a[i]){
           ct++;
        	}
        }
        cout<<ct<<endl;
        
    }
}
