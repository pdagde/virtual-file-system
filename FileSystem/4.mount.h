#include"3.createroot.h"

int mount(FILE *fn1)
{
	int i=0,j=0;
 char a[1012];
fscanf(fn1,"%lu%hd%hd%hd%hd",&FS.super.size_of_fs,&FS.super.no_of_free_blocks,&FS.super.next_free_block,&FS.super.no_of_free_inode,&FS.super.next_free_inode);
 fwrite(" ",12,1012,fn1);
 fread(&FS,sizeof(FS),1,fn1);


for(i=0;i<50;i++)
{
  fscanf(fn1,"%hd,%s,%hd,%hd,%hd,%s,%s,%s,%s,%s,%d",&FS.inde[i].inode_no,FS.inde[i].file_name,&FS.inde[i].ref_count,&FS.inde[i].links,&FS.inde[i].size,&FS.inde[i].type_permission,&FS.inde[i].file_type,FS.inde[i].creation_time,FS.inde[i].accessed_time,FS.inde[i].modification_time,&FS.inde[i].file_block_position);
}


for(i=0;i<50;i++)
{
  fscanf(fn1,"%d,%s,%d",&FS.block[i].status,FS.block[i].data,&FS.block[i].inode);
 }


for(i=0;i<50;i++)
{
 fscanf(fn1,"%s,%d",FS.derectory[i].file_name,&FS.derectory[i].inode_no);						
			
}


for(i=0;i<50;i++)
{
  fscanf(fn1,"%d,%d",&FS.parent[i].parent_inode,&FS.parent[i].child_inode);
}

return 1;
}




