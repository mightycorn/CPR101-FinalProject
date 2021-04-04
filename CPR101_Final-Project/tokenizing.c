#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing()
{
	printf("*** Start of Tokenizing Words ***\n");
	char words[200];
	char* word;
	int w_counter;
	while (TRUE)
	{
		printf("Type a few words separated by space(1 - to quit):\n");
		gets(words);
		if (strcmp(words, "q") == 0) break;
		word = strtok(words, " ");
		w_counter = 1;


		while (word)
		{
			printf("Words #%d is \'%s\'\n", w_counter++, word);
			// scan from the end of the previous token
			word = strtok(NULL, " ");
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
}