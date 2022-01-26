#include <iostream>
using namespace std;

int fat (int n) {
    if (n==0) {
        return 1;
    } else {
        return n * fat (n-1);
    }
}

int mult(int a, int b) {
    if (b < 0) {
        return -mult (a, - b);
    } else if (b == 0) {
        return 0;
    } else {
        return a + mult (a, b - 1);
    }
}

int sum (int a, int b) {
    if (b < 0) {
        return -sum (-a, -b);

    } else if (b == 0) {
        return a;
    } else {
        return 1 + sum (a, b - 1);
    }
}

int expo (int a, int b) {
    if (b==0) {
        return 1;
    } else {
        return expo (a, b-1) * a;
    }
}

bool search (int numbers[], int size, int A) {
    // bool res = false;
    // for (int i = 0; i < size; i++) {
    //     if (numbers[i] == A) {
    //         res = true;
    //     }
    // }
    // return res;
    if (size == 0) {
        return false;
    } else {
        return (numbers[size-1] == A) || search (numbers, size - 1, A);
        }
    }

int main () {  
    cout << "fat -> " << fat (5) << endl;
    cout << "multi -> "<< mult (-5, -6) << endl;
    cout << "sum -> "<< sum (-5, -6) << endl;
    cout << "expo -> "<< expo (5, 2) << endl;
    
    cout << "search -> ";
    
    int numbers [] = {5, 7, 9, 3, 2};

    if (search (numbers, 4, 3)) {
        cout << "found" << endl;
    } else {
        cout << "not found" <<endl;
    }

    return 0;
}