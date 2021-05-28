#include <iostream>
#include <vector>
using namespace std;
int main(){
long int n, bud = 0, count = 0;
long max = 0;
cin>>n;
vector<int> arr(n);
for(int i = 0; i < n; i++){
 cin>>arr[i];
}

for(int i = 0; i < n; i++){
 for(int j = 0; j < n; j++){
  if(arr[j] >= arr[i]){
   count++;
  }
 }
 bud = arr[i]*count;
 if(bud > max){
  max = bud;
 }
 count = 0;
}

cout<<max<<endl;

return 0;
}
