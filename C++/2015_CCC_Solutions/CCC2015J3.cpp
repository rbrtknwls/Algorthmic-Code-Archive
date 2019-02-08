#include <iostream>

int main(){
    std::string word;
    std::getline(std::cin, word);
    std::string Alpahbet = "abcdefghijklmnopqrstuvwxyz";
    std::string Rule = "aaeeeiiiiooooouuuuuuuu";
    std::string Constantent = "bcdfghjklmnpqrstvwxyzz";
    std::string New_Word = "";
    for(int i = 0; i < word.length(); i++) {
        if (Constantent.find(word[i]) < Constantent.length()) {
            New_Word = New_Word + (word[i]);
            New_Word = New_Word + (Rule[Constantent.find(word[i])]);
            New_Word = New_Word + (Constantent[Constantent.find(word[i]) + 1]);
        }
        else {
            New_Word = New_Word + (word[i]);
        }
    }
    std::cout<< New_Word;
}

