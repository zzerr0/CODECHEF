#include<iostream>
#include<algorithm>
using namespace std;

int find_song(int *arr, int low, int high, int uncle_song)
{
 cout<<"Find_Song"<<endl;
 int mid = low + (high - low) / 2;  
 
 if(arr[mid] == uncle_song )
 {
   cout<<"Song Found at Position ";
   cout<<mid+1;
 }
 
 else
  if(arr[mid] > uncle_song)
  find_song(arr, low, mid-1, uncle_song);
  
 else
  if(arr[mid] < uncle_song )
  find_song(arr, mid+1, high, uncle_song);
}

int main()
{
  cout<<"Enter Total no. of songs "<<endl;
  int nofsong;
  cin>>nofsong;
  
  cout<<"Enter the lengths "<<endl;
  int songlength[nofsong];
  for(int i=0; i<nofsong; i++)
  {
    cin>>songlength[i];  
  }
  
 
  int low = 0, high = nofsong-1;
 
  cout<<"Enter uncle Johny's song position "<<endl;
  int songpos;
  cin>>songpos;
  int uncle_song ;
  uncle_song = songlength[songpos - 1];
  
  sort(songlength, songlength + nofsong);
  
  
  
  find_song(songlength, low, high, uncle_song);
  
  return 0;
}
