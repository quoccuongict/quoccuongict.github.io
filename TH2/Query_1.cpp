#include<iostream>

using namespace std;

int sum(int l, int r, int a[]){
	int s = 0;
	for(int i = l; i <= r; i++){
		s += a[i];
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n, l , r, q;
		cin >> n >> q;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		while(q--){
			cin >> l >> r;
			cout << sum(l,r,a) << endl;
		}
		t--;
	}
	return 0;
}
