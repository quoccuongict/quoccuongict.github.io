#include<iostream>
#include<vector>
#include<algorithm>

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

int binarySearch(vector<int> arr, int l, int r, int x){ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v = sieve(n);
		bool check = true;
		for(int i = 0; i <= v.size()/2 && n >= v[i]; i++){
			if(isPrime(n-v[i])){
				cout  << v[i] << " " << n-v[i] << endl;
				check = false;
				break;
			}
//			int index = binarySearch(v, i, v.size()-1, n-v[i]);
//			if(index >= 0){
//				cout << v[i] << " " << v[index] << endl;
//				check = false;
//				break;
//			}
		}
		if(check){
			cout << "-1" << endl;
		}
	}
	return 0;
}
