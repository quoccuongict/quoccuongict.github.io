#include<iostream>
#include<algorithm>

using namespace std;

int x[21];
bool check;

void init(int n){
	for(int i = 1; i <= n; i++){
		x[i] = i;
	}
}

void printResult(int a[], int n){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << " ";
}

void nextPer(int n){
	int i = n-1;
	while(i > 0 && x[i] > x[i+1]){
		i--;
	}
	if(i == 0) check = false;
	else{
		int k = n;
		while(x[i] > x[k]){
			k--;
		}
		swap(x[i], x[k]);
		int r = i+1;
		int s = n;
		while(r <= s){
			swap(x[r], x[s]);
			r++;
			s--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		init(n);
		check = true;
		while(check){
			printResult(x,n);
			nextPer(n);
		}
		cout << endl;
	}
	return 0;
}
