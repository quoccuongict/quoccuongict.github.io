#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int> v1(n,1);
		vector<int> v2(n,1);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[i] > a[j] && v1[i] < v1[j] + 1){
					v1[i] = v1[j] + 1;
				}
			}
		}
		for(int i = n-2; i >= 0; i--){
			for(int j = n-1; j > i; j--){
				if(a[i] > a[j] && v2[i] < v2[j] + 1){
					v2[i] = v2[j] + 1;
				}
			}
		}
		int maxx = v1[0] + v2[0] - 1;
		for(int i = 1; i < n; i++){
			if(v1[i] + v2[i] - 1 > maxx){
				maxx = v1[i] + v2[i] - 1;
			}
		}
		cout << maxx << endl;
	}
	return 0;
} 
