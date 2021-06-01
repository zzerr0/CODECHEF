#include <iostream>
#include <sstream>
using namespace std;
int main(){
        int j;
        cout<<"enter j"<<endl;
        cin>>j;
        bool isuniq = true;
        stringstream ss;
        bool arr[10] = {false};
        ss<<j;
        string s;
        ss>>s;
        int mid = s.length()/2;
        int index = 0;
        for(int i = 0; i < mid; i++){
            index = s[i] - '0';
            arr[index] = true;
            cout<<arr[index]<<" ";
        }
        cout<<endl;
       // if(s.length() % 2 != 0){
       //     mid = mid + 1;
       // }
        
        for(int i = mid; i < s.length(); i++){
            index = s[i] - '0';
            cout<<arr[index]<<" ";
            if(arr[index] == true){
                isuniq = false;
            }
            else{
                arr[index] = true;
            }
        }
        if(isuniq){
          return true;
        }
        else{
         return false;
        }
    }
 

