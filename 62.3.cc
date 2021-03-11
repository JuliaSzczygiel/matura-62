#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int i;
    int numberR = 0;
    int numberW = 0;
    int num1;
    int num2;

    ifstream file1;
    file1.open("liczby1.txt");

    ifstream file2;
    file2.open("liczby2.txt");

    for(i=0; i<1000; i++) 
    {
        file1 >> oct >> num1;
        file2 >> dec >> num2;

        if (num1 == num2) 
        {
            numberR++;
        } 
        else if (num1 > num2) 
        {
            numberW++;
        }
    }
    
    file1.close();
    file2.close();

    cout << "Zadanie 3:\n";
    cout << numberR << " par liczb ma te sama wartosc\n";
    cout << numberW << " liczb z pierwszego pliku jest wiekszych od odpowiadajacych im liczb z drugiego pliku\n\n";

    return 0;
}
