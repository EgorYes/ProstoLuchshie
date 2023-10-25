#include<iostream>
#include<vector>
using namespace std;


int main() {

	double w, min, max, sum, result, aver; int num, size = 1; vector<int> vect;
	min = 1; max = 0; result = 0; aver = 0;

	size = 0;

	while (true)
	{
		cin >> num;

		if (num / 1 < 1)
		{
			if (size < 1 ) 
			{
			  cout << "There are no numbers entered." << endl;
			  return 1;
		    }
			break;
		}

		vect.push_back(num);


		size = vect.size();
	}

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

    cin.ignore();
	system("pause");
	return 0;

}
