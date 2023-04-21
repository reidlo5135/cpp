#include "include/array-io.hpp"

void print_array(char name[], char lang[]) {
    std::cout<<"What's your name? ";
    std::cin>>name;

    std::cout<<"What's your favorite language? ";
    std::cin>>lang;

    std::cout<<"My name is "<<name<<std::endl;
    std::cout<<"And favorite language is "<<lang<<std::endl;
}

int main(void) {
    char name[100];
    char lang[200];
    print_array(name, lang);
}