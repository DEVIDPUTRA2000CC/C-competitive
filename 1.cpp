#include<bits/stdc++.h>
using namespace std;
// program 1
int main(){
	 int l, b;
	cin>> l>> b;
	cout <<l * 1LL * b<<endl; // here we use LL because to increase the range of the output  upto 10^18 to 10^18
} 
// program 2
int main(){
	int t; // for test cases 
	cin>>t;
	while(t--){ 
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)	{
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
	cout<< endl; 
	}  


	}
}
// program 3
int main(){
	while(true){ // for infinte loop 
	int n;
	cin>>n;
	
	
		if(n==42){
			break;
		}
	cout<<n<<endl;
	} 

}
// program no. 4


int main(){ 
	int n;
	cin>>n;
	int digit_sum = 0;
	while(n>0){
		int last_digit = n%10; // take last digit out 
		digit_sum = digit_sum + last_digit;
		n = n/10; // we use this to remove last digit 
		
	}
	cout<<"sum of digits : "<<digit_sum<<endl;

	

}





	 







	 


