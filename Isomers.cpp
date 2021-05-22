#include <iostream>
#include <cmath>
using namespace std;
int main(){
int t, n, isomers, power, base = 2;
cin>>t;
while(t>0){
  cin>>n;
  if(n >= 0 && n <= 20){
  power = n-4;
  if(power < 0){
   isomers = 1;
  }
  else
   if(power >= 0){
    isomers = pow(base, power) + 1;
   }
 cout<<isomers<<endl;
  }
 t--;
}


return 0;
}
