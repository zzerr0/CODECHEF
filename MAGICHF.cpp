#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while( t > 0 )
 {
// cout<<"Enter n x and d "<<endl;
 int n, s, x;
 cin>>n>>x>>s;
 
 int temp = x;
 while(s>0)
 {
   int a = 0, b = 0;
  cin>>a>>b;
     if( a == temp)
      {
        temp = b;
     //   cout<<"X is "<<x<<endl;
      }
     else
     {
       temp = a;
   //    cout<<"X is "<<x<<endl;
     } 
  s--;
 }
 
 cout<<temp<<endl;
 t--;
 }
 
  return 0;
}
