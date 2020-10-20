#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int b, p;
		cin >> b >> p;
		int count = 0;
		for(int i = 1; i <= b; i = i+p){
			long long k = i*i;
			if(k % p == 1){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
