#include <iostream>
using namespace std;
int main(){
int n, count = 0, t;
cin>>t;
while(t>0){
 count = 0;
 cin>>n;
 int arr[n];
 for(int i = 0; i < n; i++){
  cin>>arr[i];
 }
 int lspeed = arr[0];
 for(int i = 0; i < n; i++){
  if(arr[i] <= lspeed){
   lspeed = arr[i];
   count++;
  }
 } 
cout<<count<<endl;
t--;
}
 
return 0;
}
