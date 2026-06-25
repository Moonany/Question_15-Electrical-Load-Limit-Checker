#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    cout << "Electrical Load Limit Checker\n";

    while (totalLoad <= 3000) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;
        totalLoad += power;

        if (totalLoad > 3000) {
            cout << "\nLoad limit exceeded!";
            cout << "Final total load = " << totalLoad << " W";
            break;
        }
    }

    return 0;
}

