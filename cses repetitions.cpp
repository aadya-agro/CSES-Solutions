#include<bits/stdc++.h>
using namespace std;
int main(){
       string s;
       cin >> s;
       int ans =1;
       int curr =1;
       for(int i =0; i<s.length(); i++){
        if(s[i] == s[i-1]){
            curr++;
        }
        else{
            curr =1;
        }ans = max(ans,curr);

       }
       cout << ans << endl;
       return 0;
}
    
