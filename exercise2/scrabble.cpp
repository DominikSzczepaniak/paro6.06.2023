#include <iostream>
#include <string>
#include <vector>
int scrabble(std::string slowo){
    std::vector<char> ones = {'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T'};
    std::vector<char> twos = {'D', 'G'};
    std::vector<char> three = {'B', 'C', 'M', 'P'};
    std::vector<char> four = {'F', 'H', 'V', 'W', 'Y'};
    std::vector<char> five = {'K'};
    std::vector<char> eight = {'J', 'X'};
    std::vector<char> ten = {'Q', 'Z'};
    int wynik = 0;
    for(int i = 0; i<slowo.length(); i++){
        if((std::find(ones.begin(), ones.end(), slowo[i]) != ones.end())){
            wynik += 1;
        }
        else if((std::find(twos.begin(), twos.end(), slowo[i]) != twos.end())){
            wynik += 2;
        }
        else if((std::find(three.begin(), three.end(), slowo[i]) != three.end())){
            wynik += 3;
        }
        else if((std::find(four.begin(), four.end(), slowo[i]) != four.end())){
            wynik += 4;
        }
        else if((std::find(five.begin(), five.end(), slowo[i]) != five.end())){
            wynik += 5;
        }
        else if((std::find(eight.begin(), eight.end(), slowo[i]) != eight.end())){
            wynik += 8;
        }
        else if((std::find(ten.begin(), ten.end(), slowo[i]) != ten.end())){
            wynik += 10;
        }
    }
    return wynik;
}