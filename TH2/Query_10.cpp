#include<iostream>

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
		int i = 0;
		int j = n-1;
		int count = 0;
		while(i < j){
			if(a[i] == a[j]){
				i++;
				j--;
			}
			else{
				if(a[i] < a[j]){
					a[i+1] = a[i] + a[i+1];
					count++;
					i++;
				}
				else{
					if(a[i] > a[j]){
						a[j-1] = a[j] + a[j-1];
						count++;
						j--;
					}
				}
			}
		}
		cout << count << endl;
	} 
	return 0;
}
