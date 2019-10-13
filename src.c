#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
char *text = "I want to learn PE_format";
char *filename = "PE-1.txt";
int main() 
{
    FILE *p;
    char buf[10240];
    if( access(filename, F_OK ) != -1 ) {
        // file exist
        p = fopen(filename, "a+");
        fgets(buf, 10240, p);
        if (strstr(buf, text) != NULL) {
            printf("%s", buf);
        } else {
            fputs("I want to learn PE file format", p);
        }
    } else {
        // file not exist
        p = fopen(filename,"w+");
        fputs("I want to learn PE file format", p);
        fclose(p);
    }
    return 0;
}
