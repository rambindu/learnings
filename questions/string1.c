#include<stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	char command[30];
	FILE *fp =fopen(argv[1] ,"w+");
	fputs("#include<stdio.h>\n\nint main(){\nprintf(\"hello world from programm\n\")return 0;\n}",fp);
	sprintf(command,"gcc %s -o myprog",argv[1]);
	system(command);
	system("./myprog");
	printf("%s file has been created with templete source code\n",argv[1]);
	fclose(fp);
	return 0;
	
}