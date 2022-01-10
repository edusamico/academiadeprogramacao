#include <iostream>
#include <cmath>
using namespace std;

int calcMax(int length, int arr[]){
    int max = arr [0];

    for (int i = 0; i < length; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int calcMin(int length, int arr[]){
    int min = arr [0];

    for (int i = 0; i < length; i++){
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float calcMean(int length, int arr[]){
    float sum = 0;

    for (int i = 0; i < length; i++){
        sum = sum +arr[i];
    }
    return sum / length;
}

int calcMode (int length, int arr[]) {
    int mode = arr[0];
    int freq = 1;

    for (int i = 0; i < length; i++) {

        int freq2 = 0;
        for (int j = 0; j < length; j++) {
            if (arr[j] == arr[i]) {
                freq2++;
            }
        }

        if (freq2 > freq) {
            mode = arr[i];
            freq = freq2;
        }
    }
    return mode;
}

int main () { 
    int N;

    cout << "Informe o tamanho da lista" << endl;
    //example: 10
    cin >> N;
    cout << "Informe " << N << " numeros" << endl;
    /*example: 10 2 4 6 6 3 7 8 9 5
    MAX = 10
    MIN = 2
    MEDIA = 6
    MODA = 6 */
    int x[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
cout << "MAX = " << calcMax(N, x) << endl;
cout << "MIN = " << calcMin(N, x) << endl;
cout << "MEDIA = " << calcMean(N, x) << endl;
cout << "MODA = " << calcMode(N, x) << endl;

return 0;
}