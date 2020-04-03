#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int input;
    cout << "Enter the number of lines: ";
    cin >> input;
    cout << endl;

    for(int i = 0; i < input; i++){
        cout << setw(input - i) << "x";
        for(int j = 0; j <= 2 * i - 1; j++)
            cout << "x";
        cout << endl;
    }

    return 0;
}