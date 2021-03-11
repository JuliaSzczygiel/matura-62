#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i;
    int number;
    int min = 999999;
    int max = 0;

    ifstream file;
    file.open("liczby1.txt");

    for(i=0; i<1000; i++) {
        plik >> oct >> number;
        if (min > number) {
            min = number;
        }
        if (max < number) {
            max = number;
        }
    }
    file.close();

    cout << "Zadanie 1:\n";
    cout << "najmniejsza z liczb to " << dec << min << " dziesietnie czyli " << oct << min << " osemkowo\n";
    cout << "najwieksza z liczb to " << dec << max << " dziesietnie czyli " << oct << max << " osemkowo\n\n";

    return 0;
}
