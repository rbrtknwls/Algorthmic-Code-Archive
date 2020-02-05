#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    fstream fin, fout;

    fin.open("parsedreg.csv", ios::in);
    fout.open("choices.csv", ios:: out);

    string line, name, school, smallestn;
    int x = 0;
    bool incho[4] = {false,false,false,false};
    int small = 100;
    int given = 0;
    map <string, int> first;
    map <string, int> second;

    map <string, int> roomlims;

    map <string, string> studentc1;
    map <string, string> studentc2;

    first["Immigration: Two Sides of the Same Wall"] = 0;
    second["Immigration: Two Sides of the Same Wall"] = 0;
    roomlims["Immigration: Two Sides of the Same Wall"] = 150;

    first["Satirical Society"] = 0;
    second["Satirical Society"] = 0;
    roomlims["Satirical Society"] = 120;

    first["Too Cool for School?"] = 0;
    second["Too Cool for School?"] = 0;
    roomlims["Too Cool for School?"] = 100;

    first["Climate Change: Myth vs. Reality"] = 0;
    second["Climate Change: Myth vs. Reality"] = 0;
    roomlims["Climate Change: Myth vs. Reality"] = 1000;

    string plen[2] = {"",""};


    string total_list[4] = { "Too Cool for School?", "Satirical Society","Immigration: Two Sides of the Same Wall","Climate Change: Myth vs. Reality"};

    while (getline(fin, line)) {
        incho[0] = false;
        incho[1] = false;
        incho[2] = false;
        incho[3] = false;
        for (int i = 0; i < 6; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (token == "true") incho[i - 2] = true;
            if (i == 0) {
                name = token;
            }
            if (i == 1) {
                school = token;
            }
        }


        for (int i = 0; i < 2; i++) {
            if (incho[1]) {
                plen[i] = "Immigration: Two Sides of the Same Wall";
                incho[1] = false;
            } else if (incho[3]) {
                plen[i] = "Satirical Society";
                incho[3] = false;

            } else if (incho[2]) {
                plen[i] = "Too Cool for School?";
                incho[2] = false;

            } else if (incho[0]) {
                plen[i] = "Climate Change: Myth vs. Reality";
                incho[4] = false;

            }
        }





        if (first[plen[x]] < roomlims[plen[x]]){
            first[plen[x]]= first[plen[x]]+1;
            studentc1[name] = plen[x];
        }else{
            for (int z = 0; z < 4; z++){
                if (first[total_list[z]] < roomlims[total_list[z]]){
                    first[total_list[z]] = first[total_list[z]]+1;
                    studentc1[name] = total_list[z];
                    z = 50;
                }
            }

        }

        x = (x+1)%2;
        if (studentc1[name] == "Climate Change: Myth vs. Reality"){
            if (plen[x] != "Climate Change: Myth vs. Reality" && second[plen[x]] < roomlims[plen[x]]){
                second[plen[x]] = second[plen[x]]+1;
                studentc2[name] = plen[x];
            }else {
                for (int z = 0; z < 3; z++) {
                    if (second[total_list[z]] < roomlims[total_list[z]]) {
                        second[total_list[z]] = second[total_list[z]] + 1;
                        studentc2[name] = total_list[z];
                        z = 50;
                    }
                }
            }
        }else{
            if (plen[x] == "Immigration: Two Sides of the Same Wall" && given < 40){
                second[plen[x]] = second[plen[x]]+1;
                studentc2[name] = plen[x];
                given++;
            }else{
                second["Climate Change: Myth vs. Reality"] = second["Climate Change: Myth vs. Reality"] += 1;
                studentc2[name] = "Climate Change: Myth vs. Reality";
            }
        }

        x = (rand() % 2);

        fout << name +","+ school +"," +studentc1[name] +","+ studentc2[name] +",\n";

/**
 * if (second[plen[x]] < roomlims[plen[x]]){
            second[plen[x]]= second[plen[x]]+1;
            studentc2[name] = plen[x];
        }else{
            for (int z = 0; z < 4; z++){
                if (second[total_list[z]] < roomlims[total_list[z]] && studentc1[name] != total_list[z]){
                    second[total_list[z]] = second[total_list[z]]+1;
                    z = 50;
                }
                if (z == 3 && studentc1[name] == total_list[z]){
                    cout << "FUCK" << endl;
                }
            }

        }
        fout << name +","+ school +"," +plen[(x+1)%2] +","+ plen[x] +",\n";

    }
    int st = 0;
    int en = 0;
    for( auto const& [key, val] : first ) {
        cout << key << ":" << val << endl;
        st += val;
    }
    for( auto const& [key, val] : second ) {
        cout << key << ":" << val << endl;
        en += val;
    }

    cout << st << endl;
    cout << en << endl;


    **/

    }
    for( auto const& [key, val] : first ) {
        cout << key << ":" << val << endl;
    }
    for( auto const& [key, val] : second ) {
        cout << key << ":" << val << endl;
    }
    return 0;
}


