#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t>0)
{
  int n,max=0,sum=0;
  cin>>n;
  int a[n],b[n];    
  for(int i=0;i<n;i++)
   cin>>a[i];
  for(int i=0;i<n;i++)
   cin>>b[i];
  for(int i=0;i<n;i++)
  {
   sum=a[i]*20-b[i]*10;
   if(sum>max)
   max=sum;
   }        
   cout<<max<<endl;
   t--;
  }
  return 0;
}
