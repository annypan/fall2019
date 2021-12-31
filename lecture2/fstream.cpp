#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const string filename{"test.txt"};

	ofstream ofs{filename};
	if (!ofs)
		cerr << "oh no" << endl;
	ofs << "test" << endl;

	ifstream ifs{filename};
	if (!ifs)
		cerr << "oh no again" << endl;

	if (string s; ifs >> s)
		cout << s << endl;
	else
		cerr << "nothing to read?" << endl;
}
