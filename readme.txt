///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//						
//	Function Name : int OpenFile(char *);	
//			return type : int ; it returns file descriptor
//			input argument: char* ; it accepts filename through command line (argv[1])
//
//	Description :	this user-defined function used to open a file using open() system call.
//			
//			# sprintf(); library function used to concat two strings.
//
//			# open(); system call, used to open a file.
//			  	  syntax:	   int open(filename,mode);
//				  return type:     int ; file descriptor
//			  	  input arguments: filename and mode( O_RDONLY | O_WRONLY | O_RDWR | O_APPEND )
//		  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name : void CloseFile(int);
//			return type: void
//			input argument: int ; file descriptor returned by OpenFile()
//
//	Description :	this user-defined function used to close an opened file using file descriptor.
//			
//			# close(); system call, used to close a file.
//				   syntax:	   void close(int);
//				   input argument: int; file descriptor returned by open() | creat() system call
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	This program is build using Makefile. we need to execute make utility.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	suraj@suraj-Lenovo-Z50-70:~/MOS_DS/1_SimpleOpen$ make
//	gcc Main.c -o main
//	suraj@suraj-Lenovo-Z50-70:~/MOS_DS/1_SimpleOpen$ ./main file.txt
//
//	*******************************************
//
//	Successfully Open, file descriptor = 3
//
//	*******************************************
//
//	suraj@suraj-Lenovo-Z50-70:~/MOS_DS/1_SimpleOpen$ ./main unknownfile.txt
//
//	*******************************************
//
//	Failed to Open
//
//	*******************************************
//	suraj@suraj-Lenovo-Z50-70:~/MOS_DS/1_SimpleOpen$
//	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

