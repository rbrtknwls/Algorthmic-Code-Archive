
#include <iostream>
#include <stack>

using namespace std;
int main() {
    int inputs;
    cin >> inputs;

    for (int i = 0; i < inputs; i++){
        stack<int> mt;
        stack<int> branch;
        int sizes;
        cin >> sizes;
        if (i == inputs - 1){
            sizes--;
        }
        for (int x = 0; x < sizes; x++){
            int carname;
            cin >> carname;
            mt.push(carname);
        }
        int nextcar = 1;
        while (!mt.empty()){
            if (mt.top() == nextcar) {
                mt.pop();
                nextcar++;
            }
            else if(!branch.empty() && branch.top() == nextcar){
                branch.pop();
                nextcar++;
            }
            else{
                branch.push(mt.top());
                mt.pop();
            }


        }
        bool ispos = true;
        while(!branch.empty()){
            if(branch.top() == nextcar){
                nextcar++;
                branch.pop();
            }else{
                branch.pop();
                ispos = false;
            }
        }

        if(ispos) cout << "Y" << endl;
        else cout << "N" << endl;

    }



}