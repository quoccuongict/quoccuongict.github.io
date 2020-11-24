#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[1005];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int result = 1;
		int f[1005] = {0};
		for (int i = 1; i <= n; i++){
		    f[i] = 1;
		    for (int j = 0; j < i; j++) 
				if (a[j] < a[i]){
		        	f[i] = max(f[i], f[j] + 1);
		    	}
		    result = max(result, f[i]);
		}
		cout << result << endl;
	}
	return 0;
}

