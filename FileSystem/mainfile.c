#include"15.readfile.h"
#include<string.h>
#include"tempWrite.c"
int main()
{
	struct filesystem hdd,hdd1;
	FILE *fn;
	FILE *fn1,*fn2;
        char file_name[200],*fst,*snd,*thr,*ext,array[20],type;
	int i,a,parent_inode=0,j,flag=0,return_status,count,inode;
        fn = fopen("file.txt","w");
	fn1 = fopen("file.txt","rwa");
        char createdir;      
        while(1)
	  {
	    printf("VFS->>");
            gets(array);
	    fst=strtok(array," ");
	    snd=strtok(NULL," ");
	    thr=strtok(NULL," ");
	    ext=strtok(NULL," ");
	    if((strcmp(fst,"mount"))==0)
	      {
		if(flag==1)
		  {
		    printf("Filesystem All Ready Mounting\n");
		    continue;
		  }
		else
		  {
		    flag=1;
		    return_status=mount(fn1);
		    create_dir("root",parent_inode);
			
	     
			
        inodstart();
        superstart();
        startdirectory();
	startblock();
	writefile();
		
	printf("........Mounting FileSystem..........\n");
	
	printf("FileSystem Mount Succesfully.....\n");
		   
		   }
	      }
           else if((strcmp(fst,"createdir"))==0 && flag==1)
                {
                   create_dir(snd,parent_inode);
                 }
           
               
             else if((strcmp(fst,"ls"))==0 && flag==1)
                {
                  lscomd(parent_inode);                   
                 }
          
             else if((strcmp(fst,"cd"))==0 && flag==1)
             {
                  type=findtype(snd);
            printf("%d",type);
            if(type==0)
               {
               for(i=0;i<50;i++)
                 {
                   if(strcmp(FS.derectory[i].file_name,snd)==0);
                    {
                        parent_inode=findinode(snd);
                        break;
                    } 
                   }
             }
            if(type==1)
              {
               printf("not a directory\n");
               }
           }
 
      else   if((strcmp(fst,"cd.."))==0 && flag==1)
            {
              parent_inode=findcd(parent_inode);
             }

        else if((strcmp(fst,"pwd"))==0)
            {
              pwd(parent_inode);
              printf("root"); 
              printf("\n");
             }


        else if((strcmp(fst,"mywrite"))==0 && flag==1)
             {
               writeinfile(snd);
             }
        else if((strcmp(fst,"myread"))==0 && flag==1)
            {
             inode=findinode(snd);
             readfile(snd,inode); 
            }
         else if((strcmp(fst,"myexit"))==0)
             {              
	       exit(0);
              }
        else if((strcmp(fst,"myclear"))==0 )
            {
              system("clear");
             }

	 else if((strcmp(fst,"unmount"))==0)
	    {
	      if(flag==1)
		{
		  printf("....Unmounting....\n");
		  sleep(1);
		  printf("Unmounted Succesfully\t...!!!\n");
		  sleep(2);
		  printf("Exiting........\n");
		  break;
		}
	    }
	     else  if(strcmp(fst,"cd")==0 && strcmp(snd,"~")==0 && flag==1)
		 {
		   parent_inode=0;
		 }   
	      


            else if(strcmp(fst,"file")==0 && flag==1)
                {
                  create_file(snd,parent_inode);
                 }


	      else if((strcmp(fst,"help"))==0)
		 {

		   printf("\n 1)mount\t\t\t\t\t:- For Mount The File System\n");  
		   printf("\n 2)createdir\t\t\t\t\t:- For Creating The Directory\n");  
		   printf("\n 3)ls\t\t\t\t\t\t:- For Showing The List\n");  
		   printf("\n 4)cd\t\t\t\t\t\t:- Goving To Root Directory\n");  
		   printf("\n 5)cd..\t\t\t\t\t\t:- Goving To parent Directory\n");  
		   printf("\n 6)pwd  \t\t\t\t\t:- Show the Path for Root to Current Directory\n");
		   printf("\n 7)myexit\t\t\t\t\t:- Exit the FileSystem\n");
		   printf("\n 8)myclear\t\t\t\t\t:- Clear the Shell\n");      
		   printf("\n 9)unmount\t\t\t\t\t:- For Unount The File System\n");
                   printf("\n10)mywrite\t\t\t\t\t:- For Write In The File System\n");  
		   printf("\n11)myread\t\t\t\t\t:- For Read From The File System\n");  
		
		 }

	else
              if(flag==1)
                   {
                      printf("command not found\n");
                    }
            else
               {
	          printf("File System Mount First\n");
               }
	  }        
	return 0;
}

