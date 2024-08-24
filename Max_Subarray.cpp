#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    int n,t;
    int mn = INT_MIN;
    cin>>t;
    while (t--){
         cin>>n;
         int a[n];
         for(int i=0; i<n; i++){
            cin>>a[i];
         }
     for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           for(int k=i; k<=j; k++){
              if (mn<a[k]){
                  mn=a[k];
              }
           }
           cout <<mn<<" ";
            mn = INT_MIN;
        }
     }
     cout <<endl;
    }
    return 0;
}
