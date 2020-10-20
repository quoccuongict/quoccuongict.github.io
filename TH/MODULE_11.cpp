#include<bits/stdc++.h> 
using namespace std; 
long long multiplyMod(long long a, long long b, long long c){ 
	long long z;
	if (b == 0){
		return 0;
	}  
	else{
		z = multiplyMod(a,b/2,c);
		if (b % 2 == 0){
			return (2* (z%c)) % c; 
		} 
		else{
			return (a%c + 2*(z%c)) % c; 
		} 
	}
} 
int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		long long a, b, c; 
		cin >> a >> b >> c; 
		cout << multiplyMod(a,b,c) << endl; 
	} 
	return 0; 
}


