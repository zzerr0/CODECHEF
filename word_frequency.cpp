// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            unordered_map<string, int> umap;
            int count = 0;
           //code here.
           for(int i = 0; i < n; i++){
               umap[list[i]]++;
           }
           
           for(auto it : umap){
                 if(it.second == 2){
                     count++;
                 }
           }
           
           return count;
        }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
