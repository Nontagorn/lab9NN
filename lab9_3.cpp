#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string Num;
    double A = 0;
    double B = 0;
    int C = 0;
    while(getline(score, Num)){
        A += atof(Num.c_str());
        B += pow(atof(Num.c_str()),2);
        C++;
    }
    double Mean = A/C;
    double SD = sqrt((B/C) - pow(Mean,2));
    cout << "Number of data = " <<  C << "\n";
    cout << std::setprecision(3);
    cout << "Mean = " <<  Mean << "\n";
    cout << "Standard deviation = " << SD << "\n";
    return 0;


  

   
}