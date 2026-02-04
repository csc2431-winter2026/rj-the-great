#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int SumArray(const int array[], size_t size);

size_t RJAlpha(const char* str);
char* Turbo(char* dest, const char* source);

int main(int argc, char* argv[]){
    int data[] = {6, 3, 1};
    for (int i=0; i<3; i++)
        cout << data[i] << endl;

    cout << SumArray(data, 3) << endl;

// **************************

    char s1[10];
    char s2[] = "Lovely";
    char s3[20] = "Cute";
    char s4[] = {'A', 'p', 'a', '\0'};

    cout << RJAlpha(s2) << endl;
    cout << RJAlpha(s3) << endl;

    Turbo(s1, s2);
    cout << s1 << endl;

    strcpy(s1, "Mazinger");
    cout << strlen(s1) << endl << s1 << endl;

    strlen("Baby");
    strlen(s3);

    return 0;
}

char* Turbo(char* dest, const char* source){
    size_t i;
    for (i=0; source[i]!='\0'; i++)
        dest[i] = source[i];
    dest[i] = '\0';
    return dest;
}


size_t RJAlpha(const char* str){
    size_t size = 0;
    while (str[size] != '\0')
        size++;
    return size;
}



int SumArray(const int array[], size_t size){
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}


/**
 * 
 * To compile from the command line (Terminal) you can use the following command
 * g++ -std=c++20 -Wall -Wextra -Wpedantic main.cpp
 * If it compiles w/o warnings then nothing will show
 * To run:
 * ./a.out
 */