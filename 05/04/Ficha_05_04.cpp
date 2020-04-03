#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <chrono>
#include "stocks.hpp"

using namespace std;
using namespace std::chrono;

string mostTraded(map<string, vector<stocks>> m_stocks);
string highestDiff(map<string, vector<stocks>> m_stocks);
map<string, double> stkGrowth(map<string, vector<stocks>> m_stocks);
string highestGrowth(map<string, double> m_growth);
map<string, stocks> highestValue(map<string, vector<stocks>> m_stocks);

int main(void){
    string file = "stocks.csv", s_entry;
    map<string, vector<stocks>> v_s;

    high_resolution_clock::time_point t1 = high_resolution_clock::now();        //start clock

    ifstream ifs(file);

    while(ifs.good()){
        getline(ifs, s_entry, '\n');
        stocks temp(s_entry);
        v_s[temp.Name].push_back(temp);
    }

    ifs.close();

    cout << "The most traded companie: " << mostTraded(v_s) << endl;
    cout << "The companie with the highest daily appreciation: " << highestDiff(v_s) << endl;
    cout << "The companie with the highest valuation: " << highestGrowth(stkGrowth(v_s)) << endl;
    cout << "----------------" << endl;
    cout << "Highest value of each companie:" << endl;

    map<string, stocks> h_value = highestValue(v_s);

    for(auto [a, b] : h_value){
        cout << a << "-- Max value: " << b.MaxPrice << endl;
    }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();        //end clock
    auto duration = duration_cast<milliseconds>( t2 - t1 ).count();
    cout << "Code execution time for vector: " << duration << " milliseconds" << endl;


    return 0;
}


string mostTraded(map<string, vector<stocks>> m_stocks){
    int maxVolume =  - __INT_MAX__;
    map<string, int> t_volume;
    string maxVolComp;

    for(auto [a, b] : m_stocks){                    //Add all volumes and insert in a map ex. {NTFL, 100000}        
        for(auto c : b){
            t_volume[c.Name] += c.Volume;
        }
    }

    for(auto [a, b] : t_volume){
        if(b > maxVolume){
            maxVolume = b;
            maxVolComp = a;
        }
    }

    return maxVolComp;
}

string highestDiff(map<string, vector<stocks>> m_stocks){
    double high_dif = __DBL_MIN__;
    string comp;

    for(auto [a, b] : m_stocks){                   
        for(auto c : b){
            if(c.diff() > high_dif)
            comp = c.Name;
        }
    }

    return comp;
}

map<string, double> stkGrowth(map<string, vector<stocks>> m_stocks){
    map<string, double> m_growth;
    for(auto [a, b] : m_stocks){
        m_growth[a] = (b.front().ClosingPrice - b.back().OpeningPrice) / b.back().OpeningPrice;
    }
    return m_growth;
}

string highestGrowth(map<string, double> m_growth){
    double max = __DBL_MIN__;
    string maxComp;

    for(auto [a, b] : m_growth){
        if(b > max){
            max = b;
            maxComp = a;
        }
    }

    return maxComp;
}

map<string, stocks> highestValue(map<string, vector<stocks>> m_stocks){
    stocks comp;
    map<string, stocks> h_value;

    for(auto [a, b] : m_stocks){  
        double high_val = __DBL_MIN__;                 
        for(auto c : b){
            if(c.MaxPrice > high_val)
                comp = c;
        }
        h_value[comp.Name] = comp;
    }

    return h_value;
}