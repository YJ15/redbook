#include "studyalgorithm.h"

vector<int> digits(int bas) // bas: 진법
{
	vector<int> ans;
	for (int i = 2; i < bas; i++)
	{
		int j;
		for (j = bas; j < 9999; j++) {
			int sum = 0;
			for (int mul = i * j; mul > 0; mul /= bas) {
				sum += mul % bas; // 곱한값 자리수 합
			}

			if ((sum % i) != 0) { break; }
		}
		if (j == 9999) ans.push_back(i);
	}
	return ans;
}

void test0503()
{
	vector<int> v = digits(10);
	cout << "base = 10, return = ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	v = digits(3);
	cout << "base = 3, return = ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	v = digits(9);
	cout << "base = 9, return = ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	v = digits(26);
	cout << "base = 26, return = ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	v = digits(30);
	cout << "base = 30, return = ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
}