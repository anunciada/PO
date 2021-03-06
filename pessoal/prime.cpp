#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <thread>

bool isPrime(unsigned long long n);
void counter(int n, std::vector<unsigned long long> *primes);
void merge(std::vector<unsigned long long> *v, const std::vector<unsigned long long> *w);

unsigned long long max_l = 1000000; //std::numeric_limits<unsigned long long>::max(); 

int main(){
    unsigned long long i;
    std::string file = "primes.txt";

    //-----------------------------------------
    std::vector<unsigned long long> primes;
    primes.push_back(2);                                        //Primeiro primo
    primes.push_back(5);

    std::vector<unsigned long long> primes1;
    std::vector<unsigned long long> primes3;
    std::vector<unsigned long long> primes7;
    std::vector<unsigned long long> primes9;
    std::vector<unsigned long long> primes11;
    std::vector<unsigned long long> primes13;
    std::vector<unsigned long long> primes17;
    std::vector<unsigned long long> primes19;

    std::thread t1(counter, 1, &primes1);
    std::thread t3(counter, 3, &primes3);
    std::thread t7(counter, 7, &primes7);
    std::thread t9(counter, 9, &primes9);
    std::thread t11(counter, 11, &primes11);
    std::thread t13(counter, 13, &primes13);
    std::thread t17(counter, 17, &primes17);
    std::thread t19(counter, 19, &primes19);

    t1.join();
    t3.join();
    t7.join();
    t9.join();
    t11.join();
    t13.join();
    t17.join();
    t19.join();

    merge(&primes, &primes1);
    merge(&primes, &primes3);
    merge(&primes, &primes7);
    merge(&primes, &primes9);
    merge(&primes, &primes11);
    merge(&primes, &primes13);
    merge(&primes, &primes17);
    merge(&primes, &primes19);

    std::cout << "Primes 1: " << primes1.size() << std::endl;
    std::cout << "Primes 3: " << primes3.size() << std::endl;
    std::cout << "Primes 7: " << primes7.size() << std::endl;
    std::cout << "Primes 9: " << primes9.size() << std::endl;
    std::cout << "Primes 11: " << primes11.size() << std::endl;
    std::cout << "Primes 13: " << primes13.size() << std::endl;
    std::cout << "Primes 17: " << primes17.size() << std::endl;
    std::cout << "Primes 19: " << primes19.size() << std::endl;
    std::cout << std::endl << "Primes : " << primes.size() << std::endl;

    //-----------------------------------------

    std::cout << std::endl << "Transfering number to file" << std::endl;

    std::ofstream ofs(file);                                    //Envia os números para um ficheiro
    for(long i = 0; i < primes.size(); i++){
        ofs << primes.at(i) << std::endl;
    }

    //-----------------------------------------

    std::cout << "Done" << std::endl;
    return 0;
}

bool isPrime(unsigned long long n){
    for(unsigned long long i = 2; i <= n / 2; ++i){
      if(n % i == 0)
          return false;
   }
   return true;
}

void counter(int n,std::vector<unsigned long long> *primes){
    unsigned long long i;

    for(i = n; i <= max_l; i = i + 20){                       
        if(isPrime(i)){
            (*primes).push_back(i);
            //std::cout << i << std::endl;
        }
    }
}

void merge(std::vector<unsigned long long> *v, const std::vector<unsigned long long> *w){
    for(long i = 0; i < (*w).size(); ++i){
        (*v).push_back((*w)[i]);
    }
}