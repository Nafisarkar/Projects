//Comment Detection between " " symbols 

#include <cstring>
#include <stdio.h>
using namespace std;
int main() {
  char string[1000];
  scanf("%[^\n]c", string);

  bool start = 0;
  bool end = 0;
  int startIndex = 0;
  int endIndex = 0;

  for (int i = 0; i < strlen(string); ++i) {
    if (string[i] == '"' && start == false) {
      start = true;
      startIndex = i + 1;
    } else if (string[i] == '"' && end == false) {
      end = true;
      endIndex = i - 1;
    }
  }

  for (int i = startIndex; i <= endIndex; ++i) {
    printf("%c", string[i]);
  }
  // printf("%s",string);
}