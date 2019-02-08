#include <iostream>
using namespace std;

int main(){
    int num;
    scanf("%d", &num);
    for (int turns =0; turns < num+1; turns++){
        string input = "";
        int counter = 0;

        cin >> input;
        string board[3][3];
        int x_count = 0;
        int o_count = 0;
        for (int horz = 0; horz < 3; horz++){
            for (int vert = 0; vert < 3; vert++){
                board[horz][vert] = input[horz*3+vert];
                if (input[horz*3+vert] == 'X') counter++;
                else if (input[horz*3+vert] == 'O') counter--;

            }
        }

        if (counter < 0) cout << "no" << endl;
        else{

            if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X") x_count++;
            else if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O") o_count++;

            if (board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X") x_count++;
            else if (board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O") o_count++;

            if (board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X") x_count++;
            else if (board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O") o_count++;

            if (board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X") x_count++;
            else if (board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O") o_count++;

            if (board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X") x_count++;
            else if (board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O") o_count++;

            if (board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X") x_count++;
            else if (board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O") o_count++;

            if (board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X") x_count++;
            else if (board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O") o_count++;

            if (board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X") x_count++;
            else if (board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O") o_count++;

            if (x_count != 0 && o_count != 0) cout << "no" << endl;
            else cout<< "yes" << endl;
        }






    }
}
