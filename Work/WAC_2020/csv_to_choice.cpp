#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int ra(map <string, int> dict, string val){
    if (dict.find(val) != dict.end()){
        return dict[val];
    }
}

int main()
{
    fstream fin, fout;

    fin.open("parsedreg.csv", ios::in);
    fout.open("choices.csv", ios:: out);

    string line, name, school, smallestn;
    int x = 0;
    bool incho[4] = {false,false,false,false};
    int small = 100;
    map <string, int> first;
    map <string, int> second;

    first["Immigration: Two Sides of the Same Wall"] = 0;
    second["Immigration: Two Sides of the Same Wall"] = 0;

    first["Satirical Society"] = 0;
    second["Satirical Society"] = 0;

    first["Too Cool for School?"] = 0;
    second["Too Cool for School?"] = 0;

    first["Climate Change: Myth vs. Reality"] = 0;
    second["Climate Change: Myth vs. Reality"] = 0;

    string plen[2] = {"",""};




    while (getline(fin, line)){
        incho[0] = false;
        incho[1] = false;
        incho[2] = false;
        incho[3] = false;
        for (int i = 0; i < 6; i++) {
            string token = line.substr(0, line.find(","));

            line.erase(0, line.find(",") + 1);
            if (token == "true") incho[i-2] = true;
            if (i == 0){
                name = token;
            }
            if (i == 1){
                school = token;
            }
        }



        for (int i = 0; i < 2 ; i++){
            if (incho[1]){
                plen[i] = "Immigration: Two Sides of the Same Wall";
                incho[1] = false;
            }
            else if (incho[3]){
                plen[i] = "Satirical Society";
                incho[3] = false;

            }
            else if (incho[2]){
                plen[i] = "Too Cool for School?";
                incho[2] = false;

            }
            else if (incho[0]){
                plen[i] = "Climate Change: Myth vs. Reality";
                incho[4] = false;

            }
        }

        x = (rand()%2);

        small = first[plen[x]];
        smallestn = plen[x];

        for( auto const& [key, val] : first)
        {
            if (val < small){
                small = val;
                smallestn = key;
            }
        }



        if (ra(first,plen[x])-50 < small){
            first[plen[x]]= first[plen[x]]+1;
        }else{
            first[smallestn]= first[smallestn]+1;
            plen[x] = smallestn;
        }

        x = (x+1)%2;
        small = second[plen[1]];
        smallestn = plen[1];
        for( auto const& [key, val] : second )
        {
            if (val < small){
                small = val;
                smallestn = key;
            }
        }
        if (ra(second,plen[x])-50 < small){
            second[plen[x]]= second[plen[x]]+1;

        }else{
            second[smallestn]= second[smallestn]+1;
            plen[x] = smallestn;
        }

        fout << name +","+ school +"," +plen[0] +","+ plen[1] +",\n";

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





    return 0;
}


