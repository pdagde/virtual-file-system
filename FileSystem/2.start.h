#include "1.struct.h"
#include<time.h>

struct filesystem FS;

  void inodstart()
  {
    int i;
    for(i=0;i<50;i++)
      {


	char *t;
        time_t t1;
	t1=time(NULL);
	t=ctime(&t1);

	FS.inde[i].inode_no=i;
        FS.inde[i].file_name[20]='\0';
	FS.inde[i].ref_count=0;
        FS.inde[i].accessed_time=t;
	FS.inde[i]. modification_time=t;
	FS.inde[i].creation_time=t;
	FS.inde[i].links=0;
        FS.inde[i].size=0;
        FS.inde[i].type_permission='7';
	FS.inde[i].file_type='0';
        FS.inde[i].file_block_position=0;
      }
  }

  void superstart()
    {
      FS.super.size_of_fs=0;
      FS.super.no_of_free_blocks=960;			
      FS.super.next_free_block=960;  			 						
      FS.super.no_of_free_inode=960; 			
      FS.super.next_free_inode=960;  				
    }
  

  void startdirectory() 
{ 
   int i;
       for(i=0;i<50;i++)
     {	
        FS.derectory[i].inode_no=0;
        FS.derectory[i].file_name[20]='\0';
    }	
}
void startblock()
{
int i;
for(i=0;i<50;i++)
{
FS.block[i].data[20]='\0';
FS.block[i].status=0;
}
} 								


