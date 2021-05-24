#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    int n;
    cin>>n;
    /* Iterate through rows */
    for(i=1; i<=n; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=1; j<=n; j++)
        {
          if(j>=n+1-i && j<=n){
           cout<<"*";
          }
          else{
           cout<<" ";
          }
        }
        cout<<endl;
    }   

    return 0;
}
