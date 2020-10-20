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

int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long n, x;
		cin >> n >> x;
		int p[n];
		for(int i = 0; i < n; i++){
			cin >> p[i];
		}
		long long ans = 0;
		for(int i = 0; i < n; i++){
			ans += (powerMod(x,n-i-1)*p[i])%base;
			ans = ans % base;
		}
		cout << ans << endl;
		t--;
	}
	return 0;	
}

