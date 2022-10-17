#include<iostream>
using namespace std;

int main(){
    string str = "fdydfidiilol";
    
    int freq[26];
    for(int i =0; i<26; i++){
        freq[i] = 0;
    } 
    for(int i=0; i<str.length(); i++){
        freq[str[i]-'a']++;
    }
    char ans='a';
    int maxf = 0;
    for(int i = 0; i<26; i++){
        if(maxf<freq[i]){
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;

}