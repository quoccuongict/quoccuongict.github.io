#include<iostream>
#include<cmath>

using namespace std;

void Prime(long long n){
	int i = 2;
	while(i <= sqrt(n)){
		while(n % i == 0){
			cout << i << " ";
			n = n/i;
		}
		i++;
	}
	if(n != 1){
		cout << n;
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long n;
		cin >> n;
		Prime(n);
		t--;
	}
	return 0;
}
