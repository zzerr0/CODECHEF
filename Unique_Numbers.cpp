#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool check(int i){
 int index = 0, num = i; 
 bool arr[10] = {false};
 while(num > 0){
  index = num % 10;
  if(arr[index] == true){
   return false;
  }
  arr[index] = true;
  num = num/10;
 }
 
 if(num == 0)
  return true;
  
 return true;
}

int main(){
 int i, L = 10, R = 400;
 
 vector <int> vec;
  for(int i = L; i <= R; i++){
   if(check(i) == true){
    vec.push_back(i);
   }
  }
  vector <int> :: iterator it;
  for(it = vec.begin(); it != vec.end(); it++){
   cout<<*it<<" ";
  }
return 0;        
}

 

