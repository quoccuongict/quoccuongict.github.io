#include<bits/stdc++.h>

using namespace std;
typedef pair<int ,int > pa;

void solve(){
	long long n,m;
	cin >> n >> m;
	long long sum = (n+1)*n/2;
	long long x = (sum-m)/2;
	long long y = sum - x;
	if(x*2 != sum-m || (x<0 || y < 0)){
		cout << "No" << endl;
	}
	else{
		long long  uclc = __gcd(x,y);
		if(uclc == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;	
		} 
	}
}

int main(){

	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int t;
  	cin >> t;
  	while(t--){
  		solve();
	}
	return 0;
}
