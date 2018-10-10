#include "studyalgorithm.h"

long long encryphotography(vector<int> numbers)
{
	long long ans = 0;
	for (int i = 0; i < numbers.size(); i++) {
		numbers[i]++;
		long long multi = 1;
		for (int j = 0; j < numbers.size(); j++) {
			multi *= numbers[j];
		}
		ans = max(ans, multi);
		numbers[i]--;
	}
	return ans;
}
long long encryphotography_upgrade(vector<int> numbers)
{
	sort(numbers.begin(), numbers.end());
	numbers[0]++;

	long long ans = 1;
	for (int i = 0; i < numbers.size(); i++) {
		ans *= numbers[i];
	}
	return ans;
}


void test0502()
{
	cout << encryphotography_upgrade({ 1, 2, 3 }) << endl;
	cout << encryphotography_upgrade({ 1, 3, 2, 1, 1, 3 }) << endl;
	cout << encryphotography_upgrade({ 1000, 999, 998, 997, 996, 995 }) << endl;
	cout << encryphotography_upgrade({ 1, 1, 1, 1 }) << endl;
}