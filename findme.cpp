#include <iostream>
#include <vector>
using namespace std;
int main(){
 int n=0, k=0;
 cin>>n>>k;
 vector<int> arr(n);
 vector<int>::iterator it;
 for(it=arr.begin(); it<arr.end(); it++){
  cin>>*it;
 }
 for(it=arr.begin(); it<arr.end(); it++){
  if(*it == k){
   cout<<1<<endl;
   return 1;
  }
 }
 cout<<-1<<endl;

return 0;
}
