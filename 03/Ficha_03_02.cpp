#include <iostream>
#include <iomanip>
#include <ctype.h>

using namespace std;

int count_alpha(const string &s1);
int count_lowers(const string &s1);
int count_uppers(const string &s2);
void equals_or_greater(const string &s1, const string &s2);
string tolower(const string &s1);
string replace(const string &s1);
string capitalize(const string &s1);
bool ispalindrome (const string &s1);

int main(void){
    string s1, s2;

    cout << "Introduza as strings" << endl;
    cout << "String 1: ";
    getline(cin, s1);
    cout << "String 2: ";
    getline(cin, s2);

    cout << endl << "------------------" << endl << endl;

    cout << "String 1: " << endl;

    cout << "A string 1 tem " << count_alpha(s1) << " carateres alfabeticos" << endl;
    cout << "A string 1 tem " << count_lowers(s1) << " letras minusculas" << endl;
    cout << "A string 2 tem " << count_uppers(s2) << " letras maiusculas" << endl;
    equals_or_greater(s1, s2);
    cout << "A string 1 com todas as letras em minusculas: " << tolower(s1) << endl;
    cout << "A string 1 sem espaços excessivos: " << replace(s1) << endl;
    cout << "A string 1 com a primeira letra maiuscula: " << capitalize(s1) << endl;

    if(ispalindrome(s1))
        cout << "A string 1 e um palindromo" << endl;
    else 
        cout << "A string 1 nao e um palindromo" << endl;

    return 0;
}

int count_alpha(const string &s1){
    int total = 0;
    for(int i = 0; i < s1.size(); i++){
        if(isalpha(s1.at(i)))
            total++;
    }
    return total;
}

int count_lowers(const string &s1){
    int total = 0;
    for(int i = 0; i < s1.size(); i++){
        if(islower(s1.at(i)))
            total++;
    }
    return total;
}

int count_uppers(const string &s2){
    int total = 0;
    for(int i = 0; i < s2.size(); i++){
        if(isupper(s2.at(i)))
            total++;
    }
    return total;
}

void equals_or_greater(const string &s1, const string &s2){
    if(s1 == s2)
        cout << "Ambas as strings são iguais" << endl;
    else if(s1 < s2)
        cout << "A string 1 vem antes da string 2" << endl;
    else
        cout << "A string 2 vem antes da string 1" << endl;
}

string tolower(const string &s1){
    string s;
    for(int i = 0; i < s1.size(); i++){
        s.push_back(tolower(s1.at(i)));
    }
    return s;
}

string replace(const string &s1){
    string s;
    bool space = true;

    for(int i = 0; i < s1.size(); i++){
        if(not (space and isspace(s1.at(i)))){
            space = false;
            s.push_back(s1.at(i));
        }
        if(isspace(s1.at(i)))
            space = true;
    }

    return s;
}

string capitalize(const string &s1){
    string s;
    bool space = true;

    for(int i = 0; i < s1.size(); i++){
        if(space and not isspace(s1.at(i))){
            space = false;
            s.push_back(toupper(s1.at(i)));
        }else
            s.push_back(s1.at(i));
        
        if(isspace(s1.at(i)))
            space = true;
        
    }

    return s;
}

bool ispalindrome (const string &s1){
    string s;

    for(int i = 0; i < s1.size(); i++){
        s.push_back(tolower(s1.at(i)));
    }

    for(int i = 0; i < s.size(); i++){
        if(s.at(i) != s.at(s.size() - 1 - i))
            return false;
    }

    return true;
}