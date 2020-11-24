#include<iostream>

using namespace std;

int main(){
	long long F[95];
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 92; i++){
		F[i] = F[i-1] + F[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		bool check = false;
		for(int i = 0; i <= 92; i++){
			if(n == F[i]){
				check = true;
				break;
			}
		}
		if(check){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
