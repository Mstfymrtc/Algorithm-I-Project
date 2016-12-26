#include <stdio.h>
#include<time.h>


int toup(char str[]) {

	int i;

	for (i = 0; i<49; i++){
	if ((str[i] > 96) && (str[i] < 123)) 
	
		str[i] = str[i] - 32;

		
	}
	printf("Uppercase version of the word: %s", str);
	

}
int actsize(char arr[]) {

	int i;
	for (i = 0; arr[i] != '\0'; i++) {

		
	}
		printf("\nActual size of the word: %d\n", i);
}
int asciilower(char str[]) {

	int i=0,sum=0;
	for ( i = 0; str[i]!=0; i++)
	{
		sum += str[i];
	}
	printf("\nASCII value of the word: %d", sum);
	}
int asciiupper(char str[]) {

	int i = 0, sum = 0;
	for (i = 0; str[i] != 0; i++)
	{
		sum += str[i];
	}
	printf("\nASCII value of the uppercase word: %d", sum);
}
int diffascii(char str[]) {
	
	int i = 0, b=0, a=0, sum = 0, sum2=0;


	for (i = 0; str[i] != 0; i++)
	{
		sum += str[i]; //küçük harfin asciisi

	}
	//büyük harf bulma
	for (a = 0; a < 49; a++) {
		if ((str[a] > 96) && (str[a] < 123))

			str[a] = str[a] - 32;
	}
	// büyük harfi buldu
		for (b = 0; str[b] != 0; b++)
		{
			sum2 += str[b]; //büyük harfin asciisi
	}
		printf("Difference of ascii: %d\n", (sum - sum2));
}
int change(char str[])
{

	srand(time(NULL));


	int i, a, b, c, e, j;
	char d;


	for (c = 0; c < 49; c++) {
		if ((str[c] > 96) && (str[c] < 123))

			str[c] = str[c] - 32;

	}
	
		for (b = 0; str[b] != '\0'; b++)
		{

		}
		e = rand() % b;

		for (j=0; j!=e; j++)
		{
			a = rand() % b;
			// kelimeden a. karakter seçildi

			printf("\n%c", str[a]); // sayý harfe atanacak, 

			d = rand() % (58) + 65; //yeni atanacak karakter



			if ((d >= 65 && d <= 90))
			{
				str[a] = d;
				printf("\n%c", str[a]);
				printf("\n%s\n", str);
			}

			else {
				printf("\nthe char is not an uppercase\n");
			}
		}
		/*printf("sayiniz %d karakterli", b); //sayý kaç karakterli?*/


		
	
	//büyük harfe çevrildi


	

}


int main(){
	
	int i,a,c,d;
	char word[11],word2[11],word3[11], word4[11], word5[11];
    beginning:
	printf("Enter a word <max. 10 characters>:\n");
	
	gets(word);
	
	
	

	

	for ( i = 0; i <= 11; i++)
	{
		word2[i] = word[i];
		
	}

	for (a = 0; a <= 11; a++)
	{
		word3[a] = word[a];

	}

	for (c = 0; c <= 11; c++)
	{
		word4[c] = word[c];

	}

	for (d = 0; d <= 11; d++)
	{
		word5[d] = word[d];

	}
	toup(word);
	asciilower(word2);
	asciiupper(word);
	actsize(word3);
	diffascii(word4);
	change(word5);
	printf("==============================================\n");
	goto beginning;
	
	system("PAUSE");
}