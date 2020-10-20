#include<iostream>
#include<cmath>

using namespace std;

long long Prime(long long n){
	long long maxPrime = 0;
	int i = 2;
	while(i <= sqrt(n)){
		while(n % i == 0){
			n = n/i;
			if(i > maxPrime){
				maxPrime = i;
			}
		}
		i++;
	}
	if(n != 1 && n > maxPrime){
		maxPrime = n;
	}
	return maxPrime;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long n;
		cin >> n;
		cout << Prime(n) << endl;
		t--;
	}
	return 0;
}
