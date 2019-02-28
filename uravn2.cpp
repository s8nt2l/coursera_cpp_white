#include <iostream>
//#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double d = b * b - (4 * a * c);
    if(d < 0)
        return 0;
    if(!d)
        cout << (double)(-b) / (2 * a);
    else
        cout << (double)(-b + sqrt(d)) / (2 * a) << ' ' << (double)(-b - sqrt(d)) / (2 * a);
    system("pause");
    return 0;
}/*
int x1, y1, x2, y2;
cout << (x1 == x2) ? true : ((y1 == y2) ? true : false);

*/