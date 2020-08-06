#include<iostream>
using namespace std;

int call(int x, int y)
{
  if( x == y)
  return x+y;
  
  else
   if( x > y)
   {
     x = x-y;
     call( x, y);
   }
   
  else
   if( y > x)
   {
     y = y-x;
     call( x, y);
   }
}

int main()
{
  int t;
  cin>>t;
  while(t > 0)
  {
  int x, y;
  cin>>x>>y;
  cout<<call(x, y);
  t--;
  }
 
  return 0;
}
