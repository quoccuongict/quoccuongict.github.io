#include<iostream>

using namespace std;

bool isArrayMountain(int a[], int l, int r){
	while(l < r && a[l] <= a[l+1]){
		l++;
	}
	if(l < r){
		for(int i = l; i < r; i++){
			if(a[i] < a[i+1]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l, r;
		cin >> l >> r;
		if(isArrayMountain(a,l,r)){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
