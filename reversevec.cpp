#include <iostream>
#include <vector>
using namespace std;
int main(){
 int n=0;
 cin>>n;
 vector<int> revec(n);
 vector<int>::iterator it;
 for(it=revec.begin(); it<revec.end(); it++){
  cin>>*it;
 }
 
 for(it=revec.end()-1; it>=revec.begin(); *it--){
  cout<<*it;
 }
 cout<<endl;

return 0;
}
