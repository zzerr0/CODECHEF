#include <iostream>
using namespace std;
int main(){

int n, t, sum = 0;
cin>>t;
while(t > 0){
sum = 0;
cin>>n;
 while( n >= 5){
  sum = sum + n/5;
  n = n/5;
 }
 cout<<sum<<endl;
 t--;
}

return 0;

}
