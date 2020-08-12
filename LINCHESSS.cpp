#include<iostream>
using namespace std;
int main()
{
  
  int t;
  cin>>t;
  while(t > 0)
  { 
 // cout<<"Enter N and K"<<endl;
  int n, k;
  cin>>n>>k;
  
// cout<<"Enter Pi elements "<<endl;
  int p[n];
  for(int i = 0; i < n; i++)
  {
    cin>>p[i];
  }
  int max = -1;
  for(int i = 0; i < n; i++)
  {   
  if( p[i] > 0)
  {
   for(int j = p[i]; j<=k; j = j + p[i])
    {
      if(j == k)
      { 
        if( p[i] > max )
        {
          max = p[i];
        }
         break;
       }     
     }
     }
   }
   cout<<max<<endl;
   t--;
  } 
  return 0;
}
