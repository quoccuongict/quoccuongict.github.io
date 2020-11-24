#include<iostream>

using namespace std;

long long f[1005];
void Fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 1001; i++){
		f[i] = (f[i-1] + f[i-2]) % 1000000007;
	}
}
int main(){
	int t;
	cin >> t;
	Fibo();
	while(t > 0){
		int n;
		cin >> n;
		cout << f[n] << endl;
		t--;
	}
	return 0;
}
