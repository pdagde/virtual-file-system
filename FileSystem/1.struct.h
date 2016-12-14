#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


#define FILE_NAME 100
#define DIRECT_BLOCKS 10

struct inode
{
	short int inode_no;
        char file_name[10];				
	short int ref_count;			
	char *accessed_time;
	char *modification_time;
	char *creation_time;
	short int links;				
	short int size; 				
	char type_permission;			
	char file_type;					                
	int file_block_position; 				
			
}; 							




struct super_block
{
	unsigned long size_of_fs;				
	short int no_of_free_blocks;			
	short int next_free_block;  			 						
	short int no_of_free_inode; 			
	short int next_free_inode;  				
} ; 							

struct directory_entry 
{	
        int inode_no;
        char file_name[20];	
}; 									


struct file_table
{
	int index, offset, curr_block;
	int flag:1;  
	struct inode *ptr_to_inode;
	struct file_table *next;
};

struct Block
{
int inode;
char data[1024];
int status;
};

struct parent_child
{
 int parent_inode;
  int child_inode;
};


struct filesystem
{
 struct inode inde[100];
 struct super_block super;
 struct directory_entry derectory[100];
 struct parent_child parent[100];  
 struct Block block[50];
 };

