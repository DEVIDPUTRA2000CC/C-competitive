#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; ++i){
  	cin>> arr[i];
  }
  // precomputing 
  int hash[13] = {0};
  for(int i=0; i<n; ++i){
  	hash[arr[i]] +=1;
  }
  
  int q;
  cin>>q;
  while(q--){
  	int num;
  	cin>>num;
    // fetch
  	cout<<hash[num]<<endl;
  }

}

// character hashing 


int main(){
	 
 string s;
 cin>>s;
 int q;
 cin>>q;
 // precomputing 
 int hash[26] = {0};
 for(int i =0; i<s.size(); ++i){
 	hash[s[i] - 'a']++;
 }
  while(q--){
 	char c;
 	cin>> c;
 	//fetch
 	cout<<hash[c-'a']<<endl;


 }

}

// if use 256 size array hashing 

int main(){
	 
 string s;
 cin>>s;
 int q;
 cin>>q;
 // precomputing 
 int hash[256] = {0};
 for(int i =0; i<s.size(); ++i){
 	hash[s[i]]++;
 }
  while(q--){
 	char c;
 	cin>> c;
 	//fetch
 	cout<<hash[c]<<endl;


 }
// here in 256 size array all character index are define so no need of subtraction char with 'a'
}




