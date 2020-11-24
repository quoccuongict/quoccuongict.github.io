#include<iostream>
#include<cmath>

using namespace std;

bool isPlrime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int countPrime(int l, int r){
	int count = 0;
	for(int i = l; i <=r; i++){
		if(isPlrime(i)){
			count++;
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		cout << countPrime(l,r) << endl;
	}
	return 0;
}
