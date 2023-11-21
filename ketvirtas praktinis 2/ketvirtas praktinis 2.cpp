#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;


int main() {
	string vardas[99];
	string pavarde[99];
	double salary[99];
	double didis[99];
	double newsalary[99];
	int n=1;
	ifstream fd("duom.txt");
	while ( fd >> vardas[n] >> pavarde[n] >> salary[n] >> didis[n]) {
		newsalary[n] = salary[n] + ((salary[n] / 100) * didis[n]);
		n++;
	}
	fd.close();
	ofstream rezult("newSalary.txt");
	for (int i = 1; i < n; i++) {
		rezult << fixed << setprecision(2) << vardas[i] << " " << pavarde[i] << " " << newsalary[i] << endl;
	}
	rezult.close();

	return 0;
}