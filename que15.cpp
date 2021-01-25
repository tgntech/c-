/**
 * Question -15 write a c++program to copy the content of one file to another.
 **/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("roli.txt", "r");
    fp2 = fopen("copy.txt", "w");
    while((ch = getc(fp1)) != EOF)
        putc(ch, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

//#coder Roli Tamrakar