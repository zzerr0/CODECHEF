#include<iostream>
using namespace std; 
void lucky(string str, int n, int Ca=0, int Cb=0)
{
 
   
for(int i=0;i<n;i=i+2)
  { 
 
   if(str[i]==str[0])
   {
      Ca++;   
   } 
  }  
  
  for(int i=1;i<n;i=i+2)
  { 
   if(str[i]==str[1])
   {
      Cb++;   
   } 
  }
  if(Ca+Cb>=4 && Ca+Cb==n)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
  cout<<"No"<<endl;
  
  }
  
  }

int main()
{
  int t;
  cin>>t;
  while(t>0)
 { 
       
  string str;
  cin>>str;
  int n = str.length();
  lucky(str,n);
  t--;
  }
  return 0;
}

