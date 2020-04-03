#include <iostream>
#include <iomanip>
#include <vector>
#include <set>

using namespace std;

int main(void){
    vector<set<string>> teams;
    string yn, name;
    int count = 0;

    do{
        cout << "Do you want to insert a team? [y/n] ";
        cin >> yn;
        if(yn == "y"){
            set<string> s_team;
            for(int i = 1; i <= 5; i++){                    //Insert the players name
                cout << i << "º element name: ";
                cin >> name;
                s_team.insert(name);
            }
            teams.push_back(s_team);
            count++;
        }
        cout << endl << "-----------" << endl;
    }while(yn == "y");


    return 0;
}