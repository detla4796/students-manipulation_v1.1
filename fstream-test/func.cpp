#include "func.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void input(string** a, int n)
{
    for (int i = 1; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4] >> a[i][5];
    }
}

void output(string** a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
        cout << endl;
    }
}

void find_group(string** a, int n)
{
    string group;
    cout << "Enter the group: ";
    cin >> group;
    string fname = group + ".txt";
    ofstream f(fname);
    for (int i = 0; i < n; i++)
    {
        if (a[i][2].find(group) != -1)
        {
            f << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
            f << endl;
        }
    }
}

void find_age(string** a, int n)
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    string fname = to_string(age) + ".txt";
    ofstream f(fname);
    for (int i = 1; i < n; i++)
    {
        if (stoi(a[i][1]) > age)
        {
            cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
            cout << endl;
        }
        else if (stoi(a[i][1]) < age)
        {
            cout << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
            cout << endl;
        }
    }
}

void find_marks(string** a, int n)
{
    cout << "Students with marks above 3: " << endl;
    string fname = "above_3.txt";
    ofstream f(fname);
    for (int i = 1; i < n; i++)
    {
        if (stoi(a[i][3]) > 3)
        {
            f << "RPM: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3];
            f << endl;
        }
        if (stoi(a[i][4]) > 3)
        {
            f << "Test: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
            f << endl;
        }
        if (stoi(a[i][5]) > 3)
        {
            f << "Math: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][5];
            f << endl;
        }
    }
}

void find_avg(string** a, int n)
{
    cout << "Students with high average scores in individual subjects: " << endl;
    string fname = "avg_points.txt";
    ofstream f(fname);
    for (int i = 1; i < n; i++)
    {
        if (stoi(a[i][3]) > 4)
        {
            f << "RPM: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3];
            f << endl;
        }
        if (stoi(a[i][4]) > 4)
        {
            f << "Test: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
            f << endl;
        }
        if (stoi(a[i][5]) > 4)
        {
            f << "Math: " << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][5];
            f << endl;
        }
    }
    cout << "Students with a high test score and a low RPM score: " << endl;
    for (int i = 1; i < n; i++)
    {
        if (stoi(a[i][4]) > 4 && stoi(a[i][3]) < 4)
        {
            f << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][4];
            f << endl;
        }
    }
}

void find_avgall(string** a, int n)
{
    cout << "Students with a high average score across all subjects: " << endl;
    string fname = "avg_for_all_points.txt";
    ofstream f(fname);
    for (int i = 1; i < n; i++)
    {
        if ((stoi(a[i][3]) + stoi(a[i][4]) + stoi(a[i][5])) / 3 > 4)
        {
            f << a[i][0] << "\t" << a[i][1] << "\t" << a[i][2] << "\t" << a[i][3] << "\t" << a[i][4] << "\t" << a[i][5];
            f << endl;
        }
    }
}

int from_file(string fname)
{
    int k = 0;
    string s;
    ifstream f(fname);
    if (!f.is_open())
    {
        return 0;
    }
    else
    {
        while (getline(f, s))
        {
            k++;
        }
        f.close();
        return k;
    }
}

void input_from_file(string** a, int n, string fname)
{
    ifstream f(fname);
    for (int i = 1; i < n; i++)
    {
        f >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4] >> a[i][5];
    }
    f.close();
}
