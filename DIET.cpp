#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int n, k;
//  cout<<"Enter no. of days "<<endl;
  cin>>n;
//  cout<<"Enter Protein Required per day "<<endl;
  cin>>k;
  int arr[n];
  int store = 0;
  for(int i=0; i<n; i++)
  cin>>arr[i];
  bool dec = false;
  int i=0;
  for(i=0; i<n; i++)
  {
    if((arr[i] + store) >= 5)
    {
     store = abs(arr[i] - k); 
     dec = true;
    }
    else 
   {
     dec = false;
     break;
   }
  }
  
  if(dec == true)
  cout<<"Yes"<<endl;
  else
  cout<<"No "<<i+1<<endl;
  t--;
  }
  return 0;
}
