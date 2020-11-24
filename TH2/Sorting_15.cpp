#include<iostream>
#include<algorithm>
#include<vector>

int binarySearch(int a[], int low, int hight, int key ){
    // tìm phan tu cuoi cung có gia tri lon nhat ma nho hon key
    int ans = -1;
    while(low <= hight) {
        int mid = (low + hight) / 2;
        if (a[mid] < key){ // neu a[mi] thoa man dk
            ans = mid;       // luu ket qua vao ans
            low = mid + 1;    // thu nho pham vi tim kiem
        } 
		else{
			hight = mid - 1;
		} 
    }
    return ans;
}

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+3];
		int d[100005] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			d[a[i]]++;
		}
		int count = 0;
		for(int i = 0; i <= 100003; i++){
			if(d[i] > 1){
				count++;
			}
		}
		sort(a, a+n);
		vector<int> v;
		v.push_back(a[0]);
		for(int i = 1; i < n; i++){
			if(a[i] != v[v.size()-1]){
				v.push_back(a[i]); 
			}
		}
		int m = v.size();
		int b[m];
		for(int i = 0; i < v.size(); i++){
			b[i] = v[i];
		}
		
		int i = 0;
		while(i < m){
			int low = i;
			int hight = m-1;
			int key = k + a[i];
			int ans = binarySearch(b,low,hight, key);
			if(ans > -1){
				count += ans-i;
			}
			i++;
		}
		cout << count << endl;
	}
	return 0;
}
