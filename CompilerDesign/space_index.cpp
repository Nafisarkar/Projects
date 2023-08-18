#include <stdio.h>
#include <string.h>

int main(){
	char staring[1000];
	scanf("%[^\n]s",staring);

	for (int i = 0; i < strlen(staring); ++i)
	{
		if(staring[i]==' '){
			printf("%d\n",i);
		}
	}
	return  0;
}