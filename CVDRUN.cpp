#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0){
 // cout<<"Enter N K X and Y respectively "<<endl;
  int n, k, x, y;
  cin>>n>>k>>x>>y;
  int pos = 0;
  int tmp = x;
  if( x!=y){
  while( pos != x){
    pos = (tmp + k) % n;
    if( pos == y ){
      cout<<"YES"<<endl;
      break;
    }
    tmp = tmp + k;
  } 
  if( pos == x ){
    cout<<"NO"<<endl;
    
  }
 }
 else
 cout<<"YES"<<endl;
 t--;
 }
   return 0;
   
} 
