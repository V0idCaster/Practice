#include <iostream>
using namespace std;

int main(){

    int grade;
    cin >> grade;
    if (grade < 25){

        cout << "F" << endl;
    }
        else if (grade > 25 && grade <= 44){
        
        cout << "E" << endl;
    }
    else if (grade > 44 && grade <= 49){

        cout << "D" << endl;
    }
    else if (grade > 49 && grade <= 59){
        cout << "C" << endl;
    }
    else if (grade > 59 && grade <= 79){
        cout << "B" << endl;
    }
    else{
        cout << "A" << endl;
    }

    return 0;
}