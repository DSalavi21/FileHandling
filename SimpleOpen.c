#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int OpenFile(char*,char*);

int main(int argc, char* argv[])
{
  int fd=-1;
  fd=OpenFile(argv[1],argv[2]);
  
  if(ret==-1)
    printf("Can't open");
  else
    printf("opened with FD : %d",fd); 

  return 0;
}

int OpenFile(char* name, char* mode)
{

  int ifd=-1;
  char path[80];
  char def_path[]="/home/FileHandling/";
  sprintf(path,"%s%s",def_path,name);
  
  ifd=open(path,mode);
  
  return ifd;
  
}
