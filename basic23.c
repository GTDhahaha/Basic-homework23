#include <stdio.h>
int main(void)
{
	char word[80];
FILE *fp=fopen("data.txt","r");
fscanf(fp,"%s",word);
printf("%s",word);
fclose(fp); 
return 0;
}
