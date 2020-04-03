#include <iostream>
#include <iomanip>

using namespace std;

double power(double n, int p);
double power(double n);

int main(void){
    int n, p;

    cout << "Introduza um base" << endl;
    cin >> n;
    cout << "Introduza um expoente" << endl;
    cin >> p;

    cout << endl << "--------" << endl;

    cout << n << " ^ " << p << " = " << power(n, p) << endl;
    cout << n << " ^ 2 = " << power(n) << endl;


    return 0;
}

double power(double n, int p){
    int res = 1;
    for(int i = 0; i < p; i++)
        res *= n;
    return res;
}

double power(double n){
    return n * n;
}