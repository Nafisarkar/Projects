#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];
	scanf("%[^\n]c", string);
	bool dstartFound = false;
	bool dendFound = false;
	bool sstartFound = false;
	bool sendFound = false;
	int sstartIndex,sendIndex,dstartIndex,dendIndex;
	for (int i = 0; i < strlen(string); ++i)
	{
		if(string[i]=='\'' && sstartFound == false){
			sstartFound = true;
			sstartIndex = i+1;
			continue;
		}else if(string[i]== '\''&& sendFound == false){
			sendIndex = i;
			sendFound = true;
		}
		if(string[i]=='"' && dstartFound == false){
			dstartFound = true;
			sstartIndex = i+1;
			continue;
		}else if(string[i]== '"' && dendFound == false){
			dendIndex = i;
			dendFound = true;
		}
	}
	if (sstartFound && sendFound) {
        printf("%s\n","'Single quoted String'" );
    }else if(dstartFound && dendFound) {
        printf("%s\n","'Double quoted String'" );
    }
	return 0;
}