#include <iostream>

using namespace std;

const int M = 1e9+7;
long long C[1001][1001];

int main(){
	int n, k, i, j, t; 
	cin >> t;
	while(t-- ){	
		cin >> n >> k;
		for(i = 0 ; i <= n; i++)
			for(j = 0 ; j <= i; j++)
				if(j == 0 || j == i)
					C[i][j] = 1;
				else
					C[i][j] = (C[i-1][j-1] + C[i-1][j])%M;
		cout << C[n][k] << endl;
	}
	return 0;
}

