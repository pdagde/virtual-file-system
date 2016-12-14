#include"2.start.h"

void root(FILE *fn1)
{
  struct filesystem FS;
  
     time_t t1;
     char* t;
	int i;
      t = ctime(&t1);
     

        FS.inde[0].inode_no=0;
	FS.inde[0].ref_count=1;
        FS.inde[0].accessed_time=t;
	FS.inde[0]. modification_time=t;
	FS.inde[0].creation_time=t;
	FS.inde[0].links=1;
        FS.inde[0].size=1024;
        FS.inde[0].type_permission='7';
	FS.inde[0].file_type='d';


      fseek(fn1,FS.inde[0].file_block_position,SEEK_SET);

        

        FS.derectory[0].inode_no = 0;
        strcpy(FS.derectory[0].file_name,"root");

        fprintf(fn1,"%d%s",FS.derectory[0].inode_no,FS.derectory[0].file_name);
          fprintf(fn1,"%s,%d",FS.derectory[0].file_name,FS.derectory[0].inode_no); 
 
}


