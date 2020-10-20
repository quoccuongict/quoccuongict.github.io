#include<iostream>
#include<cmath>

using namespace std;

int minPrime(int n){
	if(n == 1){
		return 1;
	}
	else{
		int i = 2;
		while((i <= sqrt(n)) && (n % i != 0)){
			i++;
		}
		if(i > sqrt(n)) return n;
		else return i;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cout << minPrime(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
