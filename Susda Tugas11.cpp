/* Praktikum Minggu 2 */
/* Program Kalimat Palindrom */
/* Rizka Nurul Septiani Hakim_20051397026_2020B_MI */

#include <stdio.h>
#include <conio.h>
#include <string.h>

char balik(char x[50]);

char cek(char y[50],char z[50]);

int main()

{
	char m[50],o[50];
	printf("kalimat : ");
	gets(m);
	strcpy(o,m);
	balik(o);
	cek(m,o);
	getch();
	
	printf("kalimat : ");
	gets(m);
	strcpy (o,m);
	balik(o);
	cek(m,o);
	getch();
	
}


char balik(char x[50])

{
	
	strrev(x);
		
}

char cek(char y[50],char z[50])

{
		if(strcmp(y,z)==0)
	{
		
		printf("\nKalimat tersebut adalah palindrom\n\n");
		
	}

else

{
	printf("\nKalimat tersebut bukan palindrom\n\n");
	
}
	
}


