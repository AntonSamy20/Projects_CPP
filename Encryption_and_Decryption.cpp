//--------------------------------------
//          Eng.Anton Samy 
//--------------------------------------
#include <iostream>
#include <string>
using namespace std;
  string original = 
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  string key = 
"PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

  int num =original.size();

string Encryption(string s){
    for (int i=0; i<s.size(); i++){
        for (int j=0; j<num; j++ ){
            if (s[i]==original[j]){
                s[i]=key[j];
                break;
            }
        }
    }
    return s;
}
string Decryption(string s){
    for (int i=0; i<s.size(); i++){
        for (int j=0; j<num; j++ ){
            if (s[i]==key[j]){
                s[i]=original[j];
                break;
            }
        }
    }
    return s;
}
int main() {
    int n;
    string s;
    cin>>n>>s;
    if (n==1){
        cout<<Encryption(s);
    }else {
        cout<<Decryption(s);
    }
    return 0;
}
