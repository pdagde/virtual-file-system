#include"6.create_dir.h"

 
int get_inode(char *file_name,int type)
{
   time_t t1;
   char* t;
   int i;
   t = ctime(&t1);
     
   for(i=0;i<50;i++)
   {
       
      if(FS.inde[i].links==0 )
      {
       
        FS.inde[i].inode_no = i;
        FS.inde[i].ref_count = 1;
        FS.inde[i].accessed_time = t;
	FS.inde[i]. modification_time = t;
	FS.inde[i].creation_time = t;
	FS.inde[i].links = 1;
        FS.inde[i].size = 0;
        FS.inde[i].type_permission = 7;
        strcpy(FS.inde[i].file_name,file_name);
        if(type == 1)
	   FS.inde[i].file_type = 'd';
	else
           FS.inde[i].file_type = 'f';   
                
        break;
      }
   }
   return i;
}


