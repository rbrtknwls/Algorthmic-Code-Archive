//
// Created by Robbie Knowles on 2018-01-31.
//
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int nom = 0;
    int den = 0;
    cin >> nom;
    cin >> den;
    int x = nom/den;
    if (x > 0) cout << nom/den;
    if (x*den != nom){
        cout << ' ';
        nom -= x*den;
        for (int i = 2; i < (den/2)+1; i++){
            if (nom%i == 0 && den%i==0){
                nom /= i;
                den /= i;
                i--;
            }
        }
        cout << to_string(nom);
        cout << '/';
        cout << to_string(den);

    }




}

