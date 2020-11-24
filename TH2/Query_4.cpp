#include<bits/stdc++.h>
using namespace std;
long long maxSubArraySum(long long a[], int n) 
{ 
   long long max_so_far = a[0]; 
   long long curr_max = a[0]; 
   for (int i = 1; i < n; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
} 
int main() 
{ 
    int n,T;
    cin >> T;
    while(T--)
    {
    	cin >> n;
    	long long a[n+1];
    	for(int i = 0; i < n; i++)
    		cin >> a[i];
		cout << maxSubArraySum(a,n) << endl;
	}
    return 0; 
}
