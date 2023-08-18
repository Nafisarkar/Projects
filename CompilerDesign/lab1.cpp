#include <stdio.h>
#include <string.h>

int main(){
	char staring[1000];
	scanf("%[^\n]s",staring);

	char qut = '"';
	bool star = false;
	bool end = false;

	for (int i = 0; i < strlen(staring); ++i)
	{
		if(staring[i] == qut and star == false ){
			star = true;
			printf("paici\n");
		}
		else if(staring[i] == qut and end == false ){
			end = true;
			printf("paici\n");
		}
	}

	if( star == true && end == true){
		printf("yes\n");
	}else{
		printf("no\n");
	}

	return  0;
}