// Rahmir Brown		Google Home File I/O		5/20/2022        //

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void Strugglebot() {
	fstream f;
	string us, us2;
	char usr_in;
	cout << "Wassup what we doing?, Don't make it too complicated boss. r to Read, w to Write " << endl;
	cin >> usr_in;
	if (usr_in == 'r') {
		f.open("Strugglebot", ios::in);
		string s;
		while (getline(f, s)) {
			cout << s << endl;
		}
		f.close();
	}
	else {
		f.open("Strugglebot", ios::out | ios::in | ios::app);
		cout << "Alright, Talk to me whats the Message?" << endl;
		cout << "Enter a key" << endl;
		cin >> us;
		us.append(" ");
		cout << "Anything else? you sure?" << endl;
		cin >> us2;
		us.append(us2);
		us.append("\n");
		cout << "Ight so remember " << us << endl;
		f << us;
		f.close();
	}
}

int main()
{
	char ui;
	while (true) {
		Strugglebot();
		cout << "Cool we did that. Anything else?? y for yes" << endl;
		cin >> ui;
		if (ui != 'y') {
			break;
		}
	}
}

