#include <stdio.h>
#include <string.h>

int main(){
	char staring[1000];
	scanf("%[^\n]s",staring);
	for (int i = strlen(staring)-1 ; i>=0 ; i--)
	{
		printf("%c",staring[i]);
	}
	return  0;
}