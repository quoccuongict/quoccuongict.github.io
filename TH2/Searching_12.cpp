#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		bool check = true;
		for(int i = 0; i < n; i++){
			if(binary_search(a, a+n, a[i]+x)){
				cout << "1" << endl;
				check = false;
				break;
			}
		}
		if(check){
			cout << "-1" << endl;
		}
	}
	return 0;
}
