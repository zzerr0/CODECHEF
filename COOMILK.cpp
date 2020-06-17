#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter";
  int t;
  cin>>t;
  while(t>0) 
  {
  bool a = true;
  int n;
  cin>>n;
  string arr[n];

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]=="cookie" && arr[i+1]=="milk")
    a=1;
    
    if(arr[i]=="cookie" && arr[i+1]=="cookie")
   {
     a=0;
     break;
   }
    
  }
 
  if(a==true)
  cout<<"YES";
  else 
  cout<<"No";
  
 t--;
 }  
  return 0;
}
