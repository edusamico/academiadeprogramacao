#include "string.h"

 const int String::INITIAL_CAPACITY = 30;

String::String(const char *_s) {

    capacity = INITIAL_CAPACITY;
    s = new char [INITIAL_CAPACITY];
    length = 0;

    while (_s[length] != 0) {
        s[length] = _s[length];
        length++;
    }
    s[length] = 0;
}

int String::getLength() const {
    return length;
}

const char * String::getCString() const {
    return s;
}

char String::getCharAtPosition (int index) const {
    return s[index];
}

int String::compare(String other) const {
    int index = 0;
    
    while (index < this->getLength() && index < other.getLength() && this->getCharAtPosition(index) == other.getCharAtPosition(index)) {
        index++;
    }
    if (this->getCharAtPosition(index) == other.getCharAtPosition(index)) {
        return 0;
    } else if (this->getCharAtPosition(index) < other.getCharAtPosition(index)) {
        return -1;
    } else {
        return 1;
    }
}
void String::append (String other) {
    while(length + other.getLength() >= capacity) {
        capacity = capacity * 2;
        char * temp = new char[capacity];
        for (int i = 0; i < length; i++) {
            temp[i] =s[i];
        }
        delete s;
        s = temp;
    }
    for (int i = 0; i < other.getLength(); i++) {
        s[length + i] = other.getCharAtPosition(i);
    }
    s[length + other.getLength()] = 0;
    length = length + other.getLength();
}
// int main () {
//     return 2;
// }