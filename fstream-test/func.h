#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void input(string** a, int n);
void output(string** a, int n);
void find_group(string** a, int n);
void find_age(string** a, int n);
void find_marks(string** a, int n);
void find_avg(string** a, int n);
void find_avgall(string** a, int n);
int from_file(string fname);
void input_from_file(string** a, int n, string fname);