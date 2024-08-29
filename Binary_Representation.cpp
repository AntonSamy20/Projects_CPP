#include <iostream>
using namespace std;
string Binary(int n){
    string right_binar="",binar="";
    while (n>0){
        if (n%2==0){
            binar+='0';
        }else binar+='1';
        n/=2;
    }
    for (int i=binar.size()-1; i>=0; i--){
        right_binar+=binar[i];
    }
    return right_binar;
}
int main() {
    int n; 
    cout <<"Decimal : ";
    cin>>n;
    cout <<"Binary : ";
    cout <<Binary(n);

    return 0;
}
