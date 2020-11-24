#include<iostream>

using namespace std;

int sum(int l, int r, int a[]){
	int s = 0;
	for(int i = l; i <= r; i++){
		s += a[i];
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int a1[n], a2[n];
		for(int i = 0; i < n; i++){
			cin >> a1[i];
		}
		for(int i = 0; i < n; i++){
			cin >> a2[i];
		}
		int maxx = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+maxx; j < n; j++){
				if(sum(i,j,a1) == sum(i,j,a2)){
					maxx = j-i+1;
				}
			}
		}
		cout << maxx << endl;
		t--;
	}
	return 0;
}
