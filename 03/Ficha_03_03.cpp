#include <iostream>
#include <iomanip>

using namespace std;

int count_words(const string &s);
int count_ocurrances(const string &s, const string &key);

int main(void){
    string key, paragraph;
    int count = 0;
    int c_w[20], c_o[20];

    cout << "Insira uma palavra: ";
    cin >> key;

    cout << "Insira o texto, para terminar escrever END" << endl;
    cout << "Para acabar o paragrafo insira $" << endl << endl;

    do{
        getline(cin, paragraph, '$');
        cout << endl;

        c_w[count] = count_words(paragraph);
        c_o[count] = count_ocurrances(paragraph, key);

        count++;
    }while(paragraph != "\nEND");
    
    for(int i = 0; i < count - 1; i++){
        cout << i << "º paragrafo tem " << c_w[i] + 1 << " palavras e " << c_o[i] << " vezes a palavra " << key << endl;
    }

    return 0;
}

int count_words(const string &s){
    bool space = true;
    int words = 0;

    for(int i = 0; i < s.size(); i++){
        if(not space and isspace(s.at(i))){
            space = true;
            words++;
        }else if (s.at(i) != ' '){
            space = false;
        } 
    }

    return words;
}

int count_ocurrances(const string &s, const string &key){
    int words = 0, pos = 0;

    do{
        pos = s.find(key, pos + 1);
        if(pos != string::npos){
            words++;
        }
    }while(pos != string::npos);

    return words;
}