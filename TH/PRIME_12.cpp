#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> Prime(int n){
	vector<int> result;
	int i = 2;
	while(i <= sqrt(n)){
		while(n % i == 0){
			result.push_back(i);
			n = n/i;
		}
		i++;
	}
	if(n != 1){
		result.push_back(n);
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n, k;
		cin >> n >> k;
		vector<int> result = Prime(n);
		if(result.size() < k){
			cout << "-1" << endl;
		}
		else{
			cout << result[k-1] << endl;
		}
		t--;
	}
	return 0;
}
