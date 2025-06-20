#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";

    // Access characters
    char c = s[0]; // 'H'

    // Length of string
    int len = s.length(); // or s.size()

    // Concatenation
    string s2 = "World";
    string combined = s + " " + s2; // "Hello World"

    // Substring
    string sub = s.substr(1, 3); // "ell" (start index, length) for eg. (3, 2) means extract two character from string satring index is 3

    // Find substring
    int pos = s.find("ell"); // returns 1 (index of 'e')

    // Convert to lowercase/uppercase (using loops or <algorithm>)
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl; // "hello"
    return 0;

	reverse(s.begin(), s.end()); // it reverse words and alpha too
sort(s.begin(), s.end());
to_string(number);
stoi(s); // string to int

}

}


// question on string of most occure sprefix in an array of strings 

int main(){
	string strs[3]={"flower", "flow","flight"};
	
	int st =0;
	int n =min(strs.size());
    while(st<n && str1[st]==str2[st]){
    	st++;
    }
    string prefix = str1.substr(0, st);
  cout<<prefix;
}

// reversing the words of string 
int main(){
	string s;
	getline(cin, s);
	int st=0, end=s.size()-1;

	while(st<end){
		swap(s[st], s[end]);
		st++; end--;
	}
	int n= s.size();
	for(int i=0; i<n; i++){
	string word ="";
	while(i<n && s[i]!=' '){
		word+=s[i];
		i++;
	} reverse(word.begin(), word.end());
	string ans ="";
	if(word.size()>0){
	ans +=" "+word;
}
	cout<<ans;
}

} // for eg. input "the sky is blue" output "blue is sky the"

	
	
