#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "func.h"
using namespace std;

int main()
{
    int r = 0;
    int cnt = 0;
    cout << "Fill in the data manually or from a file? (1 - manually, 2 - from a file): ";
    cin >> r;
    if (r == 1)
    {
        cin >> cnt;
        cnt++;
        string** students = new string * [cnt];
        for (int i = 0; i < cnt; i++)
        {
            students[i] = new string[6];
        }
        students[0][0] = "Name";
        students[0][1] = "Age";
        students[0][2] = "Group";
        students[0][3] = "RPM";
        students[0][4] = "Test";
        students[0][5] = "Math";
        input(students, cnt);
        output(students, cnt);
    }
    if (r == 2)
    {
        string fname;
        cout << "Enter the file name: ";
        cin >> fname;
        cnt = from_file(fname) + 1;
        string** students = new string * [cnt];
        for (int i = 0; i < cnt; i++)
        {
            students[i] = new string[6];
        }
        students[0][0] = "Name";
        students[0][1] = "Age";
        students[0][2] = "Group";
        students[0][3] = "RPM";
        students[0][4] = "Test";
        students[0][5] = "Math";
        input_from_file(students, cnt, fname);
        output(students, cnt);
        find_group(students, cnt);
        find_age(students, cnt);
        find_marks(students, cnt);
        find_avg(students, cnt);
        find_avgall(students, cnt);
    }
}
