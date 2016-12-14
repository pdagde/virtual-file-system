 #include"7.getinode.h"

int findinode(char name[])
{
  FILE *fp;
   int i,j;
    for(i=1;i<50;i++)
      {
              
        j=strcmp(FS.derectory[i].file_name,name);
           
         if(j==0)
          {
           return FS.derectory[i].inode_no;
           printf("&&%d&&",FS.derectory[i].inode_no);
           }
      }
}

