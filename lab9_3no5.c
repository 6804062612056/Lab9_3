#include <stdio.h>
#include <ctype.h>

int main() {
    char text[50];
    gets(text);
    int i=0,score = 0;
    while (text[i] != '\0') {
        if (isdigit(text[i])) {
            score += text[i]-48;
        }
        i++;
    }
    printf("%d",score);
}