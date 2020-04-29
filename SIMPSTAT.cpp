#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int n, k;
  double sum=0, avg;
  cin>>n;
  cin>>k;
  float arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr, arr+n);
  //sets k element 0 from front and back
  for(int i=1;i<=k;i++)
  {
    arr[i-1]=arr[n-i]=0;
  }
  
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }

  avg=sum/(n-2*k);
  cout<<setprecision(6)<<fixed<<avg<<endl;
  t--;
  }
  return 0;
}

