#include <stdio.h>
#define MAX 50
int countVowel(char text[],char score[]);
void printscore(char score[]);

void main() {
    char text[MAX];
    char score[5] = {0};
    int cVowel;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text,score);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    printscore(score);
}

int countVowel(char text[],char score[]) {
    char list[5][2] = {{'A','a'},{'E','e'},{'I','i'},{'O','o'},{'U','u'}};
    int i=0,j,count=0;
    while (text[i] != '\0') {
        for (j=0;j<5;j++) {
            if (text[i] == list[j][0] || text[i] == list[j][1]) {
                score[j]++;
                count++;
                break;
            }
        }
        i++;
    }
    return count;
}

void printscore(char score[]) {
    char list[5][2] = {{'A','a'},{'E','e'},{'I','i'},{'O','o'},{'U','u'}};
    int i = 0;
    for (i=0;i<5;i++) {
        printf("[%c,%c] : %d\n",list[i][0],list[i][1],score[i]);
    }
}