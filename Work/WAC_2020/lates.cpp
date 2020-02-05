#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    fstream sec,fin, fout;

    sec.open("security.csv", ios::in);
    fin.open("ucc.csv", ios::in);
    string line, name;


    vector <string> in;
    bool nothere;
    // SEC
    while (getline(sec, line)) {
        for (int i = 0; i < 1; i++) {
            string token = line.substr(0, line.find(","));

            in.push_back(token);

        }
    }


    // STAFF
    while (getline(sec, line)) {
        for (int i = 0; i < 1; i++) {
            string token = line.substr(0, line.find(","));

            in.push_back(token);

        }
    }

    while (getline(fin, line)) {
        nothere = true;
        for (int i = 0; i < 12; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 0){
                name = token;
            }
            if (i >= 2 && i <= 10){
                if (token == "x"){
                    nothere = false;
                }
            }

        }
        if (nothere){
            if(std::find(in.begin(), in.end(), name) != in.end()) {
                /* v contains x */
            } else {
                cout << name << endl;
            }

        }

    }
    return 0;
}


