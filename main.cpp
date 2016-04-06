#include <iostream>
#include "snakeMatrix.h"
using namespace std;

int main() {
    cout << "Please input n:" << endl;
    int n = 0;
    cin>>n;
    generateMatrix(n);
    return 0;
}