#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		int count = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != 0){
				count++;
				cout << a[i] << " ";
			}
		}
		for(int i = 0; i < n- count; i++){
			cout << "0 ";
		}
		cout << endl;
		t--;
	}
	return 0;
}
