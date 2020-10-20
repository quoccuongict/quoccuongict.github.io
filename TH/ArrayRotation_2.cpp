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
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long minn = a[0];
		int index = 0;
		for(int i = 1; i < n; i++){
			if(a[i] < minn){
				minn = a[i];
				index = i;
			}
		}
		cout << index << endl;
	}
	return 0;
}
