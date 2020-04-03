#include <iostream>
#include <chrono>
#include <vector>
#include <set>
#include <map>

using namespace std;
using namespace std::chrono;

int main() {
    const int LEN = 100;

    // Test of vectors
    vector<int> v1;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for(size_t i ; i < LEN ; i++)
        v1.push_back(i);

    int sum = 0;
    for(size_t i ; i < LEN ; i++)
        sum += v1[i];

    cout << "Average value of the vector: " <<  (static_cast<double>(sum) / v1.size()) << endl;
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout << "Code execution time for vector: " << duration << " microseconds\n";

    // Test of sets
    set<int> s1;
    t1 = high_resolution_clock::now();
    for(size_t i ; i < LEN ; i++)
        s1.insert(i * 10);

    sum = 0;
    for(auto i : s1)
        sum += i;

    cout << "Average value of the set: " <<  (static_cast<double>(sum) / v1.size()) << endl;
    t2 = high_resolution_clock::now();
    duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout << "Code execution time for set: " << duration << " microseconds\n";

    // Test of maps
    cout << "Dictionary" << endl;
    map<string, double> m1;
    for(size_t i = 0 ; i < 5 ; i++) {
        string key = "key" + to_string(i);
        m1[key] = 5.5 * i;
    }

    // after C++11
    for(auto i : m1)
        cout << "C++11 - key: " << i.first << " - " << i.second << endl;

    // after C++17
    for(auto [key, val] : m1)
        cout << "C++17 - key: " << key << " value: " << val << endl;

    return 0;
}