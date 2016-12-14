#include"10.cd.h"

void pwd(int inode)
{
   int i,j,n=0;
  if(inode!=0)
   {
      for(i=0;i<50;i++)
       {
         if(FS.parent[i].child_inode==inode)
           {
           
 		  if(FS.derectory[i].inode_no==inode)
                   {
                      printf("%s/",FS.derectory[i].file_name);
                   }
               
               n++;
               pwd(FS.parent[i].parent_inode);
           }
          
        }
     
    }
 
}
