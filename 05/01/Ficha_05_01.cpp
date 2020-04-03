#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main(void){
    string fa, fb;

    cout << "Qual e o nome do ficheiro a ser copiado: ";
    cin >> fa;
    cout << "Qual e o nome do novo ficheiro: ";
    cin >> fb;

    ifstream ifs(fa);

    vector<string> s_all;

    while(ifs.good()){
        string s;
        getline(ifs,s);
        s_all.push_back(s);
    }

    ifs.close();

    ofstream ofs(fb);

    for(auto x: s_all){
        ofs << x << endl;
    }

    ofs.close();

    return 0;
}