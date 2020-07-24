#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
// cout<<"Enter String "<<endl;
 string s;
 getline(cin, s);
 
 int eat = 0, snake = 0, mongoose = 0;
 for(int i=0; i<s.length(); i++)
 {
   if(s[i] == 'm' && s[i+1] == 's' || s[i-1] == 's' && s[i] == 'm')
   {
     eat++;    
   } 
   
   if( s[i] == 's')
   snake++;
 }
 
 mongoose = s.length() - snake;
 //cout<<"Mongoose is "<<mongoose<<endl;
 //cout<<"Snake is "<<snake<<endl;

 snake = snake - eat;
 //cout<<"Snake left is "<<snake<<endl;
 
// cout<<"Eat is "<<eat<<endl;
 
 
 if(snake > mongoose )
 cout<<"snakes"<<endl;
 else
 if(mongoose > snake)
 cout<<"mongooses"<<endl;
 else
 cout<<"tie"<<endl;
 t--;
 }
 return 0; 
 
}
