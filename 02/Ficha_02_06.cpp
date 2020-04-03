#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int input;

    cout << "Enter a number: ";
    cin >> input;

    for(int i = 0; i < 20; i++){
        cout << endl;
        for(int j = 1; j < 11; j++)
            cout << setw(5) << input * (i * 10 + j);
    }
    cout << endl;

    return 0;
}