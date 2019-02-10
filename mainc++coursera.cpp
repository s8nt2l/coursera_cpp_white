#include <iostream>
#include <vector>
using namespace std;

int Factorial(int x){
	vector <int> a;
	int fectorial=1;
	if(x < 0){
		return 1;
	}

		
	for(int i = 1;i <= x; i++){
		fectorial*=i;
	}
	return fectorial;
	}
	
	


int main() {
	int c;
	cin >> c;
	cout << Factorial(c) << endl;
	
	system("pause");
	return 0;
}
