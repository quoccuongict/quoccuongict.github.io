#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long maxx = a[0];
		for(int i = 0; i < n; i++){
			for(int j = i; j < n; j++){
				long long m = 1;
				for(int k = i; k <= j; k++){
					m *= a[k];
				}
				if(m > maxx){
					maxx = m;
				}
			}
		}
		cout << maxx << endl;
	}
	return 0;
}
