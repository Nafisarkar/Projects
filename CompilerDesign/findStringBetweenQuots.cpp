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
		if(string[i]=='"' and startFound == false){
			startFound = true;
			startIndex = i+1;
			continue;
		}else if(string[i]== '"' and endIndex == false){
			endIndex = i;
			endFound = true;
			break;
		}
        }

        if (startFound && endFound) {
                for (int i = startIndex; i < endIndex; ++i){
			printf("%c", string[i]);
		}
        } else {
                printf("No string found between quots");
        }

        printf("\n[*] Input : %s\n", string);

	return 0;
}