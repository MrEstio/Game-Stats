#include <iostream>
using namespace std;
int main()
{
	int score;
	double distance;
	char playAgain;
	bool shielsdUp;
	short lives, aliensKilled;
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shielsdUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;
	cout << "\nscore: " << score << endl;
	cout << "\ndistance: " << distance << endl;
	cout << "\nplayAgaing: " << playAgain << endl;
	cout << "\naliensKilled: " << aliensKilled << endl;
	cout << "\nlives: " << lives << endl;
	cout << "\nengineTemp: " << engineTemp << endl;
	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus" << bonus << endl;
	return 0;
}
