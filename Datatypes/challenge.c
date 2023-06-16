/*
Write a program to display the following menu, using only one printf.

                MENU
- - - - - - - - - - - - - - - - -  - - - - -
1- WordPerfect.
2- Lotus 1_2_3.
3- dBASE IV.
4- AutoCAD.
- - - - - - - - - - - - - - - - -  - - - - -
Press the required number:
*/
#include <stdio.h>
int main()
{
	char *a, *b, *c, *d,*e, *f, *g, *h;
	a = "                        MENU";
	g = "- - - - - - - - - - - - - - - - -  - - - - -";
	h = "- - - - - - - - - - - - - - - - -  - - - - -";
	b = "WordPerfect.";
	c = "Lotus 1_2_3.";
	d = "dBASE IV.";
	e = "AutoCAD.";
	f = "Press the required number:";
	printf("\n%s\n%s\n1- %s\n2- %s\n3- %s\n4- %s\n%s\n%s\n",a,h,b,c,d,e,g,f);
	return 0;
}

