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
		int minn = a[n-1]- a[0];
		for(int i = 0; i < n-1; i++){
			if(a[i+1] - a[i] < minn){
				minn = a[i+1] - a[i];
			}
		}
		cout << minn << endl;
		t--;
	}
	return 0;
}
