#include <bits/stdc++.h>
using namespace std;
int main(){
	// 2d array a[i][j] where a[i] is collaction of a of i
	// and j is the collaction of a of [j] 
	int n, m;
	cin>>n>>m;
	int a[n][m];
	for( int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];


	}
		}

     for (int i = 0; i <n; ++i)
     {
     	for(int j=0 ; j<m; j++){
     		cout<<a[i][j]<<" ";

     	}
     	cout<<endl;
     }
   

}
// input 
5 4
1 1 2 3
1 2 3 3
1 1 1 1
1 1 2 3
3 4 5 6

	
// output
1 1 2 3
1 2 3 3
1 1 1 1
1 1 2 3
3 4 5 6






//question on vector

	int solve(vector<int> &v, int n) {
	int l = 0, r = n-1;
	while(l < r) {
		int mid = l+(r-l)/2;
		if((mid%2 == 0 && v[mid] == v[mid+1]) || (mid%2 == 1 && v[mid] == v[mid-1])) {
			l = mid+1;
		} else {
			r = mid;
		}
	}
	return v[l];
}


int main() { 
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < v.size(); i++) {
		cin>>v[i];

	}
	
	cout<<solve(v, n);
}



	
