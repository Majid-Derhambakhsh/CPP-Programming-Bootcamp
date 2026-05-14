#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	char text[] = "ali@yahoo.com, hoseein@gMail.com, hamid@GMAIL.com, majid@yahoo.com";

	int noYahooMail = 0;
	int noGMail = 0;

	for (size_t i = 0; i < sizeof(text); i++)
	{

		if (text[i] == '@')
		{
			if (tolower(text[i + 1]) == 'y' && \
				tolower(text[i + 2]) == 'a' && \
				tolower(text[i + 3]) == 'h' && \
				tolower(text[i + 4]) == 'o' && \
				tolower(text[i + 5]) == 'o')
			{
				noYahooMail++;
			}

			if (tolower(text[i + 1]) == 'g' && \
				tolower(text[i + 2]) == 'm' && \
				tolower(text[i + 3]) == 'a' && \
				tolower(text[i + 4]) == 'i' && \
				tolower(text[i + 5]) == 'l')
			{
				noGMail++;
			}

		}

	}

	cout << "We Find " << (noYahooMail + noGMail) << " Email." << endl;
	cout << "Yahoo Mail: " << noYahooMail << endl;
	cout << "GMail: " << noGMail << endl;
}
