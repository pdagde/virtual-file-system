#include"12.createfile.h"

char findtype(char file_name[])
{
   	
   struct filesystem FS;
   int inode;

  inode=findinode(file_name);
  
    if(FS.inde[inode].file_type=='f')
    {  
    printf("%c",FS.inde[inode].file_type);
     return 0;
     }

  else if(FS.inde[inode].file_type=='d')
        {
             printf("%c",FS.inde[inode].file_type);	
             return 1; 
         }
}   

