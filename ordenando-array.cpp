#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int N;
    cout << "Informe o tamanho da lista:" << endl;
    // pode ser 10
    cin >> N;
    cout << "Informe " << N << " numeros:" << endl;
    // 10 9 8 6 7 5 4 2 3 1
    int x[N];
    for (int i = 0; i < N; i = i + 1) {
        cin >> x[i];
    }
    for (int i = 0; i < N; i = i + 1) {
        int new_min_position = i;
        for (int j = i + 1; j < N; j = j + 1) {
            if (x[j] < x[new_min_position]) {
                new_min_position = j;
            }
        }
        int temp = x[i];
            x[i] = x[new_min_position];
            x[new_min_position] = temp;
    }

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << x[i];
    }
    cout << endl;

    return 0;
}