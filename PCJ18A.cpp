#include<iostream>
using namespace std;
int main()
{
 // cout<<"enter";
  int t;
  cin>>t;
  while(t>0)
  {
 // cout<<"Enter number of elements and ingredient"<<endl;
  int n, x;
  cin>>n;
  cin>>x;
  int a[n];
  int count = 0;

  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  
  for(int i=0; i<n; i++)
  {
    if(a[i] >= x)
     count++;
     if(count > 0)
     break;
  }
  
  if(count > 0)
  cout<<"YES"<<endl;
  else if(count == 0)
  cout<<"NO"<<endl;
  
  t--;
  }
  return 0;
}
