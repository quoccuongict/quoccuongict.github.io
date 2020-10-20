#include<iostream>
#include<cmath>

using namespace std;

void Analysis(int n){
	int i = 2, d;
	while(i <= sqrt(n)){
		d = 0;
		while(n % i == 0){
			d++;
			n = n/i;
		}
		if(d > 0){
			cout << i << " " << d << " ";
		}
		i++;
	}
	if(n != 1){
		cout << n << " 1";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		Analysis(n);
		t--;
	}
	return 0;
}
