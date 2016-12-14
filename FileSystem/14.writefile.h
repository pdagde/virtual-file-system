#include"13.fintipe.h"


void writeinfile(char file[])

{
  struct filesystem FS;
  char *string;
  int inode1;
	string=(char *)malloc(sizeof(char)*100);
  printf("enter the content write in file\n");
   gets(string);
  inode1=findinode(file);
   FS.block[inode1].status=1;
   strcpy(FS.block[inode1].data,string);
   FS.block[inode1].inode=inode1;
     
}
