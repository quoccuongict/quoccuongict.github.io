#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isPrime(int n){
	if(n < 2){
		return false;
	}
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}

vector<int> Prime(){
	vector<int> v;
	for(int i = 2; i <= 20000; i++){
		if(isPrime(i)){
			v.push_back(i);
		}
	}
	return v;
}

int main(){
	vector<int> result = Prime();
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int i = 0;
		while(result[i] <= n){
			cout << result[i] << " ";
			i++;
		}
		cout << endl;
		t--;
	}
	return 0;
}
