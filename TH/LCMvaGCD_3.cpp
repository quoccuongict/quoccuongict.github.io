#include<iostream>

using namespace std;

long long base = 1e9+7;

long long powerMod(long long a, long long b){
	long long z;
	if(b == 0){
		return 1;
	}
	else{
		if(b % 2 == 0){
			z = powerMod(a, b/2);
			return (z*z) % base;
		}
		return (powerMod(a,b-1)*a) % base;
	}
}

int GCD(int a, int b){
	if(b == 0) return a;
	return GCD(b, a%b);
}

long long multiplyArray(int a[], int n){
	long long m = 1;
	for(int i = 0; i < n; i++){
		m = (m*a[i]) % base;
	}
	return m;
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
		int UCLN = a[0];
		for(int i = 1; i < n; i++){
			UCLN = GCD(UCLN, a[i]);
		}
		long long result = powerMod(multiplyArray(a,n),UCLN);
		cout << result << endl;
	}
	return 0;
}
