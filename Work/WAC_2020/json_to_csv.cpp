#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main()
{
    fstream fin, fout;

    fin.open("reg.json", ios::in);
    fout.open("output.csv", ios:: out);

    string line;
    int pos = 0,arr = 0;
    bool during = true;
    string name, school;
    bool choices[4] = {false, false, false, false};
    while (getline(fin, line)){
        bool already = true;

        if (during  == false){
            arr = 0;
        }
        if (line.find("{") != string::npos) {
            pos++;
            already = true;
            during = true;
        }
        if (line.find("}") != string::npos) {
            pos--;
            already = false;
            during = false;
        }
        if (pos == 3 && already){
            cout << "   Users is: " + line << endl;
        }

        if (pos == 5 && already){
            arr++;

            if (arr > 3 && arr < 12) {

                if (arr == 4) name = line.substr(20,line.size()- 22);
                if (arr == 5){
                    if (line.find("true") != string::npos) choices[0] = true;
                    else choices[0] = false;
                }
                if (arr == 6){
                    if (line.find("true") != string::npos) choices[1] = true;
                    else choices[1] = false;
                }
                if (arr == 7){
                    if (line.find("true") != string::npos) choices[2] = true;
                    else choices[2] = false;
                }
                if (arr == 8){
                    if (line.find("true") != string::npos) choices[3] = true;
                    else choices[3] = false;
                }
                if (arr == 11) school = line.substr(22,line.size()- 23);
            }


        }

        if (arr == 11 && already){
            printf("%s: %d %d %d %d %s \n", name.c_str(), choices[0], choices[1], choices[2] ,choices[3], school.c_str());
        }



    }




    return 0;
}


