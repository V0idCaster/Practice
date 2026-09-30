#include<iostream>
using namespace std;

int main(){

    int age;
    cin >> age;

    if (age < 18){
        cout << "you are not eligible for the job.\n";
    }
    else if (age >= 18){
        cout << "you are eligible for the job.\n";
    }
    else if (age >= 55 && age <= 57){
        cout << "eligible for job, but retirement soon.\n";
    }
    else if (age > 57){
        cout << "you are not eligible for the job.\n";
    }
    
    return 0;
}