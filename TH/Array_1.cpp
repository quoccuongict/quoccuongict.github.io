#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		long long a[n], b[n];
		for(int i = 0; i < n; i++){
			b[i] = -1;
		}
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] >= 0 && a[i] < n){
				b[a[i]] = a[i];
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
		t--;
	}
	return 0;
}
