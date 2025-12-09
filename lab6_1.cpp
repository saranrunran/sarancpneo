#include<iostream>
using namespace std;

int main(){

    int num, even=0, odd=0;

    while (1) {
        if (num != 0) {
            cout << "Enter an integer: ";
            cin >> num;
            if (num%2 == 0) {
                even += 1;
            } else {
                odd += 1;
            }
        } else {
            break;
        }
    }
    
    cout << "#Even numbers = " << even-1;
    cout << "\n#Odd numbers = " << odd;
    
    return 0;
}
