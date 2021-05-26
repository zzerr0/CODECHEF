#include <iostream>
using namespace std;
int main(){
 int a=0, b=0, c=0, count=0;
 cin>>a>>b>>c;
 if((a+b > c) && (a+c > b) && (c+b > a)){
  if(abs(a-b) > 0){
   count++;
  }
  if(abs(b-c) > 0){
   count++;
  }
  if(abs(c-a) > 0){
   count++;
  }
  
  switch(count){
   case 0: cout<<1<<endl;
           break;
   case 2: cout<<2<<endl;
           break;
   case 3: cout<<3<<endl;
           break;
  }
 }
 else{
  cout<<-1<<endl;
 }
 

return 0;
}
