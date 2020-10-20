#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		int *a;
		a = new int[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = d; i < n; i++){
			cout << a[i] << " ";
		}
		for(int i = 0; i < d; i++){
			cout << a[i] << " ";
		}
		delete a;
		cout << endl;
	}
	return 0;
}
