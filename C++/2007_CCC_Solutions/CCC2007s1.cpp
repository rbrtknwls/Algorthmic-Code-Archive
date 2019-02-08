
#include <iostream>
using namespace std;

int main() {
    int count;
    scanf("%d", &count);
    int Year;
    int Month;
    int Day;
    for (int i = 0; i < count; i++) {
        scanf("%d", &Year);
        scanf("%d", &Month);
        scanf("%d", &Day);

        if (Year < 1989) {
            cout << "Yes" << endl;
        } else if (Year == 1989) {
            if (Month < 2) {
                cout << "Yes" << endl;
            } else if (Month == 2) {
                if (Day <= 27) {
                    cout << "Yes" << endl;
                } else cout << "No" << endl;
            } else cout << "No" << endl;
        } else cout << "No" << endl;


    }
}


