#include<iostream>
#include<algorithm>

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
		sort(a, a+n);
		if(n == 1 || a[0] == a[n-1]){
			cout << "-1" << endl;
		}
		else{
			cout << a[0] << " " << a[1] << endl;
		}
	}
	return 0;
}
