#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main()
{ int t;
  cin>>t;
  while(t>0)
  {
  int n, k, sum;
  cin>>n>>k;
  vector<int> ar;
  int el;
  for(int i=0;i<n;i++)
  {
   cin>>el;
   ar.push_back(el);
  }
  while(k>0)
  {
  sum=0;
  sum=accumulate(ar.begin(), ar.end(),sum);
  sum=sum+1;
  ar.push_back(sum); 
  k--;
  }

  if(ar[ar.size()-1]%2==0)
  cout<<"even"<<endl;
  else
  cout<<"odd"<<endl;
  t--;
  }
  return 0;
}
