#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    fstream fin, fout;

    fin.open("ucc.csv", ios::in);
    fout.open("students.csv", ios:: out);
    string line;




    while (getline(fin, line)) {
        for (int i = 0; i < 6; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 0){
                fout << token + ",";
            }
            if (i == 1){
                fout << token + ",";
            }
            if (i == 5){
                fout << token << ",\n";
            }
        }

    }
    return 0;
}


