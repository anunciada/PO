#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c, d;

    cout << " a     c     a*d + b*c " << endl;
    cout << "--- + --- = -----------" << endl;
    cout << " b     d        b*d    " << endl;

    cout << endl << "Introduza a, b, c, d" << endl;
    cin >> a >> b >> c >> d ;

    cout << endl << " " << a << "     " << c << "     " << a * d + b * c << endl;
    cout << "--- + --- = -----" << endl;
    cout << " " << b << "     " << d << "     " << b * d << endl;



    return 0;
}