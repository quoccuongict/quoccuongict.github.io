#include<iostream>

using namespace std;

int main(){
	int F[18];
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i < 18; i++){
		F[i] = F[i-1] + F[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 18; j++){
				if(a[i] == F[j]){
					cout << a[i] << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
