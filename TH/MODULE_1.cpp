#include<iostream>

using namespace std;

long long powermod(long long a, long long b, long long p){
	long long z;
	if(b == 0){
		return 1;
	}
	else{
		if(b % 2 == 0){
			z = powermod(a, b/2, p);
			return (z*z) % p;
		}
		return (powermod(a,b-1,p)*a) % p;
	}
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long a, b, p;
		cin >> a >> b >> p;
		cout << powermod(a,b,p) << endl;
		t--;
	}
	return 0;	
}

