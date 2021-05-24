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
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
           cout<<"*";
        }

        /* Move to next line */
        cout<<endl;
    }
    
    return 0;
}
