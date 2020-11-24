#include<iostream>

using namespace std;

int solve(int a[], int n, int x){
	int l = 0;
	int r = n-1;
	cout << l << " " << r << " ";
	while(l <= r){
		int mid = (l+r)/2;
		cout << a[mid] << endl;
		if(a[mid] == x){
			return mid;
		}
		if(a[l] > a[r]){
			if(a[mid] > a[r]){
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}
		else{
			if(a[mid] > x){
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}
		cout << l << " " << r << " ";
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << solve(a,n,x) << endl;
	}
	return 0;
}
