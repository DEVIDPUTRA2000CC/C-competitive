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
