#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t>0)
 {
 int p, n;
 //p=total participants
 //n=no. of problems
 cin>>n>>p;
 int c, h;
 c= h=0;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
   if(arr[i]<=(p/10))
   h++;
   if(arr[i]>=(p/2))
   c++;
 }
 if(c==1 && h==2)
 cout<<"yes"<<endl;
 else
 cout<<"no"<<endl;
 
 t--;
 }
 
 return 0;
}
