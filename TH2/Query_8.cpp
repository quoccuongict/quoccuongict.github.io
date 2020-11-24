#include<iostream>

using namespace std;

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
		int maxx = 0;
		int start = 0;
		int end = k-1;
		for(int i = 0; i < k; i++){
			maxx = maxx + a[i];
		}
		int sum = maxx;
		for(int i = k; i < n; i++){
			sum = sum + a[i] - a[i-k];
			if(sum > maxx){
				maxx = sum;
				start = i-k+1;
				end = i;
			}
		}
		for(int i = start; i <= end; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
