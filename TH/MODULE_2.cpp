#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		bool check = true;
		for(int i = 0; i < m; i++){
			if((a*i % m) == 1){
				cout << i << endl;
				check = false;
				break;
			}
		}
		if(check){
			cout << "-1" << endl;
		}
	}
	return 0;
}
