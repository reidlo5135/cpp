#ifndef STANDARD_STRING
#define STANDARD_STRING

#include <iostream>
#include <string>
#include <cstring>

void show_string();

class String {
    private :
        int len;
        char * str;
    public :
        String();
        String(const char * s);
        String(const String& s);
        ~String();
        String& operator=(const String& s);
        String& operator+=(const String& s);
        bool operator==(const String& s);
        String operator+(const String& s);
};

#endif