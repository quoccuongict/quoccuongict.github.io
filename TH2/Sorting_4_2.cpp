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
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		vector<int> v1;
		vector<int> v2;
		set_union(a, a+n, b, b+m, back_inserter(v1));
		set_intersection(a, a+n, b, b+m, back_inserter(v2));
		for(int i = 0; i < v1.size(); i++){
			cout << v1[i] << " ";
		}
		cout << endl;
		for(int i = 0; i < v2.size(); i++){
			cout << v2[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
