#include <iostream>
using namespace std;

int main(){
    int firstNum = 0,secondNum = 0,i = 0,divisible,store;
    int HCFarray[] = {};
    while (firstNum < 1 || firstNum > 10000 || secondNum < 1 || secondNum > 10000){
        cout << "Input the first number: ";
        cin >> firstNum;
        cout << "Input the second number: ";
        cin >> secondNum;
    }

    int cannotHCF = 0;
    while (cannotHCF!= 1){
        for (int number = 2; number < 10; number+=0){
            if (firstNum % number == 0){
                divisible = number;
                break;
            } else {
                number += 1;
            }
        }
        if (secondNum % divisible == 0){
            HCFarray[i] = divisible;
            i += 1;
            firstNum = firstNum/divisible;
            secondNum = secondNum/divisible;
        } else {
            cannotHCF = 1;
        }
    }

    int x = sizeof(HCFarray);
    for (int p = 0; p < x; p++){
        store += HCFarray[p];
    }
    cout << store;
    return 0;
}