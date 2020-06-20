#include <iostream>
using namespace std;

int main() {
	int n,a=0,k,l,b;
	int A[8]={0,0,0,0,0,0,0,0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>b;
	    for(int m=0;m<b;m++)
	    {
	        cin>>k>>l;
            if(k<9)
            {
                if(l>A[k-1])
                {
                    A[k-1]=l;
                }
            }
	    }
	    for(int j=0;j<8;j++)
        {
            a+=A[j];
        }
	    cout<<a<<endl;
        a=0;
        for(int x=0;x<8;x++)
        {
            A[x]=0;
        }
	}
	return 0;
}
