#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reversestring(string s){
    reverse(s.begin(), s.end());
    string ans = "";
    int n = s.size();
    for(int i = 0; i<n; i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i++];
        }
        if(word.size() > 0){
            reverse(word.begin(), word.end());
            ans+= ' '+ word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s = "sky is blue";
    string rev_s = reversestring(s);
    cout<<rev_s;
    return 0;

}