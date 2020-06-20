#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
  int arr[12] = {0};
  
  int sum = 0;
  int n; 
  cin>>n;
  int serial, score;
  for(int i=0;i<n;i++)
  {
    cin>>serial;
    cin>>score;
    if(score>arr[serial])
    {
     arr[serial] = score;
    }
  }
  for(int i=0;i<9;i++)
  {
    sum = sum + arr[i];
  }
      
  cout<<sum<<endl;
 }
  
return 0;
}
