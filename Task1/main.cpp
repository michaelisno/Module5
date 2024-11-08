#include <iostream>
#include <list>
#include <sstream>

using namespace std;

int main()
{
	cout << "Enter a Short Sentence: ";

	string sentence;
	getline(cin, sentence);

	cout << endl;

	list<string> words;

	istringstream stream(sentence);
	string word;

	while (stream >> word)
	{
		words.push_back(word);
	}

	for (list<string>::reverse_iterator it = words.rbegin(); it != words.rend(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}