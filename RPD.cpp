#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int pro;
  int sum=0;
  int sumofdigit=0;
  int digit;
  for(int i=0;i<n-1;i++)
  { 
    
    for(int j=i;j<n-1;j++) 
     {
       digit=0;
       sumofdigit=0;
     
 
        pro=arr[i]*arr[j+1];
        while(pro>0)
         {
          digit=pro%10;
          sumofdigit=sumofdigit+digit;
          pro=pro/10;
         }//for while
          
         if(sumofdigit>sum)
         {
         sum=sumofdigit;
         }
     
      //if
      
     }//for j
       
               
  }//for i
  cout<<sum<<endl;
  
  t--;
  }//while
  return 0;
}
