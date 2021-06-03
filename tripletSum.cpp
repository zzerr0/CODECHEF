#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        int sum ;
 bool isTriplet = false;
 vector <int> vec;
 /* cout<<"Enter the size"<<endl;
 cin>>n;
  
 int arr[n];
 cout<<"Enter the array"<<endl;
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 */
 for(int i = 0; i < n; i++){
  vec.push_back(arr[i]);
 }
 vector <int> :: iterator it;
 
 for(int i = 0; i < n-1; i++){
  for(int j = i+1; j < n; j++){
   if( i != j && arr[i] != arr[j]){
          sum = arr[i] + arr[j];
   
   if(sum + abs(sum) == 0){
   it = find(vec.begin(), vec.end(), abs(sum));
   if( it !=  vec.end() && *it != arr[i] && *it != arr[j] ){
     isTriplet = true;
     //cout<<arr[i]<<" "<<arr[j]<<" "<<abs(sum)<<endl;
     return true;
    //cout<<arr[i]<<" "<<arr[j]<<" "<<abs(sum)<<endl;
   }
  }
   }
  }
 }
 
 return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends
