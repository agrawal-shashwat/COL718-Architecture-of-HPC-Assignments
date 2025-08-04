#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class floating_point_operation {
    float s1, s2, s3;
    double d1, d2, d3;
    public:
        floating_point_operation(float r1, float r2, float r3=0) {}
        float operate() {

        }
};

class addition : public floating_point_operation {

};

class subtraction : public floating_point_operation {

};

class multiplication : public floating_point_operation {

};

class division : public floating_point_operation {

};

class move : public floating_point_operation {

};



int main() {
    ifstream file("trace1.txt");
    if (!file) {
        cout<<"Error in opening file.";
    }
    else {
        string line;
        while(getline(file,line)) {
            istringstream iss(line);
            string word;
            while(iss>>word) {

            }
        }
        file.close();
    }
    return 0;
}