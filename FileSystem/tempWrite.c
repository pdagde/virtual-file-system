#include<stdio.h>


void writefile()
{
	FILE *fn = NULL;
	int i;	
	fn = fopen("file.txt","w");
	for( i = 0; i < 50 ; i++ )
		fwrite(&FS.inde[i],sizeof(FS.inde),1,fn);

		fwrite(&FS.block[i],sizeof(FS.block),1,fn);
}

void readFile()
{
	FILE *fn = NULL;
	int i;	
	fn = fopen("file.txt","r");
	for( i = 0; i < 50 ; i++ )
		fread(&FS.inde[i],sizeof(FS.inde),1,fn);
	for( i = 0; i < 10 ; i++ )
	fread(&FS.block[i],sizeof(FS.block),1,fn);
fclose(fn);	
}
