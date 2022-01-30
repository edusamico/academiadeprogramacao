#include "string.h"
#include "string.cpp"
#include <iostream>
using namespace std;

int main () {
    char s[] = "casa";
        
    String my_string(s);
    String other_string("cabra");

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        my_string.append(other_string);
        cout << my_string.getCString() << endl;
    }

    // cout << my_string.getLength() << endl;
    // cout << my_string.getCString() << endl;
    // cout << my_string.compare(other_string) << endl;
    // cout << other_string.compare(my_string) << endl;
    // cout << my_string.compare(my_string) << endl;



    return 0;
}