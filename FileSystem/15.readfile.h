#include"14.writefile.h"

void readfile(char file_name[],int inode)
{
 
 char *string;
 string=(char *)malloc(sizeof(char)*100);

 printf("%d\n",inode);
 
	printf("\n%s\n",FS.block[inode].data);
 
}
