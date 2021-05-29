#include <iostream>
using namespace std;
int main(){
 int t, g, n, i, q, Not = 0, Noh = 0; 
 cin>>t;
 while(t > 0){
  cin>>g;
   while(g > 0){
    cin>>i>>n>>q;
    if( n % 2 != 0){
       if( n % 2 != 0 && i == 1 && q == 1){
       Not = (n/2) + 1;
       Noh = n - Not;
       cout<<Noh<<endl;
       }
    else
     if(n % 2 != 0 && i == 1 && q == 2){
        Not = (n/2) + 1;
        cout<<Not<<endl;
        } 
    
    if( n % 2 != 0 && i == 2 && q == 1){
       Noh = (n/2) + 1;
       Not = n - Noh;
       cout<<Noh<<endl;
       }
    else
     if(n % 2 != 0 && i == 2 && q == 2){
        Noh = (n/2) + 1;
        Not = n - Noh;
        cout<<Not<<endl;
        } 
    }
    else
     if( n % 2 == 0 && q == 1){
      Noh = n/2;
      cout<<Noh<<endl;
     }
    else
     if( n % 2 == 0 && q == 2){
      Not = n/2;
      cout<<Not<<endl;
     }


   g--;
   }
  t--;
}
return 0;
}
