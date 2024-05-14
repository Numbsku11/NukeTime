#include <iostream>
#include <windows.h>

using namespace std;

int kill = 0;
int main(){

	cout << "You have fallen for the great trick\n"
			<< "This machine shall shutdown in 120 seconds\n"
			<< "Unless you know how to abort it\n"
			<< "Then I guess you win\n\n";

	system("shutdown /s /t 120");
	Sleep(10000);
	system("shutdown /a");
	cout << "Nah just fuckin' with ya\n"
			<< "This has been an epic troll\n\n"
			<< "Just type 1 to kill the program\n\n";
	cin >> kill;
	cout << endl;

	do
	{
		if (kill == 1)
	{
		return 0;
	}
else {
	kill -= kill;
	cout << "It is quite literally one fucking key on your fucking keyboard\n"
						<< "Are you that much of a mentally handicapped retard that the action of pressing one key is a struggle?\n"
						<< "It's amazing darwinism didn't wipe you at by the age of 5\n"
						<< "Anyway's lets try this again\n\n"
						<< "Type 1 to kill the program\n\n";
				cin >> kill;
}
	} while(kill != 1);
	return 0;
}
