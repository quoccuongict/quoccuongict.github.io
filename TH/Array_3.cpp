#include<iostream>

using namespace std;

long long multuply(long long a[], int n, int k){
	long long s = 0;
	for(int i = 0; i < n; i++){
		s = s + a[i]*((i-k+n)%n);
	}
	return s;
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
		long long maxx = 0;
		for(int i = 0; i < n; i++){
			if(multuply(a,n,i) > maxx){
				maxx = multuply(a,n,i);
			}
		}
		cout << maxx <<endl;
	}
	return 0;
}
