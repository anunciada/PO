#include <iostream>
#include <iomanip>

using namespace std;

int maxint(int *a, int dim);

int main(void){
    int dim, max;

    cout << "Introduza o número de elementos: ";
    cin >> dim;

    int *arr = new int[dim];

    for(int i = 0; i < dim; i++){
        cout << "Introduza o " << i + 1 << "º valor: ";
        cin >> arr[i];
    }

    max = maxint(arr, dim);

    cout << "O maior inteiro é " << max << endl;

    return 0;
}

int maxint(int *a, int dim){
    int max = a[0];
    for(int i = 1; i < dim; i++){
        if(a[i] > max)
            max = a[i];
    }
    return max;
}