#include <iostream>
#include <fstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    fstream total, ucc, fout;

    total.open("empt.csv", ios::in);
    ucc.open("ucc.csv", ios::in);
    fout.open("thing.csv", ios::out);

    vector<string> emaillist;
    vector<string> firstchoice;
    vector<string> secondchoice;
    string line;
    while (getline(ucc, line)) {
        for (int i = 0; i < 4; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 1) {
                emaillist.push_back(token);
            }
            if (i == 2) {
                firstchoice.push_back(token);
            }
            if (i == 3) {
                secondchoice.push_back(token);
            }
        }
    }


    string school = "Upper Canada College";
    vector<string> donelist;
    while (getline(total, line)) {
        bool choices[4] = {false, false, false, false};
        string name = "";
        for (int i = 0; i < 4; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 0) {
                name += token + " ";
            }
            if (i == 1) {
                name += token;
            }
            if (i == 2) {
                if (find(emaillist.begin(), emaillist.end(), token) != emaillist.end()) {

                    if (firstchoice[i] == "Climate Change: Myth vs. Reality" ||
                        secondchoice[i] == "Climate Change: Myth vs. Reality") {
                        choices[0] = true;
                    }
                    if (firstchoice[i] == "Immigration: Two Sides of the Same Wall" ||
                        secondchoice[i] == "Immigration: Two Sides of the Same Wall") {
                        choices[1] = true;
                    }
                    if (firstchoice[i] == "Too Cool for School?" || secondchoice[i] == "Too Cool for School?") {
                        choices[2] = true;
                    }
                    if (firstchoice[i] == "Satirical Society" || secondchoice[i] == "Satirical Society") {
                        choices[3] = true;
                    }

                    donelist.push_back(token);
                } else {
                    choices[1] = true;
                    choices[2] = true;
                }
            }
        }
        fout << name + "," + school + "," + (choices[0] ? "true" : "false") + "," + (choices[1] ? "true" : "false") +
                "," + (choices[2] ? "true" : "false") + "," + (choices[3] ? "true" : "false") + ",\n";


    }
    for (int i = 0; i < emaillist.size(); i++) {
        bool choices[4] = {false, false, false, false};
        string name = "";
        if (find(donelist.begin(), donelist.end(), emaillist[i]) != donelist.end()) {

        } else {


            string name = emaillist[i].substr(0, emaillist[i].find("."));
            name[0] = toupper(name[0]);

            string lname = emaillist[i].substr(emaillist[i].find(".") + 1,
                                               emaillist[i].find("@") - emaillist[i].find(".") - 1);
            lname[0] = toupper(lname[0]);

            name = name + " " + lname;


            if (firstchoice[i] == "Climate Change: Myth vs. Reality" ||
                secondchoice[i] == "Climate Change: Myth vs. Reality") {
                choices[0] = true;
            }
            if (firstchoice[i] == "Immigration: Two Sides of the Same Wall" ||
                secondchoice[i] == "Immigration: Two Sides of the Same Wall") {
                choices[1] = true;
            }
            if (firstchoice[i] == "Too Cool for School?" || secondchoice[i] == "Too Cool for School?") {
                choices[2] = true;
            }
            if (firstchoice[i] == "Satirical Society" || secondchoice[i] == "Satirical Society") {
                choices[3] = true;
            }

            fout << name + "," + school + "," + (choices[0] ? "true" : "false") + "," +
                    (choices[1] ? "true" : "false") +
                    "," + (choices[2] ? "true" : "false") + "," + (choices[3] ? "true" : "false") + ",\n";
        }
    }


}


