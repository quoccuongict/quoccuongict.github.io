#include<iostream>

using namespace std;

int count(int n, int k){
	int d = 0;
	while(n % k == 0){
		d++;
		n = n/k;
	}
	return d;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		int ans = 0;
		for(int i = p; i <= n; i = i+p){
			int k = i;
			ans = ans + count(k,p);
		}
		cout << ans << endl;
	}
	return 0;
}
