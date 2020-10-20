#include<iostream>

using namespace std;

int maxNumber(int a[], int n){
	int mmax = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > mmax){
			mmax = a[i];
		}
	}
	return mmax;
}

bool checkMod(int a[], int n, int k){
	int mod = a[0] % k;
	for(int i = 1; i < n; i++){
		if(a[i] % k != mod){
			return false;
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
		int count = 0;
		int mmax = maxNumber(a,n);
		for(int i = 1; i <= mmax+1; i++){
			if(checkMod(a,n,i)){
				count++;
			}
		}
		if(n <= 1){
			cout << "0" << endl;
		}
		else{
			cout << count << endl;
		}
	}
	return 0;
}
