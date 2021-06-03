// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int n, int k) 
    { 

        unordered_map<int, int> umap;
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i = 0; i < n; i++){
        umap[arr[i]]++;
        }

        for(auto it : umap){
            if(it.second == k){
                pq.push(it.first);
            }
        }

      return pq.top();
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends
