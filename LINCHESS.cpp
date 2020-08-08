#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t > 0)
  {
 // cout<<"Enter n and k"<<endl;
  int n, k;
  cin>>n>>k;
  
  int p[n];
  for(int i = 0; i < n; i++)
  {
    cin>>p[i];
  }
  
  sort(p, p + n);
  int i = 0;
  for( i = 0; i < n; i++)
  {
    if( k % p[i] != 0)
    break;
  }
  if(i != 0)
  cout<<p[i-1]<<endl;
  else
  cout<<"-1"<<endl;
  t--;
  }
}
