#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int n, sum=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int nu;
    cin>>nu;
    sum = sum + nu;
  }
  
  if(sum % 2 == 0)
  {
    cout<<"No"<<endl;
  }
  else
  {
    cout<<"Yes"<<endl;
  }
  
  t--;
  }
  return 0;
  
}
