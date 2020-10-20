#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		int result = 0;
		for(int i = 1; i <= n; i++){
			result += i%k;
		}
		cout << result << endl;
	}
	return 0;
}
