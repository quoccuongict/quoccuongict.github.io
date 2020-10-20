#include<iostream>
#include<cstring>

using namespace std;

bool isBigger(string a, string b){
	if(a.length() > b.length()){
		return true;
	}
	else{
		if(a.length() < b.length()){
			return false;
		}
		else{
			if(a > b){
				return true;
			}
			return false;
		}
	}
}

string sub(string a, string b){
	string result = "";
	int du = 0;
	while(a.length() < b.length()){
		a = '0' + a;
	}
	while(b.length() < a.length()){
		b = '0' + b;
	}
	for(int i = a.length()-1; i >= 0; i--){
		int x = a[i] - '0';
		int y = b[i] - '0' + du;
		if(x < y){
			x += 10;
			du = 1;
		}
		else{
			du = 0;
		}
		char c = x - y + '0';
		result = c + result;
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
		string result;
		if(isBigger(s1,s2)){
			result = sub(s1, s2);
		}
		else{
			result = sub(s2, s1);
		}
		cout << result << endl;
	}
	return 0;
}
