#include <iostream>
using namespace std;

// um número é perfeito quando a soma dos seus divisores = o próprio número.

bool perfect (int N) {
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum = sum + i;
            cout <<"dentre os divisores perfeitos de " << N << " sem ser ele mesmo, temos = " << i <<endl;
            cout << "o numero " << i << " entrou para a soma. contabilizando: " << sum << endl << endl;
        }
    }
    return (sum == N);
}

void printSolution (int N) {
    if (perfect(N)){
        cout << N << " = numero PERFEITO" << endl << endl;
    }
    else {
        cout << N << " = numero NAO perfeito" << endl << endl;
    }
}

int main () {
    int X, Y, Z;

    cout << "Informe o valor de 3 numeros positivos para a gente dizer se eles sao perfeitos: " << endl;
    cin >> X >> Y >> Z;

    printSolution(X);
    printSolution(Y);
    printSolution(Z);

    return 0;
}