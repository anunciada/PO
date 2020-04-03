#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int ano[] = {1990, 1991, 1992, 1993}, num[] = {135, 7290, 11300, 16200};

    for(int i = 0; i < 4; i++)
        cout << setw(10) << ano[i] << setw(10) << num[i] << endl;

    return 0;
}