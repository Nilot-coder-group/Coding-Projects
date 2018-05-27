#include<stdio.h>
main()
{
	char letter;
	printf("type a letter \n");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':
			if(letter =='a'||letter =='A')
			{
			printf("letter is a vowel \n");
			}
			break;
		case 'e':
			if(letter =='e'||letter =='E')
			{
			printf("letter is a vowel \n");
			}
			break;
		case 'i':
			if(letter =='i'||letter =='I')
			{
			printf("letter is a vowel \n");
			}
			break;
		case 'o':
			if(letter =='o'||letter =='O')
			{
			printf("letter is a vowel \n");
			}
			break;
		case 'u':
			if(letter =='u'||letter =='U')
			{
			printf("letter is a vowel \n");
			}
			break;
		default:
			{
			printf("letter is a consonant \n");
			}
	}
}	