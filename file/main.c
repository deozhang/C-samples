#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	fp=fopen("D:\\OneDrive\\◊¿√Ê\\≤Â»Î ”∆µ.txt","r");
	if(fp==NULL){
		printf("Cannot open this file! \n");
		exit(0);
	}
	fclose(fp);
	return 0;
}
