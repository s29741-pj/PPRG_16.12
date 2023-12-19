#include <iostream>
#include <vector>
using namespace std;    

int main() {
    vector<int> dividableNums;

    int userNum = 0;
    cout << "Podaj liczbę: ";
    cin >> userNum;
    cout << endl;

    for(int i = 0; i <= userNum; i++) {
        if(i % 5 == 0 ){
            if(i % 3 != 0) {
                dividableNums.push_back(i);            
            }
        }
    }

    cout << "Liczb nie większych od "<< userNum << " podzielnych przez 5 i niepodzielnych przez 3 jest: " << dividableNums.size();

    return 0;
}