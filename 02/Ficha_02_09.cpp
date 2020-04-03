#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    char operador, dummychar;

    cout << "Introduza a primeira fração" << endl;
    cin >> a >> dummychar >> b;
    cout << "Introduza o operador" << endl;
    cin >> operador;
    cout <<"Introduza a segunda fração" << endl;
    cin >> c >> dummychar >> d;

    switch((int) operador){
        case 43:
            cout << "Resultado:" << endl << a * d + b * c << endl << "---" << endl << b * d << endl;
            break;
        case 45:
            cout << "Resultado:" << endl << a * d - b * c << endl << "---" << endl << b * d << endl;
            break;
        case 42:
            cout << "Resultado:" << endl <<  (a * c) << endl << "---" << endl << (b * d) << endl;
            break;
        case 47:
            cout << "Resultado:" << endl << endl << (a * d) << endl << "---" << endl << (b * c) << endl;
    }

    return 0;
}