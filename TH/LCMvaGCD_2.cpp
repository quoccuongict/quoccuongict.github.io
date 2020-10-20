#include<iostream>
#include<vector>

using namespace std;

vector<int> sieve(int n){
	vector<int> result;
	bool isPrime[n+1];
	for(int i = 0; i <= n; i++){
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for(int i = 2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j = i*i; j <= n; j = j+i){
				isPrime[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(isPrime[i]){
			result.push_back(i);
		}
	}
	return result;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long ans = 1;
		vector<int> prime = sieve(n);
		for(int i = 0; i < prime.size(); i++){
			int tmp = prime[i];
			ans = ans*prime[i];
			while(tmp*prime[i] <= n){
				ans = ans*prime[i];
				tmp = tmp*prime[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
