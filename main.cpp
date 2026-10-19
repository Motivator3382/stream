#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string path;
	cout << "Type path to the file -> ";
	cin >> path;

	char buffer;

	int count_open = 0;
	int count_close = 0;

	ifstream in(path, ios::in);
	if (in) {
		while (in >> buffer)
		{			
			if (buffer == '<') {
				count_open++;
			}
			else if (buffer == '>') {
				count_close++;
			}
		}
	}
	in.close();
	if (count_open != count_close) {
		cout << "There is an error in your file\n";
	}
	else {
		cout << "Errors weren't found\n";
	}
	return 0;
}
