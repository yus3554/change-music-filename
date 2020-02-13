#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char oldname[100] = "";
	char newname[100] = "";
	
	int num = atoi(argv[argc-1]);
	
	for(int i = 1; i < argc-2 ; i++){
		strcat(oldname, argv[i]);
		strcat(oldname, " ");
		if(i > num){
			strcat(newname, argv[i]);
			strcat(newname, " ");
		}
	}
	strcat(oldname, argv[argc-2]);
	strcat(newname, argv[argc-2]);
	
	if( rename( oldname, newname ) == 0 ){
		printf("oldname:%s\n", oldname);
		printf("newname:%s\n", newname);
	}else{
		printf( "–¼‘O‚Ì•ÏX/ˆÚ“®‚É¸”s‚µ‚Ü‚µ‚½" );
	}
	
	return 0;
}