#include<iostream>
using namespace std;
int main()
{
 // cout<<"Enter t"<<endl;
  int t;
  cin>>t;
  while( t > 0 )
  {
 // cout<<"Enter N and K"<<endl;
  int n, k; //the number of elements
  cin>>n>>k;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin>>arr[i]; 
  }
  int max = arr[0]; // max is 1st element
  int sum = 0;
   for(int i = 0; i < n-1; i++)
  {
    sum = arr[i] + arr[k - 1]; //sums up. two element since he cam run for 2 km stretch Only
    //cout<<"Sum is "<<sum<<endl;
    if( sum > max )
    {
      max = sum; // 
    }
  }
  
  cout<<max<<endl;
  
  t--;
  }
}
