#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student
{
    string name;
};

struct grades
{
    int gradeIT;
    int gradeMath;
    int gradeBiology;
    int gradePolish;
};

struct student studentsNamesList[6];
struct grades studentsGradesList[6];

void addNewStudent(int studId)
{

    string input;

    cout << "Podaj imię ucznia nr " << studId + 1 << " : ";
    cin >> studentsNamesList[studId].name;

    cout << "Podaj ocenę z informatyki: ";
    cin >> studentsGradesList[studId].gradeIT;

    cout << "Podaj ocenę z matematyki: ";
    cin >> studentsGradesList[studId].gradeMath;

    cout << "Podaj ocenę z biologii: ";
    cin >> studentsGradesList[studId].gradeBiology;

    cout << "Podaj ocenę z języka polskiego: ";
    cin >> studentsGradesList[studId].gradePolish;
};

void displayGrades(int studId, int subjId)
{
    cout << "Podaj nr ucznia [1..6]: ";
    cin >> studId;
    cout << "Podaj nr przedmiotu [0..3]: ";
    cin >> subjId;

    switch (subjId)
    {
    case 0:
        cout << "Uczen: " << studentsNamesList[studId - 1].name << ","
             << " ocena z informatyki: " << studentsGradesList[studId - 1].gradeIT << endl;
        break;
    case 1:
        cout << "Uczen: " << studentsNamesList[studId - 1].name << ","
             << " ocena z matematyki: " << studentsGradesList[studId - 1].gradeMath << endl;
        break;

    case 2:
        cout << "Uczen: " << studentsNamesList[studId - 1].name << ","
             << " ocena z biologii: " << studentsGradesList[studId - 1].gradeBiology << endl;
        break;

    case 3:
        cout << "Uczen: " << studentsNamesList[studId - 1].name << ","
             << " ocena z języka polskiego: " << studentsGradesList[studId - 1].gradePolish << endl;
        break;

    default:
        cout << "Nie ma przedmiotu pod podanym ID." << endl;
    };
};

int main()
{

    int studId = 0;
    int subjId = 0;
    int queryCount = 0;

    for (int i = 0; i < 6; i++)
    {
        addNewStudent(i);
    };

    cout << "Podaj liczbę zapytań: ";
    cin >> queryCount;

    for (int j = 0; j < queryCount; j++)
    {
        displayGrades(studId, subjId);
    };

    return 0;
};