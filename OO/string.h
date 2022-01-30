#ifndef STRING_H
#define STRING_H

class String {
public:
    String(const char *);
    
    int getLength() const;
    
    const char * getCString() const;

    char getCharAtPosition (int ) const;

    int compare (String other) const;

    void append (String other);

private:
    char *s;
    int length;
    int capacity;
    static const int INITIAL_CAPACITY;

    
};

#endif