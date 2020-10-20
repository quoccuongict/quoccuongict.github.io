#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long *a;
		a = new long long[n];
		long long sum = 0;
		long long ans = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
			ans = ans + a[i]*i;
		}
		long long maxTotal = ans;
		for(int i = 0; i < n-1; i++){
			ans = ans + a[i]*(n-1) - (sum - a[i]);
//			cout << ans << endl;
			if(ans > maxTotal){
				maxTotal = ans;
			}
		}
		delete a;
		cout << maxTotal << endl;
	}
	return 0;
}
