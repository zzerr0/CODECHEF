#include <bits/stdc++.h>
using namespace std;
 
string isTriangleExists(int a, int b, int c)
{
    // Checking if the sum of three
    // angles is 180 and none of
    // the angles is zero
    if(a != 0 && b != 0 && c != 0 && (a + b + c)== 180)
        // Checking if sum of any two angles
        // is greater than equal to the third one
        if((a + b)>= c || (b + c)>= a || (a + c)>= b)
            return "YES";
        else
            return "NO";
    else
        return "NO";
}
// Driver Code
int main()
{
int a=0, b=0, c = 0;
cin>>a>>b>>c;
cout << isTriangleExists(a, b, c) << endl;
return 0;
}
// This code is contributed by mits
