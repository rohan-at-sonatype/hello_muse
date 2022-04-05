#include <stdio.h>

static char text[] = "Hello Rohan1234!";

int main() {
    char * printme = text;
    printme = NULL;
    printme[0] = 'X';
    printme[1] = 'X';
    printme[2] = 'X';
    printme[3] = '\0';
    printf("%s\n",printme);
    return 0;
    //my name is Rohan Bhaumik and I rock - new PR on test_branch_3
}