#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int arr[n+m];
		for(int i = 0 ; i < n+m; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n+m);
		vector<int> v;
		cout << arr[0] << " ";
		for(int i = 1; i < n+m; i++){
			if(arr[i] != arr[i-1]){
				cout << arr[i] << " ";
			}
			else{
				v.push_back(arr[i]);
			}
		}
		cout << endl;
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
