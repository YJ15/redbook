#include "studyalgorithm.h"

using namespace std;

void test0501() {
	vector<string> first = { "fishing", "gardening", "swimming", "fishing" };
	vector<string> second = { "hunting", "fishing", "fishing", "biting" };
	printf("%d\n", bestInvitation(first, second));
}

int bestInvitation(vector<string> first, vector<string> second)
{
	map<string, int> answer = map<string, int>();
	for (int i = 0; i < first.size(); i++) {
		answer[first[i]] = 0;
		answer[second[i]] = 0;
	}

	for (int i = 0; i < first.size(); i++) {
		answer[first[i]]++;
		if (first[i] != second[i]) {
			answer[second[i]]++;
		}
	}

	map<string, int>::iterator it2;
	int big = 0;
	for (it2 = answer.begin(); it2 != answer.end(); it2++) {
		big = max(big, it2->second);
	}
	return big;
}