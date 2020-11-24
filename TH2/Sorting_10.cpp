#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		int a[10] = {0};
		for(int i = 0; i < s.length(); i++){
			if(s[i] != ' '){
				a[s[i]-'0']++;
			}
		}
		for(int i = 0; i < 10; i++){
			if(a[i]){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
