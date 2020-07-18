#include<iostream>
using namespace std;
int main()
{
 // cout<<"Enter String "<<endl;
  string s;
  cin>>s;
  int f=0, b=0;
  bool ffound, bfound;
  ffound = bfound = false;
  for(int i=0 ; i<s.length(); i++)
  {
    if(s[i] == '1')
    {
      f=i; 
      ffound = true;
      break;
    }
  }
  for(int i=s.length()-1; i>=0; i--)
  {
    if(s[i] == '1')
    {
      b=i; 
      break;
    }
   
   
  }
  
  
  for(int i=f; i<=b; i++)
  {
    if(s[i] != '1')
   {
     ffound = false;
     break;
   }  
   }
  if(ffound == false)
  cout<<"No"<<endl;
  else
  cout<<"Yes"<<endl;
  return 0;
  
}
