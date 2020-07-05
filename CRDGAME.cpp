#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter number of testcase "<<endl;
  int t;
  cin>>t;
  while(t>0)
  {
 // cout<<"Enter number of rounds "<<endl;
  int n;
  cin>>n;
  
  int a[n], b[n];
  
  int acount, bcount;
  acount = bcount = 0;
  
  int adigi, bdigi;
  for(int i=0;i<n;i++)
  {
    int apower, bpower;
    apower = bpower = 0;
   // cout<<"Enter a[i] then b[i]"<<endl;
    cin>>a[i]>>b[i];
    
    do
    {
      adigi = a[i]%10;
      apower = apower + adigi ;
      a[i] = a[i]/10;
    }while(a[i] > 0 );
    
    do
    {
      bdigi = b[i]%10;
      bpower = bpower + bdigi ;
      b[i] = b[i]/10;
    }while(b[i] > 0 );
    
    if(apower > bpower)
    acount = acount + 1;    
    else
    if(bpower > apower)
    bcount = bcount + 1;
    else 
   // if(apower == bpower)
    {
      acount++;
      bcount++;  
    }
    
 // cout<<"A is "<<acount<<" B is "<<bcount<<endl;
  }
  //if A wins 
  if(acount > bcount)
  cout<<"0 "<<acount<<endl;
 //if b wins
  else
  if(bcount > acount )
  cout<<"1 "<<bcount<<endl;
 //if draw
  else
  cout<<"2 "<<acount<<endl;
  
  t--;
  }
  return 0;  
}
