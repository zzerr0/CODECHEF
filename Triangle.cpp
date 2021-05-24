#include <iostream>
using namespace std;
int main(){
 int a=0, b=0, c=0;
 cin>>a>>b>>c;
 if((a+b > c) && (a+c > b) && (c+b > a)){
  cout<<"YES"<<endl;
 }
 else{
  cout<<"NO"<<endl;
 }
 

return 0;
}
