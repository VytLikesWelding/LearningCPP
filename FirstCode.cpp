#include <iostream>
#include <fstream>

using namespace std;
int main(){
	
	int a;
	ifstream fin("duomenys.txt");
	
	fin >> a;
	cout<< "\n" << a << "\n";
	
	fin.close();
	return 0;
}
