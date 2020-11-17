#include "../std_lib_facilities.h"

int main()
{
	int birth_year = 1998;
	int a, b, c, d;

	cout << showbase << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(hexadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";

	cout << noshowbase << dec << 22 << endl;

	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << endl;

	float number = 1234567.89;

	cout << number << "\t(defaultfloat)\n"
		<< fixed << number << "\t(fixed)\n"
		<< scientific << number << "\t(scientific)\n";

	cout << '\n' << setw(10) << "Csáky" << setw(10) << "Péter" << setw(15) << "06201235678" << setw(24) << "cs.peti.98@chello.hu\n"
		<< setw(11) << "Borbás" << setw(10) << "András" << setw(14) << "06201235678"  << setw(22) << "beepboop@gmail.com\n"
		<< setw(10) << "Szűcs" << setw(10) <<"Valter" << setw(14) << "06201235678"  << setw(28) << "valamivalter@example.com\n"
		<< setw(10) << "Mondok" << setw(8) << "Bence" << setw(15) << "06201235678"  << setw(33) << "benceee1245@mailbox.unideb.hu\n"
		<< setw(11) << "Fazekas" << setw(8) << "Attila" << setw(14) << "06201235678"  << setw(24) << "f.ati.1999@valami.hu\n"
		<< setw(12) << "Ladányi" << setw(9) << "Balázs" << setw(14) << "06201235678"  << setw(27) << "lada.balazs@freemail.hu\n";

	return 0;
}