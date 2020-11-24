#include<iostream>
#include<cmath>

using namespace std;

int solve(int a[], int n, int k){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] <= k){
			count++;
		}
	}
	int d = 0;
	for(int i = 0; i < count; i++){
		if(a[i] > k){
			d++;
		}
	}
	int ans = d;
	for(int i = 0, j = count; j < n; i++, j++){
		if(a[i] > k){
			d--;
		}
		if(a[j] > k){
			d++;
		}
		ans = min(ans, d);
	}
	return ans;
}

int a[10000001];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int result = solve(a,n,k);
		cout << result << endl;
	}
	return 0;
}
