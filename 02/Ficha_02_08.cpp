#include <iostream>

using namespace std;

int main(){
    int input, calc;

    do{
        cout << "Insert a number: ";
        cin >> input;
        calc = input;
        for(int i = input - 1; i > 0; i--)
            calc *= i;
        cout << "Result: " << calc << endl;
    }while(input != 0);

    return 0;
}