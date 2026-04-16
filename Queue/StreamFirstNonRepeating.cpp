// Stream First Non-repeating
#include<iostream>
#include<deque>
#include<string>
#include<unordered_map>
using namespace std;

string FirstNonRepeating(string &s){
    deque <char> dq;
    string result;
    unordered_map<char,int>freq;
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        dq.push_back(ch);
        // initial state maintain 
        freq[ch]++;
        // front ke element ko check karte raho jab tak aisa element  na mile jiske frequency 1 ho 
        // agar deque empty hojaye check karte karte toh # store kardo 
        while(!dq.empty()){
            char frontElement=dq.front();
            if(freq[frontElement]==1){
                result.push_back(frontElement);
                break;
            }
            else{
                dq.pop_front();
            }
        }
        if(dq.empty()){
            result.push_back('#');
        }
    }
    return result;
};
int main(){
    string s="aabc";
    cout<<FirstNonRepeating(s)<<endl;
    return 0;
}