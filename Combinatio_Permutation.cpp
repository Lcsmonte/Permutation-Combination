#include <iostream>
#include <string>

using namespace std;


double Factorial(int x)
{
	if (x == 0) return 1;

	double x_set = 1;

	for (int i = 1; i <= x; i++)
	{
		x_set *= i;
	}
	return x_set;
}

double Permut(int x, int y)
{
	double Permut_value;

	Permut_value = Factorial(x) / Factorial((x - y));

	return Permut_value;
}

double Combine(int x, int y)
{
	double Combine_value;

	Combine_value = (Factorial(x) / Factorial((x - y))) / (Factorial(y));

	return Combine_value;
}


int main()
{
	int x; // Number of elements of the group
	int y; // Number of elements of the sample
	char input;

	cout << "Please, type the number of elements in the general group and the number os elements in the sample" << endl;
	cin >> x >> y;

	cout << "What you wanna do? (Permute / Combine)" << endl;
	cin >> input;

	switch (input)
	{
	case 'c': case 'C':
		cout << "the Number of possible Combination is : " << Combine(x, y) << endl;
		break;

	case 'p': case 'P':
		cout << "the Number of possible Permutation is : " << Permut(x, y) << endl;
	}

	system("pause");

	return 0;

}