/* FSEEK () :- it can move the coursor back or forward from begining or end .
	ftell() :- it can display the current position of the coursor .
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *fp;
	char ch;
	fp=fopen("K:\\Cfiles\\devcpp\\am.txt","r");
	if(fp==NULL)
	{
		printf("File opening error");
		getch();
		exit(1);
	}
	fseek(fp,10,SEEK_SET);
	ch=fgetc(fp);
	printf("Position is %d\n",ftell(fp));
	printf("character is %c\n",ch);
	fseek(fp,-2,SEEK_CUR);
	ch=getc(fp);
	printf("position is %d\n ",ftell(fp));
	printf("Character is %c\n",ch);
	fseek(fp,-4,SEEK_END);
	ch=getc(fp);
	printf("position is %d\n ",ftell(fp));
	printf("Character is %c\n",ch);
	fclose(fp);
}// 60711724640007 42
//11/18
//591	510957
