#include<iostream>
#include<cstring>

using namespace std;

string sum(string a, string b){
	string result = "";
	int du = 0;
	while(a.length() < b.length()){
		a = '0' + a;
	}
	while(b.length() < a.length()){
		b = '0' + b;
	}
	for(int i = a.length()-1; i >= 0; i--){
		int n = (a[i] - '0') + (b[i] - '0') + du;
		char c = (n%10) + '0';
		result = c + result;
		du = n/10;
	}
	if(du != 0){
		result = '1' + result;
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	fflush(stdin);
	while(t--){
		string s1, s2;
		cin >> s1;
		cin >> s2;
		cout << sum(s1,s2) << endl;
	}
	return 0;
}
