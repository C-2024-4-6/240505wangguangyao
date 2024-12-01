#include <iostream>
#include <string.h>
using namespace std;

void countLetters(const char list[], int counts[])
{
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	for (int j = 0; j < 100; j++)
	{
         if (list[j] >= 'a' && list[j] <= 'z')
		counts[list[j] - 'a']++;
         if (list[j] >= 'A' && list[j] <= 'Z')
		counts[list[j] - 'A']++;
	}
}
void pr(const int counts[])
{
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
	}
}

int main()
{
	char str1[100];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(str1, 100);
	countLetters(str1, counts);
	pr(counts);
	return 0;
}