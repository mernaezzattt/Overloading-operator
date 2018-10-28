

#include <iostream>
#include <cstring>
using namespace std;

int isAnagram(char *first, char *second);

int main(){
    char first[100], second[100];
    cout << "Enter first String\n";
    cin.getline(first, 100);

    cout << "Enter second String\n";
    cin.getline(second, 100);

    if(isAnagram(first, second)){
        cout << "Both strings are Anagram";
    } else {
        cout << "Both strings are not Anagram";
    }

    return 0;
}


int isAnagram(char *first, char *second){
    int firstCounter[256] = {0}, secondCounter[256] = {0};
    int i;

    if(strlen(first) != strlen(second)){
        return 0;
    }


    for(i = 0; first[i] != '\0'; i++){
        firstCounter[first[i]]++;
    }


    for(i = 0; second[i] != '\0'; i++){
        secondCounter[second[i]]++;
    }

    for(i = 0; i < 256; i++){
        if(firstCounter[i] != secondCounter[i])
            return 0;
    }

    return 1;
}
