#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std ;
 
long long ucln(long long a, long long b)
{
	if(b == 0){
		return a;
	}
	return ucln(b, a%b);
}
 
int main(){
	int t;
	cin >> t;
	while(t > 0){
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long s = x*y/ucln(x,y);
		s = s*z/ucln(s,z);
		long long mmin = pow(10,n-1);
		long long mmax = pow(10,n);
		long long k = mmin/s;
		if(s*k == mmin){
			cout << mmin << endl;
		}
		else{
			if(s*(k+1) < mmax){
				cout << s*(k+1) << endl;
			}
			else{
				cout << "-1" << endl;
			}
		}
		t--;
	}
	return 0 ;
}
 
