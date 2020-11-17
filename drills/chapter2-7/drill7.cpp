
/*
	calculator08buggy.cpp
	Helpful comments removed.
	We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

#include "../std_lib_facilities.h"

class Token {
public:
	char kind;
	double value;
	string name;
	Token(char ch) : kind(ch), value(0) { }
	Token(char ch, double val) : kind(ch), value(val) { }
	Token(char ch, string n) : kind(ch), name(n) { }
};

class Token_stream {
private:
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { }

	Token get();
	void unget(Token t) { buffer = t; full = true; }

	void ignore(char c);
};

constexpr char let = 'L';
constexpr char quit = 'Q';
constexpr char print = ';';
constexpr char number = '8';
constexpr char name = 'a';
constexpr char square_root = '@';
constexpr char power = '^';

const string letKey = "#";
const string sqrtKey = "sqrt";
const string powKey = "pow";
const string quitKey = "exit";

Token Token_stream::get()
{
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch;
	switch (ch) {
	case '#':
		return Token(let);
	case '(':	case ')':	case '+':	case '-':	case '*':
	case '/':	case '%':	case ';':	case '=':	case ',':
		return Token(ch);
	case '.':	case '0':	case '1':	case '2':	case '3':	case '4':
	case '5':	case '6':	case '7':	case '8':	case '9':
	{	cin.unget();
	double val;
	cin >> val;
	return Token(number, val);
	}
	default:
		if (isalpha(ch))
		{
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s += ch;
			cin.unget();
			if (s == letKey) return Token(let);
			else if (s == quitKey) return Token(quit);
			else if (s == sqrtKey) return Token(square_root);
			else if (s == powKey) return Token(power);
			return Token(name, s);
		}
		error("Bad token");

		return -1;
	}
}

void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double calculate_sqrt()
{
	char ch;
	if (cin.get(ch) && ch != '(') error("'(' expected");
	cin.unget();

	double d = expression();
	if (d < 0) error("square root: negative value");

	return sqrt(d);
}

double calculate_pow()
{
	Token t = ts.get();
	if (t.kind != '(') error("'(' expected");

	double d = expression();

	t = ts.get();
	if (t.kind != ',') error("',' expected");

	int i = narrow_cast<int>(expression());

	t = ts.get();
	if (t.kind != ')') error("')' expected");

	return pow(d, i);
}

double primary()
{
	Token t = ts.get();
	switch (t.kind)
	{
		case '(':
		{
			double d = expression();
			t = ts.get();
			if (t.kind != ')') error("')' expected");
			return d;
		}
		case '-':
			return -primary();
		case number:
			return t.value;
		case square_root:
			return calculate_sqrt();
		case power:
			return calculate_pow();
		case name:
			return get_value(t.name);
		default:
			error("primary expected");
			return -2;
	}
}

double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			break;
		}
		case '%':
		{
			double d = primary();
			if (d == 0) error("%: zero divider");
			left = fmod(left, d);
			break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
{
	double left = term();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

double declaration()
{
	Token t = ts.get();
	if (t.kind != name) error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (cin)
	try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()

try {
	names.push_back(Variable("k", 1000));

	calculate();
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}