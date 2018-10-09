#include "studyalgorithm.h"
#include "string"
using namespace std;

void test0501() {
	vector<string> first = { "fishing", "gardening", "swimming", "fishing" };
	vector<string> second = { "hunting", "fishing", "fishing", "biting" };
	printf("%d\n", bestInvitation(first, second));
}

int bestInvitation(vector<string> first, vector<string> second)
{
	map<string, int> answer = map<string, int>();
	//for (int i = 0; i < first.size(); i++) {
	//	answer[first[i]] = 0;
	//	answer[second[i]] = 0;
	//}

	for (int i = 0; i < first.size(); i++) {
		answer[first[i]]++;
		if (first[i] != second[i]) {
			answer[second[i]]++;
		}
	}

	map<string, int>::iterator it;
	int big = 0;
	for (it = answer.begin(); it != answer.end(); it++) {
		big = max(big, it->second);
	}


	it = answer.begin();
	while (it != answer.end()) {
		cout << (*it).first << " " << (*it).second << endl;
		it++;
	}

	return big;
}