/*
Rearrange the array with alternate high and low
elements such that left and right element should be small
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  cout<<"Enter number or elements "<<endl;
  int n;
  cin>>n;
  int arr[n];
  
  cout<<"Enter The elements"<<endl;
  for(int i = 0; i < n ; i++)
  cin>>arr[i];
  
  sort(arr, arr + n);
  int temp = 0;
  for(int i=2 ; i<n; i = i+2)
  {
    temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;
  }
  
  for(int i = 0; i < n ; i++)
  cout<<arr[i];
  
}
