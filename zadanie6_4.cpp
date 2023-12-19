#include <iostream>
using namespace std;

void concatenate(int revolutions, string input)
{
    string outcome;
    for (int i = 0; i < revolutions; i++)
    {
        outcome.append(input);
    }

    cout << outcome;
}

int main()
{
    string input;
    int revolutions = 0;

    cout << "Podaj stringa: ";
    cin >> input;

    cout << "Podaj ile razy ma zostać wykonana kontaktenacja podanego stringa: ";
    cin >> revolutions;

    concatenate(revolutions, input);

    return 0;
}