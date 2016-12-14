#include"11.pwd.h"

void create_file(char file_name[],int iparent)
{
  FILE *fp;
  int inode,parent_position;
  int file_postion,writing_position;
  

  inode = get_inode(file_name,0);
  
  if(file_name)
  {
    
    parent_position = FS.inde[iparent].file_block_position;
  }
  else
    parent_position = FS.inde[iparent].file_block_position;

  
  file_postion=inode;
  
     
  FS.derectory[file_postion].inode_no = inode;
  strcpy(FS.derectory[file_postion].file_name,file_name);
  

  fp=fopen("file.txt","a");

  fseek(fp,writing_position,20);       
  FS.parent[inode].parent_inode=iparent;
  FS.parent[inode].child_inode=inode;

  fprintf(fp,"%d,%d",FS.parent[inode].parent_inode,FS.parent[inode].child_inode);
  
  fprintf(fp,"%d %s",FS.derectory[file_postion].inode_no,FS.derectory[file_postion].file_name);
  }


    

