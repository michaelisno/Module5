#include <iostream>
#include <vector>
#include <random>

using namespace std;

void populateVector(vector<int>& randomIntegers);
void bubbleSort(vector<int>& randomIntegers);

int main()
{
	vector<int> randomIntegers = {};
	populateVector(randomIntegers);

	cout << "Unsorted Vector: " << endl;

	for (int i = 0; i < randomIntegers.size(); i++)
	{
		cout << randomIntegers[i];

		if (i < 9)
			cout << ", ";
	}

	cout << endl << endl << "Ascending (a) or Descending (d): ";

	string choice;
	cin >> choice;

	bubbleSort(randomIntegers);

	if (choice == "d")
		reverse(randomIntegers.begin(), randomIntegers.end());

	cout << endl << "Sorted Vector: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << randomIntegers[i];

		if (i < 9)
			cout << ", ";
	}

	cout << endl;

	return 0;
}

void populateVector(vector<int>& randomIntegers)
{
	for (int i = 0; i < 10; i++)
	{
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distrib(1, 100);

		int randomNumber = distrib(gen);
		randomIntegers.push_back(randomNumber);
	}
}

void bubbleSort(vector<int>& randomIntegers)
{
	for (int i = 0; i < randomIntegers.size() - 1; ++i)
	{
		for (int j = 0; j < randomIntegers.size() - i - 1; ++j)
		{
			if (randomIntegers[j] > randomIntegers[j + 1])
			{
				swap(randomIntegers[j], randomIntegers[j + 1]);
			}
		}
	}
}