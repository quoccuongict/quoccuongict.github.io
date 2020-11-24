#include<iostream>

using namespace std;

int binarySearch(long long a[], int l, int r){
	while(l < r){
		int m = (l+r)/2;
		if(a[m] > a[r]){
			l = m;
		}
		else{
			r = m-1;
		}
	}
	return l;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << a[binarySearch(a,0,n-1)] << endl;
	}
	return 0;
}
