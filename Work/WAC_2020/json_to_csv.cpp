#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    fstream fin, fout;

    fin.open("reg1.json", ios::in);
    fout.open("parsedreg.csv", ios:: out);

    string line;
    int pos = 0,arr = 0;
    bool during = true;
    string name, school;
    bool choices[4] = {false, false, false, false};
    int count[4] = {0,0,0,0};
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

        if (pos == 5 && already){
            arr++;

            if (arr > 3 && arr < 12) {

                if (arr == 4) name = line.substr(20,line.size()- 22);
                if (arr == 5){
                    if (line.find("true") != string::npos){
                        choices[0] = true;
                        count[0]++;
                    }
                    else choices[0] = false;
                }
                if (arr == 6){
                    if (line.find("true") != string::npos){
                        choices[1] = true;
                        count[1]++;
                    }
                    else choices[1] = false;
                }
                if (arr == 7){
                    if (line.find("true") != string::npos){
                        choices[2] = true;
                        count[2]++;
                    }
                    else choices[2] = false;
                }
                if (arr == 8){
                    if (line.find("true") != string::npos){
                        choices[3] = true;
                        count[3]++;
                    }
                    else choices[3] = false;
                }
                if (arr == 11) school = line.substr(22,line.size()- 23);
            }


        }

        if (arr == 11 && already){
            fout << name +","+ school +","+ (choices[0]?"true":"false")+","+ (choices[1]?"true":"false") +","+ (choices[2]?"true":"false") +","+ (choices[3]?"true":"false") +",\n";
        }



    }

    printf("%d %d %d %d\n", count[0], count[1], count[2], count[3]);

    fin.close();
    fin.clear();
    fin.open("ucc.csv", ios::in);
    pos = 0;
    school = "Upper Canada College";
    while (getline(fin, line)){
        pos++;
        if (pos > 2){
            choices[0] = false;
            choices[1] = false;
            choices[2] = false;
            choices[3] = false;

            for (int i = 0; i < 4; i++){
                string token = line.substr(0, line.find(","));

                line.erase(0, line.find(",") + 1);


                if (i == 1){
                    name = token.substr(0,token.find("."));
                    name[0] = toupper(name[0]);

                    string lname = token.substr(token.find(".")+1,token.find("@") - token.find(".")-1);
                    lname[0] = toupper(lname[0]);

                    name = name +" "+ lname;
                }
                if (i == 2 || i == 3){
                    if (token == "Climate Change: Myth vs. Reality"){
                        choices[0] = true;
                        count[0]++;
                    }
                    if (token == "Immigration: Two Sides of the Same Wall"){
                        choices[1] = true;
                        count[1]++;
                    }
                    if (token == "Too Cool for School?"){
                        choices[2] = true;
                        count[2]++;
                    }
                    if (token == "Satirical Society"){
                        choices[3] = true;
                        count[3]++;
                    }
                }
            }
            fout << name +","+ school +","+ (choices[0]?"true":"false")+","+ (choices[1]?"true":"false") +","+ (choices[2]?"true":"false") +","+ (choices[3]?"true":"false") +",\n";
        }

    }
    printf("%d %d %d %d\n", count[0], count[1], count[2], count[3]);
    fin.close();
    fin.clear();
    fin.open("BH.csv", ios::in);
    school = "Branksome Hall";
    string lname;
    pos = 0;
    while (getline(fin, line)){
        pos++;
        if (pos > 2) {
            choices[0] = false;
            choices[1] = false;
            choices[2] = false;
            choices[3] = false;
            for (int i = 0; i < 4; i++){
                string token = line.substr(0, line.find(","));

                line.erase(0, line.find(",") + 1);


                if (i == 0){
                    lname = token;

                }
                if (i == 1){
                    name = token +" "+ lname;
                }
                if (i == 2 || i == 3){
                    if (token == "Space vs Climate" || token == "Space vs Climate Change"){
                        choices[0] = true;
                        count[0]++;
                    }
                    if (token == "Immigration"){
                        choices[1] = true;
                        count[1]++;
                    }
                    if (token == "Education vs Entrepreneurship" || token == "Education vs Entrepeneurship"){
                        choices[2] = true;
                        count[2]++;
                    }
                    if (token == "Spread vs Satire"){
                        choices[3] = true;
                        count[3]++;
                    }
                }
            }
            fout << name +","+ school +","+ (choices[0]?"true":"false")+","+ (choices[1]?"true":"false") +","+ (choices[2]?"true":"false") +","+ (choices[3]?"true":"false") +",\n";
        }

    }
    printf("%d %d %d %d", count[0], count[1], count[2], count[3]);



    return 0;
}


