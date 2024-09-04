#include <iostream>
#include <vector>
#include <sstream>
#include <string>


using namespace std;


/*
Напишите функцию, которая принимает вектор целых чисел и целое число n+,
на которое надо увеличить все элементы вектора.
Функция должна вернуть измененный вектор.
*/

void IncreesVector(vector<int>& Vec, int n) 
{


	for (int& element : Vec)
	{
		element += n;
	}
	
	
	for (int element : Vec)
	{
		cout << element<<" ";
		
	}
	cout << endl;
	
}


int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> Vec;
	string input;

	cout << "Введите числа:\n";
	getline(cin, input);

	istringstream iss(input);
	string word;

	while (iss >> word)
	{
		int number = stoi(word);
		Vec.emplace_back(number);
	}

	cout << "Введите число:\n";

	int plus;
	cin >> plus;

	for (auto str : Vec)
	{
		cout << str<< " ";
	}
	cout << endl;

	IncreesVector(Vec, plus);


	
}