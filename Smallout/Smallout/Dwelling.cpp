#include <iostream>
using namespace std;
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <limits>
enum RESOURCES{WATER, FOOD, ELEC, STIM, MED, SPACE};



class Rooms {
public:
	void initRoom(int resource, int size, int level);
	void collectRoom(int resource, int amount, int time);
private:
	int resourcetype;
	int roomsize;
	int roomlevel;
	int resourcesize;
	int turns;
};
class people {
public:
	void initPerson(string fname, string lname, int health, int str, int per, int intel, int agi, int luc, bool gen);
private:
	string firstname;
	string lastname;
	int hp;
	int strength;
	int perception;
	int intelligence;
	int agility;
	int luck;
	bool gender;
};
int main() {
	bool doexit = false;
	srand(time(NULL));
	string input;
	ofstream writefile;
	ifstream readfile;
	vector<string>fnames;
	fnames.push_back("Marilyn");
	fnames.push_back("Henry");
	fnames.push_back("Amber");
	fnames.push_back("Anna");
	fnames.push_back("Brandon");
	fnames.push_back("Brittany");
	fnames.push_back("Doris");
	fnames.push_back("Istvan");
	fnames.push_back("Jessica");
	fnames.push_back("Jose");
	fnames.push_back("Keith");
	fnames.push_back("Margaret");
	fnames.push_back("Mark");
	fnames.push_back("Paul");
	fnames.push_back("Raymond");
	fnames.push_back("Roy");
	fnames.push_back("Susan");
	fnames.push_back("Teresa");
	fnames.push_back("Veronique");
	fnames.push_back("Virginia");

	vector<string>lnames;
	lnames.push_back("Powell");
	lnames.push_back("Stewart");
	lnames.push_back("Foster");
	lnames.push_back("Rice");
	lnames.push_back("Warner");
	lnames.push_back("Fisher");
	lnames.push_back("White");
	lnames.push_back("Jenkins");
	lnames.push_back("Hart");
	lnames.push_back("Snyder");
	lnames.push_back("Payne");
	lnames.push_back("Ross");
	lnames.push_back("Miller");
	lnames.push_back("Graham");
	lnames.push_back("Henriquez");
	lnames.push_back("Cox");

	
	cout << "Welcome to Smallout Better!" << endl;
	cout << "Do you have a file?" << endl;
	getline(cin, input);
	if (input.compare("no") == 0) {
		cout << "If that's the case, I'll get a new file ready for you." << endl;
		writefile.open("Save", ios::trunc);
	}
	else if (input.compare("yes") == 0) {
		cout << "Ok, here's your vault then:" << endl;
		readfile.open("Save");
	}

	
}