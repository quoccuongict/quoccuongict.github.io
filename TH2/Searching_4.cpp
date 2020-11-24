#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		int index = -1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x){
				index = i;
			}
		}
		cout << index + 1 << endl;
	}
	return 0;
}
