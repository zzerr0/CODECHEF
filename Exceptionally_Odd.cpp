// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here

        unordered_map<long int, long int> umap;
        for(int i = 0; i < n; i++){
            umap[arr[i]]++;
        }
        
        //unordered_map<long int, long int> :: iterator it;
        
        for(auto it : umap){
           // cout<<"Key : "<<it.first<<" Value : "<<it.second<<endl;
           if(it.second % 2 != 0){
               return it.first;
           }
        }
        
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
