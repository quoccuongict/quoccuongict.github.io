#include<iostream>

using namespace std;

int b[1000005];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int result = -1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < 1000005; i++){
			b[i] = 0;
		}
		for(int i = 0; i < n; i++){
			b[a[i]]++;
			if(b[a[i]] > 1){
				result = a[i];
				break;
			}
		}
		cout << result << endl;
	}
	return 0;
}
