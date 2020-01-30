#include <iostream>
#include <fstream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    fstream total,ucc, fout;

    total.open("empt.csv", ios::in);
    ucc.open("ucc.csv", ios::in);
    fout.open("thing.csv", ios:: out);

    vector <string> emaillist;
    vector <string> firstchoice;
    vector <string> secondchoice;
    string line;
    while (getline(ucc, line)){
        for (int i = 0; i < 4; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 1){
                emaillist.push_back(token);
            }
            if (i == 2){
                firstchoice.push_back(token);
            }
            if (i == 3){
                secondchoice.push_back(token);
            }
        }
    }

    for (int i = 0; i < emaillist.size(); i++)
        cout << emaillist[i] << "\n";

    while (getline(total, line)){
        for (int i = 0; i < 4; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (i == 2){
                cout << token << " ";
                if (find(emaillist.begin(), emaillist.end(), token) != emaillist.end())
                    cout << "Element found" << endl;
                else
                    cout << "Element not found" << endl;
            }
        }
    }

}


