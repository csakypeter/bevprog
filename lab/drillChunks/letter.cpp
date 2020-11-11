#include "std_lib_facilities.h"

int main()
{
	string first_name;
	string friend_name;
	
	char friend_sex = 0;
	
	int age;
	
	cout << "Enter the name of the person you want to write to: ";
	
	cin >> first_name;
	
	cout << "Dear " << first_name << ", " << endl;
	
	cout << "How are you? I am fine. I miss you." << endl;
	
	cout << "Enter another friends name: ";
	
	cin >> friend_name;
	
	cout << "Have you seen " << friend_name << " lately?\n";
	
	cout << "Is the other friend is (m)ale of (f)emale? ";
	
	cin >> friend_sex;
	
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	cout << "Please enter the first friend's age you are writing to: ";

	cin >> age;
	
	if ( age <= 0 || age >= 110)
		simple_error("You're kidding!");
	
	cout << "I heard you just had a birthday and you are " << age << " years old.\n";
	
	if (age < 12)
		cout << "Next year you will be" << age + 1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";
		
	cout << "Your sincerely,\n\n\nPete\n";
	
	return 0;
}
