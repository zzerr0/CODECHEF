#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 
  int nofhorses ;
  cin>>nofhorses;
  int skillofhorse[nofhorses] ;
  for(int i=0;i<nofhorses;i++)
  {
    cin>>skillofhorse[i];  
  }
  
  sort(skillofhorse, skillofhorse + nofhorses);
  
  int minskill = skillofhorse[1] - skillofhorse[0];
  for(int i=1; i<nofhorses-1; i++)
  {
    if(skillofhorse[i+1] - skillofhorse[i] < minskill)
   minskill = abs(skillofhorse[i+1] - skillofhorse[i]);
  }
  
  cout<<(minskill);
  
  return 0;
}
