#include"4.mount.h"

struct filesystem unmount()
{
  FILE *fn;
 fn=fopen("file.txt","w");
	int i=0,j=0;

	fprintf(fn,"%lu%hd%hd%hd%hd",FS.super.size_of_fs,FS.super.no_of_free_blocks,FS.super.next_free_block,FS.super.no_of_free_inode,FS.super.next_free_inode);

 fwrite(" ",12,1012,fn);
 
for(i=0;i<50;i++)
{
  fprintf(fn,"%hd,%s,%hd,%hd,%hd,%c,%c,%s,%s,%s,%d",FS.inde[i].inode_no,FS.inde[i].file_name,FS.inde[i].ref_count,FS.inde[i].links,FS.inde[i].size,FS.inde[i].type_permission,FS.inde[i].file_type,FS.inde[i].creation_time,FS.inde[i].accessed_time,FS.inde[i].modification_time,FS.inde[i].file_block_position);
}

for(i=0;i<50;i++)
{
  fprintf(fn,"%d,%s,%d",FS.block[i].status,FS.block[i].data,FS.block[i].inode);
 }

for(i=0;i<50;i++)
{
 fprintf(fn,"%s,%d",FS.derectory[i].file_name,FS.derectory[i].inode_no);						
			
}

for(i=0;i<50;i++)
{
  fprintf(fn,"%d,%d",FS.parent[i].parent_inode,FS.parent[i].child_inode);
}


return FS;
}

