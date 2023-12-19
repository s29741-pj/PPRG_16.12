#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    int indexNumber;
    string studName;
    string studSurname;
};

int main()
{

    vector<Student> studentsList = {
        {45435, "Jan", "Kowalski"},
        {34439, "Ian", "Smith"},
        {67, "Ala", "Zdun"},
        {565464, "Iwo", "Hinz"},
        {34443, "Lao", "Che"},
        {34440, "Ewa", "Kowal"},
        {34289768, "Anna", "Nowak"},
        {342455, "Jan", "Nowak"},
        {3446454, "Stefan", "Nowak"},
        {34441, "Jack", "Black"},
    };

        cout << endl
         << endl;

    cout << "Wektor przed sortowaniem:" << endl
         << endl;

    for (int i = 0; i < studentsList.size(); i++)
    {
        cout << studentsList[i].indexNumber << " " << studentsList[i].studName << " " << studentsList[i].studSurname << endl;
    };

    for (int i = 0; i < studentsList.size(); i++)
    {
        for (int k = 0; k < studentsList.size(); k++)
        {
            if (studentsList[i].indexNumber <= studentsList[k].indexNumber)
            {
                swap(studentsList[i].indexNumber, studentsList[k].indexNumber);
                swap(studentsList[i].studName, studentsList[k].studName);
                swap(studentsList[i].studSurname, studentsList[k].studSurname);
            };
        };
    };

    cout << endl
         << endl;

    cout << "Wektor posortowany:" << endl
         << endl;

    for (int i = 0; i < studentsList.size(); i++)
    {
        cout << studentsList[i].indexNumber << " " << studentsList[i].studName << " " << studentsList[i].studSurname << endl;
    };

    cout << endl
         << endl;

    return 0;
};