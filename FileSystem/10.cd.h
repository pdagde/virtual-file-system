#include"9.lscommand.h"	
			
			
int findcd(int inode)	
  {
    int i;
   for(i=0;i<50;i++)
     {
      if(FS.parent[i].parent_inode==inode)
        {
          return FS.parent[i].child_inode;
          break;
        }
      }
		
  } 
