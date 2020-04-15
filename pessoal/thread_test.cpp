#include <iostream>
#include <thread>
#include <vector>

using namespace std;

long max_l = 1000;

/*bool isPrime( long n){
    for( long i = 2; i <= n / 2; ++i){
        if(n % i == 0)
           return false;
    }
   return true;
}*/

void counter(int n,long *primes){
    long i;
    for(i = n; i <= max_l; i = i + 10){                            //Salta em 2 para evitar múltiplos de 2
        if(i < max_l){
            *primes = i;
            cout << i << endl;
        }
    }
}

int main()
{
    long primes;
    thread t(counter, 3, &primes);
    t.join();
    return 0;
}