#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>

using namespace std;

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
  if(pos >= wfreq.size())
    return "";
  
  return wfreq[pos];
}

int main(void){
    string a = "O meu tio chama-se Bomba";

    for(int i = 0; i < 10; i++){
        cout << word_pos(a, i) << endl;
    }

    return 0;
}