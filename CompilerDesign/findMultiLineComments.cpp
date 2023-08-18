#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];
	scanf("%[^\n]c", string);
	bool startFound = false;
	bool endFound = false;
	int startIndex,endIndex;

	for (int i = 0; i < strlen(string); ++i)
	{
		if(string[i]=='/' && string[i+1]=='/' && startFound== false){
			startFound = true;
			startIndex = i+2;
			continue;
		}else if(string[i]=='/' && string[i+1]=='/' && endFound == false){
			endFound = true;
			endIndex = i;
			break;
		}
	}

	if(startFound && endFound){
		for (int i = startIndex; i < endIndex; ++i)
		{
			printf("%c", string[i]);
		}
    }else{
    	printf("\nCounld not find the staring or no commant \n");
    }

        return 0;
}