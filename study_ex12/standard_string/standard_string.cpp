#include "include/standard_string.hpp"

void show_string() {
    std::string str1 = "I like";
    std::string str2 = "cpp";
    std::string str3 = str1 + str2;

    std::cout << "str1 : " << str1 << "\n";
    std::cout << "str2 : " << str2 << "\n";
    std::cout << "str3 : " << str3 << "\n";

    str1 += str2;
    bool is_equal = (str1 == str3);

    if(is_equal) {
        std::cout << "is equal!" << "\n";
    } else {
        std::cout << "is not equal!" << "\n";
    }

    std::string str4;
    std::cout << "input string : ";
    std::cin >> str4;
    std::cout << "input string result : " << str4 << "\n";
}

String::String() {
    int len = 0;
    str = NULL;
}

String::String(const char * s) {
    len = strlen(s) + 1;
    str = new char[len];
    strcpy(str, s);
}

String::String(const String& s) {
    len = s.len;
    str = new char[len];
    strcpy(str, s.str);
}

String::~String() {
    if(str != NULL) {
        delete []str;
    }
}

String& String::operator=(const String& s) {
    if(str != NULL) {
        delete []str;
    }
    len = s.len;
    str = new char[len];
    strcpy(str, s.str);
    return *this;
}

String& String::operator+=(const String& s) {
    len += (s.len - 1);
    char * temp_str = new char[len];
    strcpy(temp_str, str);
    strcat(temp_str, s.str);

    if(str != NULL) {
        delete []str;
    }
    str = temp_str;
    return *this;
}

String String::operator+(const String& s) {
    char * temp_str = new char[len + s.len -1];
    strcpy(temp_str, str);
    strcat(temp_str, s.str);
    String temp(temp_str); // String temp = temp_str;
    delete []temp_str;
    return temp;
}

bool String::operator==(const String& s) {
    return strcmp(str, s.str) ? false : true;
}

int main(void) {
    show_string();
    return 0;
}