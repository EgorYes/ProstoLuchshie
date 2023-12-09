#include<iostream>
#include<vector>
#include<cmath>


using namespace std;


int main() {




    double w, min, max, sum, result, aver, v;
    int number, size = 1;
    vector<int> vect;
    max = 0;
    result = 0;
    aver = 0;


    size = 0;


    while (cin >> number) // работает пока есть ввод
    {

        vect.push_back(number);


        size = vect.size();
    }
    min = vect[0];

    for (int p = 0; p < size; p++) {
        if (vect[p] < min) {
            min = vect[p];
        }
    }

    cout << "Minimum number: " << min << endl;

    for (int p = 0; p < size; p++) {
        if (vect[p] > max) {
            max = vect[p];
        }
    }

    cout << "Maximum number: " << max << endl;
    sum = 0;

    for (int i = 0; i < size; i++) {
        sum += vect[i];
    }

    cout << "The amount of the number: " << sum << endl;
    aver = sum / size;

    cout << "Average value: " << aver << endl;

    for (int i = 0; i < size; i++) {
        w = vect[i] - aver;

        v = w * w;
        result += v;
    }
    double resultF = result / size;

    double x = sqrt(resultF);

    cout << "Standard deviation: " << x << endl;
    cout << "" << endl;
    system("pause");

}
