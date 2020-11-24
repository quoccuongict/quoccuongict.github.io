#include<iostream>

using namespace std;

int d[1000005];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a1[n];
		int a2[m];
		for(int i = 0; i <= 1000000; i++){
			d[i] = 0;
		}
		for(int i = 0; i < n; i++){
			cin >> a1[i];
			d[a1[i]]++;
		}
		for(int i = 0; i < m; i++){
			cin >> a2[i];
		}
		for(int i = 0; i < m; i++){
			while(d[a2[i]] > 0){
				cout << a2[i] << " ";
				d[a2[i]]--;
			}
		}
		for(int i = 0; i <= 1000000; i++){
			while(d[i] > 0){
				cout << i << " ";
				d[i]--;
			}
		}
		cout << endl;
	}
	return 0;
}
