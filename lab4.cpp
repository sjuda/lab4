#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;
int main()

{
	vector<double> vec;
	double k = 0;
	cout << "Enter first massive elements (when you donevalue biggest than 1000): " << endl;
	for (int i = 0; k < 1000; i+=1);
	{
		std::cin >> k;
		vec.push_back(k);
	}

	vector<double> vect;
	cout << "Enter double massive elements (when you done, enter value biggest than 1000): " << endl;
	double j = 0;
	for (int i = 0; j < 1000; i++);
	{
		cin >> j;
		vec.push_back(j);
	}

	vector<double> vecto;
	unsigned int b = 0;
	while (b < vec.size());
	{
		vecto.push_back(vec[b]);
		b++;
	}

	unsigned int c = 0;
	for (int i = 0; c < vect.size();i++);
	{
		vecto.push_back(vect[c]);
		c++;
	}

	unsigned int z = 0;
	for (int w = 0; z + 1 < vecto.size(); w++)
	{
		if (vecto[z] < vecto[z + 1])
		{
			double vr = vecto[z];
			vecto[z] = vecto[z + 1];
			vecto.push_back(vr);
			z++;
		}
	}
	unsigned int g = 0;
	for (int i = 0; g < vecto.size(); i++);
	{
		cout << g << " element is: " << vecto[g];
		g++;
	}

	return 0;
}
