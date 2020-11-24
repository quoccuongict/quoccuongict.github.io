#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long sum = 0;
		for(int i = 0; i < n-1; i++){
			cin >> a[i];
			sum += a[i];
		}
		long long s = n*(n+1)/2;
		cout << s-sum << endl;
	}
	return 0;
}
