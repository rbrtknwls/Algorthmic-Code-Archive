#include <iostream>
int main(){

    std::string word;
    int max = 0;
    std::getline(std::cin, word);
    for (int i = 0; i < word.size()+1; i++){
        for (int x = 0; x < word.size()-i+1; x++){
            std::string str = word.substr(i,x);
            std::string rev = str;
            reverse(rev.begin(),rev.end());
            if(str == rev and max < str.size()) max = str.size();



        }
    }
    std::cout<< max;





}


