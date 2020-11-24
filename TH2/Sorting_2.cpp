#include<bits/stdc++.h>

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
		vector< pair<int,int> > v;
		for(int i = 0; i <n; i++){
			v.push_back(make_pair(abs(a[i]-x), i));
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++){
			cout << a[v[i].second] << " ";
		}
		cout << endl;
	}
	return 0;
}
