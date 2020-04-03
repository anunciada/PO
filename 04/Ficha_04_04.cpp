#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <iterator>

using namespace std;

map<string, int> count_ocurrances(const string &s);
string word_pos(const string &s, int pos);

int main(void){
    string paragraph;
    vector<map<string,int>> w_oc_all;
    map<string,int> temp;

    cout << "Insira o texto, para terminar escrever END" << endl;
    cout << "Para acabar o paragrafo insira #" << endl << endl;

    do{
        getline(cin, paragraph, '#');
        cout << endl;
        temp = count_ocurrances(paragraph);
        w_oc_all.push_back(temp);
        
    }while(paragraph != "\nEND");
    
    for(int i = 0; i < w_oc_all.size() - 1; i++){
        cout << endl << "Paragrafo " << i << endl;
        for(auto it = w_oc_all[i].begin(); it != w_oc_all[i].end(); it++){
            cout << '"' << it -> first << '"' << " tem " << it -> second << " ocorrencias" << endl;
        }
    }

    return 0;
}

map<string, int> count_ocurrances(const string &s){
    map<string,int> w_oc;
    int count = 0;
    string word;

    do{
        word = word_pos(s, count);
        if(word != "")
            w_oc[word]++;
        if(word == "")
            break;
        count++;
    }while(true);

    return w_oc;
}

string word_pos(const string &str, int pos){
  
    vector<string> wfreq;

    string separators = " \t\n"; //Add any other(s) separator(s)
  
    size_t wend = 0; // End of the last word found
    while (true) {
        //~ Find the begining of the next word (after the end of the last one)
        size_t wbegin = str.find_first_not_of(separators, wend);
        
        if (wbegin == string::npos){
            break; // There is no more words
        }
        
        //~ Find the end of the word
        wend = str.find_first_of(separators, wbegin);
        
        //~ Obtain word
        string word = str.substr(wbegin, wend-wbegin);
        
        //~ Update word counts
        wfreq.push_back(word);  // key-value initialization is assured by operator []
    }
    if(pos >= wfreq.size()){
        return "";
    }

  return wfreq[pos];
}