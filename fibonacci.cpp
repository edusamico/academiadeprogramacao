#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "indique o numero de elementos para a sequencia de fibonacci: " << endl;
    cin >> N;

    cout << "Sequencia com "<< N<< " numeros: " << "1, 1";

    int pre = 1;
    int pre_pre = 1;

    for (int i = 0; i < N - 2; i++) {
        int current = pre + pre_pre;
        cout << ", " << current;

        pre_pre = pre;
        pre = current;

    }
return 0;
}