#include "std_lib_facilities.h"

int main()
{
	vector<string> words;

	for (string temp; cin >> temp; ) // crtl+z-vel tudjuk megszakítani ezt a loopot
		words.push_back(temp);

	cout << "Number of words:" << words.size() << endl;

	sort(words);

	for (string word : words) // ch 20-21 ez a dolog
		cout << word << endl;

	return 0;
}