#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    fstream fin, fout;

    fin.open("res.csv", ios::in);

    string line;




    while (getline(fin, line)) {
        for (int i = 0; i < 6; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 0){
                cout << token + " ";
            }
            if (i == 5){
                cout << token << endl;
            }
        }

    }
    return 0;
}


