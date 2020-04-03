#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

double sum(vector<double> v1);      //Somatorio
double avg(vector<double> v1);      //Media
double sde(vector<double> v1);      //Desvio padrao
double max(vector<double> v1);      //Valor maximo
double min(vector<double> v1);      //Valor minimo


int main(void){
    string file;
    double n_sum, n_avg, n_sde, n_max, n_min;

    cout << "Indique o nome do ficheiro: ";     //Le o nome do ficheiro
    cin >> file;

    ifstream ifs(file);                         //Cria uma stream para ler os valores do file

    vector<double> vet;                         //Vector onde serao guardados os valores

    while(ifs.good()){                          //Copia os valores para o vector
        double s;
        ifs >> s;
        vet.push_back(s);
    }  

    ifs.close();

    n_sum = sum(vet);                           //Calcula os varios valores
    n_avg = avg(vet);                           //
    n_sde = sde(vet);                           //
    n_max = max(vet);                           //
    n_min = min(vet);                           //

    cout << "-----------------" << endl;
    cout << "O valor do somatorio e     : " << n_sum << endl;
    cout << "O valor da media e         : " << n_avg << endl;
    cout << "O valor do desvio padrao e : " << n_sde << endl;
    cout << "O valor maximo e           : " << n_max << endl;
    cout << "O valor minimo e           : " << n_min << endl;

    return 0;
}

double sum(vector<double> v1){
    double a = 0;
    for(double x : v1)
        a += x;
    return a;
}

double avg(vector<double> v1){
    double a = 0;
    for(double x : v1)
        a += x;
    a /= v1.size();
    return a;
}

double sde(vector<double> v1){  
    double avg = 0, ste = 0;

    for(double x : v1)          //Calcula a media
        avg += x;
    avg /= v1.size();

    for(double x : v1)          //Faz a parte do somatorio 
        ste += pow(x - avg, 2);


    ste /= v1.size();
    ste = sqrt(ste);

    return ste;
}

double max(vector<double> v1){
    double a = __DBL_MIN__;

    for(double x : v1){
        if(x > a)
            a = x;
    }

    return a;
}

double min(vector<double> v1){
    double a = __DBL_MAX__;

    for(double x : v1){
        if(x < a)
            a = x;
    }

    return a;
}