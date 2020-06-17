#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int n;
  cin>>n;
  int arr[n], brr[n];
  
  for(int i=0;i<n;i++)
  {
    cin>>arr[i]>>brr[i];
    arr[i]=arr[i]*20;
    brr[i]=brr[i]*10;
    arr[i]=arr[i]-brr[i];
    if(arr[i]<0)
    arr[i]=0;
  }
  
  cout<<*max_element(arr, arr+n);
  }
  return 0;
}
