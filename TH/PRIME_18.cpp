#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int count = 0;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
