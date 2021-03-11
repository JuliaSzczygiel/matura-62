#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i;
    int number;
    int last = -1;
    int first = -1;
    int stringLength = 0;
    int mostStringLength = 0;
    int mostFirst;

    ifstream file;
    file.open("liczby2.txt");

    for(i=0; i<1000; i++) 
    {
        file >> number;
        if (number >= last) 
        {
            stringLength++;
        } 
        else 
        {
            first = number;
            stringLength = 1;
        }
        if (stringLength > mostStringLength) 
        {
            mostStringLength = stringLength;
            mostFirst = first;
        }

        last = number;
    }
    file.close();

    cout << "Zadanie 2:\n";
    cout << "najdluzszy ciag zaczyna sie od elementu " << mostFirst << " i ma " << mostStringLength << " elementow\n\n";

    return 0;
}
