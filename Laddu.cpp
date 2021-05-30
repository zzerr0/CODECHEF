#include <iostream>
#include <cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t > 0){
 int numberOfActivity = 0, ladooPerMonth, rank, totalLadoo = 0, bonus;
 string origin;
 string activity;
 cin>>numberOfActivity;
 cin>>origin;
 if(origin == "INDIAN"){
  ladooPerMonth = 200;
 }
 else{
  ladooPerMonth = 400;
 }
 
 //entering the activities and increasing total ladoo accroding to them
 for(int i = 0; i < numberOfActivity; i++){
 cout<<"Inside for loop"<<endl;
  cin >> activity;
  if(activity == "CONTEST_WON"){
   cin>>rank;
   if(rank < 20){
    bonus = 20 - rank;
   }
   else{
    bonus = 0;
   }
  totalLadoo = totalLadoo + bonus + 300;
  }
  else
   if(activity == "TOP_CONTRIBUTOR"){
    totalLadoo = totalLadoo + 300;
   }
  else
   if(activity == "BUG_FOUND"){
    cin>>rank;
    totalLadoo = totalLadoo + rank;
   }
  else
   if(activity == "CONTEST_HOSTED"){
    totalLadoo = totalLadoo + 50;
   }
 
 }
 cout<<totalLadoo/ladooPerMonth;

t--;
}

return 0;
}
