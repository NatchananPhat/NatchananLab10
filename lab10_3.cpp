#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count =  0;
    float sum = 0, mean, deviation, x = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum = sum + atof(textline.c_str());
        x = x + pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    deviation = sqrt((x/count)-(mean*mean));
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << deviation ;
    source.close();
    return 0;
}