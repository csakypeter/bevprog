#include "std_lib_facilites.h"

int main()
{
	string first_name, friend_name;
	char friend_sex = 0;
	int age;

	cout << "Enter the name of the person you want to write to and their age:\n";
	cin >> first_name >> age;

	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");

	cout << "Enter the name of another friend and their sex (m/f):\n";
	cin >> friend_name >> friend_sex;

	cout << "Dear " << first_name << ",\nHow are you?\nI am fine. I miss you.\n";

	cout << "Have you seen " << friend_name << " lately?\n";

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n\nPete";

	return 0;
}
