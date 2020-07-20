#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  //cout<<"Enter N";
  int n;
  cin>>n;
  int x[n], y[n];
  
 // cout<<"Enter x"<<endl;
  for(int i=0;i<n;i++)
  cin>>x[i];
  
//  cout<<"Enter Y"<<endl;
  for(int i=0;i<n;i++)
  cin>>y[i];
  
  int xsum = 0, ysum = 0 ;
  
  for(int i=0; i<n; i++)
  {
    if(i%2 == 0)
    xsum = xsum + x[i];
    else
    xsum = xsum + y[i];
  }
  
  for(int i=0; i<n; i++)
  {
    if(i%2 == 0)
    ysum = ysum + y[i];
    else
    ysum = ysum + x[i];
  }
  
  if(xsum < ysum)
  cout<<xsum<<endl;
  else
  cout<<ysum<<endl;
  t--;
  } 
  return 0;
  
}
