#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
//first of all we will create an vector which will act as a hash table
int t;
cin>>t;
while(t > 0){
 vector<int> vec(26, 0);
bool flag = true;
string str;
cin>>str;
int x = 0;
int mid = str.length()/2;
for(int i = 0; i < mid; i++){
 x = str[i] - 'a';
 vec[x]++;
}

if(str.length()%2 !=0){
 mid = mid+1;
}

for(int i = mid; i < str.length(); i++){
 x = str[i] - 'a';
 vec[x]--;
}

for(int i = 0; i < 26; i++){
 if(vec[i] != 0){
  flag = false;
  break;
 }
}

if(flag){
 cout<<"YES"<<endl;
}
else{
 cout<<"NO"<<endl;
}

t--;
}

return 0;
}
