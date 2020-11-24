#include<iostream>

using namespace std;

int maxNumber(int a[], int l, int r){
	int mmax = a[l];
	for(int i = l+1; i <= r; i++){
		if(a[i] > mmax){
			mmax = a[i];
		}
	}
	return mmax;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i <= n-k; i++){
			cout << maxNumber(a,i,i+k-1) << " ";
		}
		cout << endl;
	}	
	return 0;
}
