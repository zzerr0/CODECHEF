#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,tot=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        tot+=num;
	    }
	    if(tot%2==0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
