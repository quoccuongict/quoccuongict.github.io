#include<iostream>
#include<vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> result = factorize(n);
		if(result.size() == 3 && result[0] != result[1] && result[1] != result[2]){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;
}
