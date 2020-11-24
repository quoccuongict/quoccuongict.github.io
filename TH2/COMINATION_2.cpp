#include<iostream>

using namespace std;

bool check;
int x[21];

void init(int k){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}

void printfResult(int a[], int k){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << " ";
}

void nextPer(int n, int k){
	int i = k;
	while(i > 0 && x[i] == n-k+i){
		i--;
	}
	if(i == 0) check = false;
	else{
		x[i]++;
        for (int j = i+1; j <= k; j++) {
            x[j] = x[i]+j-i;
        }
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		init(k);
		check = true;
		while(check){
			printfResult(x,k);
			nextPer(n,k);
		}
		cout << endl;
	}
	return 0;
}
