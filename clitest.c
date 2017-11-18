#include <stdio.h>
#include "CLIENTS_H.h"
#include <string.h>
#include <stdlib.h>
#include "listADTgen.h"

int compareTo(void* num1, void* num2){
}

int main() {
	FILE* infile = fopen("clients.txt", "r");
	ClientProf temp = createCli(infile);
	printf("%d\n", sizeof(ClientProf));
	ListType cliList = create(24, compareTo);
	while (!feof(infile)) {
		printf("STILL READING\n");
		
		push(cliList, temp);
		temp = createCli(infile);
		//toStringCli(temp);
	}
	toStringCli(getEl(cliList, 1));
	printl(cliList, toStringCli);
	fclose(infile);
	return 0;
}
