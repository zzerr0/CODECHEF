#include <iostream>
using namespace std;
int main()
{
 int l=0, r=0;
 cin>>l>>r;
 if(l%2 == 0){
  for(int i=l+1; i<=r; i+=2){
   cout<<i<<" ";
  }
 }
 else{
  for(int i=l; i<=r; i+=2){
   cout<<i<<" ";
  }
 }
}
