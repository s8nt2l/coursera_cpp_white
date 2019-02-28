#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> a{1, 2, 3, 4, 5, 6};
    int d = 3;
    auto c = find(a.begin(), a.end(), d);    
    system("pause");
    return 0;
}