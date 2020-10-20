#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isPrime(int n){
	if(n < 2){
		return 0;
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
	vector<int> result;
	int i = 2;
	while(i < 1100){
		if(isPrime(i)){
			result.push_back(i);
		}
		i++;
	}
	return result;
}
int main(){
	int t;
	cin >> t;
	vector<int> result = Prime();
	while(t > 0){
		int n;
		cin >> n;
		int i = 0;
		while(result[i]*result[i] <= n){
			cout << result[i]*result[i] << " ";
			i++;
		}
		cout << endl;
		t--;
	}
	return 0;
}
