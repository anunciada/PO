#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

map<string, int> count_ocurrances(const string &s, map<string, int> w_all);
string word_pos(const string &s, int pos);

int main(void){
    string paragraph, file_in, file_out;
    map<string,int> w_all;
    int count = 0;

    cout << "Insira o nome do ficheiro de entrada : ";
    cin >> file_in;
    cout << "Insira o nome do ficheiro de saida : ";
    cin >> file_out;

    ifstream ifs(file_in); 

    do{
        getline(ifs, paragraph, '\n');
        w_all = count_ocurrances(paragraph, w_all);
        count++;
        cout << "leitura da linha " << count << endl;
    }while(ifs.good());

    ifs.close();

    count = 0;
    
    ofstream ofs(file_out);

    for(auto it = w_all.begin(); it != w_all.end(); it++){
        ofs << '"' << it -> first << '"' << " tem " << it -> second << " ocorrencias" << endl;
        count++;
        cout << "Escrita " << count << endl;
    }

    ofs.close();

    return 0;
}

map<string, int> count_ocurrances(const string &s, map<string, int> w_all){
    int count = 0;
    string word;

    do{
        word = word_pos(s, count);
        if(word != "")
            w_all[word]++;
        if(word == "")
            break;
        count++;
    }while(true);

    return w_all;
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