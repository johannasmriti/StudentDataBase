#include<conio.h>
#include<stdio.h>
#include<dos.h>

struct gpass
{
	char pass[10];
	int year;
};

void main()
{
	char inp='y';
	struct gpass s;
	FILE *fp;
	fp=fopen("gpass.txt","w");
	clrscr();

	while(inp=='y' || inp=='Y')
	{
		printf("\npassword:");
		scanf("%[^\n]s",&s.pass);
		printf("\n year:");
		scanf("%d",&s.year);
		fwrite(&s,sizeof(s),1,fp);
		printf("\n\ndo u wanna enter :");
		scanf("%c",&inp);
	}
	while(fread(&s,sizeof(s),1,fp)==1)
   {
	   printf("%s\n%d\n",s.pass,s.year);
   }

	getch();
}