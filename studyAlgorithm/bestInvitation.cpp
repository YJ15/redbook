#include "studyalgorithm.h"
#include "string"

int bestInvitation(vector<string> first, vector<string> second)
{
	map<string, int> dic = map<string, int>();	
	for (int i = 0; i < first.size(); i++) {
		dic[first[i]]++;
		if (first[i] != second[i]) {
			dic[second[i]]++;
		}
	}

	map<string, int>::iterator it;
	int answer = 0;
	for (it = dic.begin(); it != dic.end(); it++) {
		answer = max(answer, it->second);
	}
	/*it = answer.begin();
	while (it != answer.end()) {
		cout << (*it).first << " " << (*it).second << endl;
		it++;
	}*/
	return answer;
}

void test0501() {
	vector<string> first = { "fishing", "gardening", "swimming", "fishing" };
	vector<string> second = { "hunting", "fishing", "fishing", "biting" };
	printf("%d\n", bestInvitation(first, second));
}
