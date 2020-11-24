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
		int result = -1;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[j] - a[i] > result){
					result = a[j] - a[i];
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
