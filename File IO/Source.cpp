// Rahmir Brown		Google Home File I/O		5/20/2022        //

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void myGoogle() {
	fstream f;
	string us, us2;
	char usr_in;
	cout << "What what you like Google Home to do? r to Read, w to Write" << endl;
	cin >> usr_in;
	if (usr_in == 'r') {
		f.open("googleHome", ios::in);
		string s;
		while (getline(f, s)) {
			cout << s << endl;
		}
		f.close();
	}
	else {
		f.open("googleHome", ios::out | ios::in | ios::app);
		cout << "Lets make some string pairs" << endl;
		cout << "Enter a key" << endl;
		cin >> us;
		us.append(" ");
		cout << "Enter a value" << endl;
		cin >> us2;
		us.append(us2);
		us.append("\n");
		cout << "Your key value pair is " << us << endl;
		f << us;
		f.close();
	}
}

int main()
{
	char ui;
	while (true) {
		myGoogle();
		cout << "do you want to continue? y for yes" << endl;
		cin >> ui;
		if (ui != 'y') {
			break;
		}
	}
}

