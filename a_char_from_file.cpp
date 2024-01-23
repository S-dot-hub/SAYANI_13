#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("Yes.txt","r");
	fscanf(fp,"%c",&ch);
	if(ch=='a'||ch=='A')
	{
		do{
			fscanf(fp,"%c",&ch);
		}while(ch!=' ');
	}
	else
		printf("%c",ch);
	while(1)
	{
		fscanf(fp,"%c",&ch);
		if(feof(fp))
			break;
		if(ch==' ')
		{
			printf("%c",ch);
			fscanf(fp,"%c",&ch);
			if(ch=='a' || ch=='A')
			{
				do{
					fscanf(fp,"%c",&ch);
				}while(ch!=' ');
			}
			else
				printf("%c",ch);
		}
		else
			printf("%c",ch);
	}
	fclose(fp);
}
