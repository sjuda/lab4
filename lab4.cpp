#include <iostream>
#include <stdio.h>
#include "stdafx.h"
#include <vector>

using namespace std;
int main()

{
    vector<double> vec;
    double k = 0;
    cout << "Enter first massive elements (when you donevalue biggest than 1000): "  << endl;
    do
    {
        cin >> k;
        vec.push_back(k);
    }

    while (k < 1000);
    vector<double> vect;
    cout << "Enter double massive elements (when you done, enter value biggest than 1000): " << endl;
    double j = 0;
    do
    {
        cin >> j;
        vec.push_back(j);
    }
    while (j < 1000);
    vector<double> vecto;
    unsigned int b = 0;
    do
    {
        vecto.push_back(vec[b]);
        b++;
    }
    while (b < vec.size());
    unsigned int c = 0;
    do
    {
        vecto.push_back(vect[c]);
        c++;
    }
    while (c < vect.size());
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
    do
    {
        cout<< g << " element is: " << vecto[g];
        g++;
    }
    while (g < vecto.size());
    return 0;
}
