#include<iostream>

using namespace std;

long long GCD(long long a, long b){
	if(b == 0) return a;
	return GCD(b, a%b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, x, y;
		cin >> a >> x >> y;
		long long UCLN = GCD(x,y);
		for(long long i = 0; i < UCLN; i++){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
