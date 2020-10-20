#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> sieve(int L, int R){
	vector<int> result;
	vector<bool> isPrime(R - L + 1, true); 
	for (int i = 2; i * i <= R; i++){
	    for (int j = max(i * i, (L + i - 1) / i * i); j <= R; j = j + i) {
	        isPrime[j - L] = false;
	    }
	}
	if (1 >= L){  
	    isPrime[1 - L] = false;
	}
	for (int x = L; x <= R; x++){
	    if (isPrime[x - L]) {
	        result.push_back(x);
	    }
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long l, r;
		cin >> l >> r;
		int L = sqrt(l);
		int R = sqrt(r);
		vector<int> result = sieve(L,R);
		cout << result.size() << endl;
	}
	return 0;
}
