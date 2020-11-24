#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		int a1[1005] = {0};
		int a2[1005] = {0};
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			cin >> a1[i];
		}
		for(int i = 0; i < m; i++){
			cin >> a2[i];
		}
		int sum = 0;
		int nmax = max(n,m);
		for(int i = 0; i < nmax; i++){
			sum = sum + max(a1[i], a2[i]);
		}
		cout << sum << endl;
	}
	return 0;
}
