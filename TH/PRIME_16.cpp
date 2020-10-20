#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int count = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(isPrime(i)){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
