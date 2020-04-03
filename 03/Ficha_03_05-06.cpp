#include <iostream>
#include <iomanip>

using namespace std;

template <class aType>
aType power(aType n, aType p){
    aType res = 1;
    for(int i = 0; i < p; i++)
        res *= n;
    return res;
}

template <class bType>
bType power(bType n){
    return n * n;
}

int main(void){
    int n_i = 2, p_i = 8;
    char n_c = '2', p_c = '8';
    long n_l = 2, p_l = 8;
    short n_s = 2, p_s = 8;
    float n_f = 2, p_f = 8;

    cout << n_i << " ^ " << p_i << " = " << power(n_i, p_i) << endl;
    cout << n_i << " ^ 2 = " << power(n_i) << " (int)" <<endl;

    cout << n_c << " ^ " << p_c << " = " << power(n_c, p_c) << endl;
    cout << n_c << " ^ 2 = " << power(n_c) << " (char)" <<endl;

    cout << n_l << " ^ " << p_l << " = " << power(n_l, p_l) << endl;
    cout << n_l << " ^ 2 = " << power(n_l) << " (long)" <<endl;

    cout << n_s << " ^ " << p_s << " = " << power(n_s, p_s) << endl;
    cout << n_s << " ^ 2 = " << power(n_s) << " (short)" <<endl;

    cout << n_f << " ^ " << p_f << " = " << power(n_f, p_f) << endl;
    cout << n_f << " ^ 2 = " << power(n_f) << " (float)" <<endl;


    return 0;
}