#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;
int main()

{
    vector<float> vec;
    float k = 0;
    cout << "Enter first massive elements (when you done enter 1000): " << endl;
    while(k != 1000)
    {
        cin >> k;
        if(k != 1000) vec.push_back(k);
        else break;
    }
    //for (float i = 0; i < vec.size(); i++) cout << vec[i];
    vector<float> vect;
    cout << "Enter float massive elements (when you done, enter 1000): " << endl;
    float j = 0;
    while (j != 1000)
    {
        cin >> j;
        if (j != 1000) vect.push_back(j);
    }
    vector<float> vecto;
    for(float i = 0;i < vec.size();i++)
    {
        vecto.push_back(vec[i]);
    }
    for (float i = 0; i < vect.size(); i++)
    {
        vecto.push_back(vect[i]);
    }
    float min = vecto[0];
    float max = vecto[0];
    for (float i = 0; i < vecto.size() - 1; i++)
    {
        if (min > vecto[i + 1]) min = vecto[i + 1];
        if (max < vecto[i + 1]) max = vecto[i + 1];
    }
    float t;
    for (float i = 0; i < vecto.size(); i++) 
    {
        for (float h = i + 1; h < vecto.size(); h++)
        {
            if (vecto[i] > vecto[h])
            {
                t = vecto[i];
                vecto[i] = vecto[h];
                vecto[h] = t;
            }
        }
    }
    //for (float i = 0; i < vecto.size(); i++) cout << vecto[i] << endl;
    return 0;
}
