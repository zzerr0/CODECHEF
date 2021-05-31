#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n = s.length();
        int arr[26] = {0};
        int index = 0;
        bool IsIsogram = true;
        
        for(int i = 0; i < s.size(); i++){
            index = s[i] - 'a';
            arr[index]++;
        }
        
         for(int i = 0; i < 26; i++){
             cout<<arr[i]<<" ";
         }
        
        for(int i = 0; i < 26; i++){
           if(arr[i] > 1){
            IsIsogram = false;
            break;
           }
         }  
        if(IsIsogram){
        cout<<"yes"<<endl;
        }
        else{
         cout<<"no"<<endl;
        }
        

return 0;
}
