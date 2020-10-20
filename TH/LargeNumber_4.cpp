#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<int> init(string s){
	vector<int> v;
	for(int i = s.length()-1; i >= 0; i--){
		v.push_back(s[i] - '0');
	}
	return v;
}

void printResult(vector<int> v){
	for(int i = v.size()-1; i >= 0; i--){
		cout << v[i];
	}
	cout << endl;
}

vector<int> add(vector<int> v1, vector<int> v2){
	vector<int> result;
	int length;
	if(v1.size() > v2.size()){
		length = v1.size();
	}
	else{
		length = v2.size();
	}
	v1.resize(length);   // them 0 vao cuoi vector
	v2.resize(length);
	int extra = 0;
	int tmp;
	for(int i = 0; i < length; i++){
		tmp = v1[i] + v2[i] + extra;
		result.push_back(tmp % 10);
		extra = tmp/10;
	}
	if(extra > 0){
		result.push_back(extra);
	}
	return result;
}

int compare(vector<int> a, vector<int> b){
	if(a.size() > b.size()){
		return -1;
	}
	if(a.size() < b.size()){
		return 1;
	}
	for(int i = a.size()-1; i >= 0; i--){
		if(a[i] > b[i]){
			return -1;
		}
		if(a[i] < b[i]){
			return 1;
		}
	}
	return 0;
}

vector<int> div(vector<int> v1, vector<int> v2){
	vector<int> result;
	vector<int> carry;
	
	return result;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		cin >> s1;
		cin >> s2;
		vector<int> v1 = init(s1);
		vector<int> v2 = init(s2);
		vector<int> result = div(v1,v2);
		printResult(result);
	}
	return 0;
}
