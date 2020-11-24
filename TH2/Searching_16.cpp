#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		vector<long long> v1;
		vector<long long> v2;
		vector<long long> v3;
		vector<long long> v4;
		long long tmp;
		for(int i = 0; i < n1; i++){
			cin >> tmp;
			v1.push_back(tmp);
		}
		for(int i = 0; i < n2; i++){
			cin >> tmp;
			v2.push_back(tmp);
		}
		for(int i = 0; i < n3; i++){
			cin >> tmp;
			v3.push_back(tmp);
		}
		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v4));
		vector<long long> result;
		set_intersection(v3.begin(), v3.end(), v4.begin(), v4.end(), back_inserter(result));
		if(result.size() > 0){
			for(int i = 0; i < result.size(); i++){
				cout << result[i] << " ";
			}
		}
		else{
			cout << "-1";
		}
		cout << endl;
	}
	return 0;
}
