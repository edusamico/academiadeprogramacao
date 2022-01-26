#include <iostream>
#include <cmath>
#include <cstring> //strlen strcmp strcat strstr
using namespace std;

int strcmp (char str1[], char str2[]){
    int index = 0;
    while (str1[index] == str2[index] && (str1[index] != 0)) {
        index++;
    }
    if (str1[index] != str2[index]){
        if (str1[index] < str2[index]){
            return -1;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int strlen (char str[]) {
    int length = 0;
    while (str[length] != 0) {
        length ++;
    }
    return length;
}

void strcat (char str1[], char str2[]) {
    int length_str1 = strlen (str1);
    int index = 0;

    while (str2[index] != 0) {
        str1[length_str1 + index] = str2[index];
        index++;
    }
    str1[length_str1 + index] = 0;
}

int strstr (char str1[], char str2[]) {
    int res = - 1;
    for (int i = 0; str1[i] != 0; i++) {
        int j = 0;
        while (str1[i+j] != 0 && str2[j] != 0 && str1[i +j] == str2[j]){
            j++;
        }
        if (str2[j]== 0 && res == - 1) {
            res = i;
        }
    }
    return res;
}
int main (){
    char s[200], t[200];
    cin >> s >> t;
    cout <<"strcmp -> " << strcmp (s, t) << endl << endl;
    cout <<"strlen 1st word -> " << strlen (s) << endl;
    cout <<"strlen 2nd word -> " << strlen (t) << endl << endl;
    cout <<"strstr -> " << strstr (s, t) << endl << endl;
    strcat (s, t);

    cout <<"strcat 1st word -> " << s << endl;
    cout <<"strcat 2nd word -> " << t << endl;
    
    return 0;
}