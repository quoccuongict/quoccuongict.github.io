#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(n == 1){
			cout << a[0] << endl;
		}
		else{
			int so = a[0];
			int sn = max(a[0], a[1]);
			int tmp;
			for(int i = 2; i < n; i++){
				tmp = max(a[i] + so, sn);
				so = sn;
				sn = tmp;
			}
			cout << sn << endl;
		}
	}
	return 0;
}
