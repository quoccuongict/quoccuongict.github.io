#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		cout << a[n-1] << endl;
		t--;
	}
	return 0;
}
