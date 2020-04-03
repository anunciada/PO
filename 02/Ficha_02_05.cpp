#include <iostream>
#include <iomanip>

using namespace std;

struct id{
    string last;
    string first;
    string town;
    string country;
};

int main(){
    id id[3] = {{"Silva", "Joao", "Aveiro", "Portugal"},{"Almeida", "Maria", "Madrid", "Spain"},{"Santos", "Miguel", "Moscow", "Russia"}};

    cout << "Last name   First name   Town       Country" << endl;
    cout << "----------------------------------------------------------" << endl;
    for(int i = 0; i < 3; i++){
        cout << left << setw(12) << id[i].last << left << setw(13) << id[i].first << left << setw(11) << id[i].town << left << setw(12) << id[i].country << endl;
    }

    return 0;
}