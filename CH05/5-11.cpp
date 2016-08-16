#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
	char ch;
	while(cin >> std::noskipws >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newlineCnt;
			break;
		}
	}
	cout << "Number of vowel a(A): \t" << aCnt << '\n'
	     << "Number of vowel e(E): \t" << eCnt << '\n'
	     << "Number of vowel i(I): \t" << iCnt << '\n'
	     << "Number of vowel o(O): \t" << oCnt << '\n'
	     << "Number of vowel u(U): \t" << uCnt << '\n'
	     << "Number of space: \t" << spaceCnt << '\n'
	     << "Number of tab char: \t" << tabCnt << '\n'
	     << "Number of new line: \t" << newlineCnt << '\n';

	return 0;
}