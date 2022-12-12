#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim=0;
    cin >> dim;
    float insieme[dim];
    for (int i=0; i<dim; i++){
        cin >> insieme[i];
    }
    cout << piu(insieme,dim) << endl;
    return 0;
}
