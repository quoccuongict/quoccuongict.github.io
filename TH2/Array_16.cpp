#include<iostream>

using namespace std;

string maxNumber(string s){
	int i = s.length()-2;
	while(i >= 0 && s[i] <= s[i+1]){
		i--;
	}
	if(i < 0){
		return "-1";
	}
	else{
		int k = i+1;
		for(int j = i+1; j < s.length(); j++){
			if(s[j] > s[k] && s[j] < s[i]){
				k = j;
			}
		}
		swap(s[i], s[k]);
		return s;
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		string result = maxNumber(s);
		int i = 0;
		while(i < result.length() && result[i] == '0'){
			i++;
		}
		for(int j = i; j < result.length(); j++){
			cout << result[j];
		}
		cout << endl;
	}
	return 0;
}
