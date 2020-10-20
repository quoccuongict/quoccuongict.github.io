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
		if(n % 2  == 0){
			for(int i = 0; i < n/2; i++){
				cout << a[i] << " " << a[n/2+i] << " ";
			}
		}
		else{
			for(int i = 0; i < n/2; i++){
				cout << a[i] << " " << a[n/2+i+1] << " ";
			}
			cout << a[n/2];
		}
		cout << endl;
	}
	return 0;
}
