#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

vector<int> factorize(int n) {
    vector<int> result;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            result.push_back(i);
            n = n/i;
        }
    }
    if (n != 1) {
        result.push_back(n);
    }
    return result;
}

int sumNumber(int n){
	int s = 0;
	while(n > 0){
		s = s + (n%10);
		n = n/10;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> result = factorize(n);
		int sum = 0;
		for(int i = 0; i < result.size(); i++){
			sum = sum + sumNumber(result[i]);
		}
		if(!isPrime(n) && sumNumber(n) == sum){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
