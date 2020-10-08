/**Gregory Yezhov and Jacob Boyd
CSC 345-01
Project 2: Multithreaded Programming*/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/* */
typedef struct
{
    int row;
    int column;
}parameters;

int main(int argc, char *argv[])
{
   	int j = 0; //used in for loop to read in file elements to board array
	int i = 0; //used in for loop to read in file elements to board array
        int k = 0; //used in while loop to check valid array
	
        
        //Error checking: if user only enters ./hw2 then gets this error
	if (argc != 2) {
            fprintf(stderr,"ERROR: Invalid Arguments\n");

            return -1;
    	}
    	
    	if (argv[2] == "1") {
    	
    	} else if (argv[2] == "2") {
    	
    	}

	return 0;
}
