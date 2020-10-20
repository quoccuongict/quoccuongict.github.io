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
		if(result == k){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}
