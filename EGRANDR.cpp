#include<iostream>
using namespace std;
int main()
{
  cout<<"enter";
  int t;
  cin>>t;
  while(t>0)
  {
  int n;
  cin>>n;
  int a[n];
  float avg=0;  
  int sum=0;
  int fail=0;
  int fullmarks=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum=sum+a[i];
    
    if(a[i]<=2)
    fail++;
    
    if(a[i]==5)
    fullmarks++;  
  
   
  }
 
  avg=sum/n;
  if(fullmarks>=1 && fail==0 && avg>=4.0)
  cout<<"Yes";
  else
  cout<<"No";
  t--;
  }
  
  return 0;
}
    
