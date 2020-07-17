#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t>0)
 {
 //cout<<"Enter n, k, v respectively"<<endl;
 int n, k, v;
 cin>>n>>k>>v;
 float x ;
 int sum = 0, arr[n];
 //cout<<"Enter Array "<<endl;
 for(int i=0; i<n; i++)
 {
   cin>>arr[i];
   sum = sum + arr[i];
 }
 
 x = (((n+k) * v) - sum)/k;
 if( x < 0 || x != int(x))
 cout<<"-1"<<endl;
 else 
 cout<<x<<endl;
 t--;
 }
 return 0;
} 
