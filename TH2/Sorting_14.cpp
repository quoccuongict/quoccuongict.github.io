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
		int count = 1;
		int i = 1;
		while(i < n){
			if(a[i] != a[i-1])
				count++;
			i++;
		}
		cout << a[n-1] - a[0] + 1 - count << endl;
	}
	return 0;
}
