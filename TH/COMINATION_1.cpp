#include<iostream>

using namespace std;

bool check;

void printfResult(int n, int a[]){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << " ";
}

void nextPer(int n, int a[]){
	int i = n-1;
	while(a[i] == 1){
		i--;
	}
	if(i < 0){
		check = false;
	}
	else{
		a[i] = 1;
		for(int j = i+1; j < n; j++){
			a[j] = 0;
		}
		printfResult(n,a);
	}
}

int main(){
	int t;
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		int a[21] = {0};
		check = true;
		printfResult(n,a);
		while(check){
			nextPer(n,a);
		}
		cout << endl;
		t--;
	}
	return 0;
}
