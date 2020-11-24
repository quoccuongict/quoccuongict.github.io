#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int index = -1;
		int i = 0;
		while(i < n && a[i] != x){
			i++;
		}
		if(i == n){
			cout << index << endl;
		}
		else{
			cout << i+1 << endl;
		}
	}
	return 0;
}
