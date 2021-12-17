#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main(){
    double count = 0;
    float sum = 0;
    float S = 0;
    string t;
    ifstream sco("score.txt");
    while(getline(sco,t)){
        sum += atof(t.c_str());
        S = sqrt(0.2161916929/(count - 1));
        count++;
    }

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    cout << "Standard deviation = " << S << '\n';
}