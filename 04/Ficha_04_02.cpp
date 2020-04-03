#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void){
    vector<int> list;
    int a, sum = 0;

    do{
        cout << "Introduza um valor: ";
        cin >> a;
        list.push_back(a);
    }while(list.back() != 0);

    list.pop_back();

    for(int i = 0; i < list.size(); i++)
        sum += list.at(i);

    sum /= list.size();

    vector<int> list1;

    list.swap(list1);

    while(!list1.empty()){
        cout << list1.back() << " ";
        list1.pop_back();
    }

    cout << endl << "A media e: " << sum << endl;

    return 0;
}