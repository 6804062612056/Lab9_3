#include <stdio.h>
#define size 5
int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]);


int main() {
	char login[size][64]={"user1","user2","user3","user4","user5"};
	char password[size][64]={"pass1","pass2","pass3","pass4","pass5"};
    char login_input[64],password_input[64];

	printf("Enter login : "); gets(login_input);
	printf("Enter password : "); gets(password_input);

	if( checkLogin(login_input, password_input, login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}

}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]) {
    int i,flag=0;
    for (i=0;i<size;i++) {
        if (!strcmp(login,logindb[i]) && !strcmp(passwd,passdb[i])) {
            flag = 1;
            break;
        }
    }
    return flag;
}