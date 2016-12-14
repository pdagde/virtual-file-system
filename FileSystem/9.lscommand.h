#include"8.findcurr_inode.h"

void lscomd(int par_inode)

{
   int i;
   printf(".\n");
   printf("..\n");
  for(i=0;i<10;i++)
 {
   if(FS.parent[i].parent_inode==par_inode)
     {
      printf("%s\n",FS.derectory[i].file_name);
     }
 }
}
