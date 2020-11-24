#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int k, n;
		cin >> k >> n;
		int a[k*n];
		for(int i = 0; i < k*n; i++){
			cin >> a[i];
		}
		sort(a, a+k*n);
		for(int i = 0; i < k*n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		t--;
	}
	return 0;
}
