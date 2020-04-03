#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int choice;
    float input;
    
    cout << "1. Fahrenheit -> Celcius" << endl;
    cout << "2. Celcius -> Fahrenheit" << endl;
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Input the value:";
            cin >> input;
            cout << endl << "Result: " << (input - 32) / 1.8 << "ºC" << endl;
            break;

        case 2:
            cout << "Input the value:";
            cin >> input;
            cout << endl << "Result: " << (input * 1.8) + 32 << "ºF" << endl;
            break;
    }

    return 0;
}