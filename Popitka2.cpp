#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main() {
	while (true) {


		double w, min, max, sum, result, aver; int number, size = 1; vector<int> vect;
		max = 0; result = 0; aver = 0; string num;

		size = 0;

		cout << "To stop typing, write 'stop'\n";

		while (true)
		{
			cin >> num;

			if (num == "stop")
			{
				break;
			}

			number = stoi(num);
			vect.push_back(number);


			size = vect.size();
		}
		min = size;

		for (int p = 0; p < size; p++)
		{
			if (vect[p] < min) {
				min = vect[p];
			}
		}

		cout << "Minimum number: " << min << endl;

		for (int p = 0; p < size; p++)
		{
			if (vect[p] > max) {
				max = vect[p];
			}
		}

		cout << "Maximum number: " << max << endl;
		sum = 0;

		for (int i = 0; i < size; i++)
		{
			sum += vect[i];
		}

		cout << "The amount of the number: " << sum << endl;
		aver = sum / size;

		cout << "Average value: " << aver << endl;

		for (int i = 0; i < size; i++)
		{
			w = vect[i] - aver;
			result -= w;
		}
		double resultF = result / size;

		double x = resultF * resultF;

		cout << "Standard deviation: " << x << endl;
		cout << "" << endl;

	}
}
