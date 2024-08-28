#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number,divisible;
    bool flag=1;
    cout <<"Enter number to check :"<<endl;
    cin>>number;
    if (number<=1){
        return 0;
    }
    for (int i=2; i<=sqrt(number); i++){
        if (number%i==0){
            flag=0;
            divisible=i;
            break;
        }
    }
    cout <<endl;
    if (flag){
        cout << number <<" is a prime number";
    }else {
        cout << number <<" is not a prime number, Because it is divisable by "<<divisible;
    }
    return 0;
}

