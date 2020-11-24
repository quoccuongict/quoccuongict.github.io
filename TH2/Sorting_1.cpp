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
		int i = 0;
		int j = n-1;
		bool check = true;
		while(i <= j){
			if(check){
				cout << a[j] << " ";
				j--;
				check = false;
			}
			else{
				cout << a[i] << " ";
				i++;
				check = true;
			}
		}
		cout << endl;
		t--;
	}
	return 0;
}
