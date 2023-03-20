

// file copy program using character stream functions
// data.txt
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fpr, *fpw;
    char ch;
    fpr = fopen("data.txt", "r");
    if (fpr == NULL)
    {
        printf("unable to open the file for reading");
        exit(1);
    }
    fpw = fopen("copy.txt", "w");
    if (fpw == NULL)
    {
        printf("unable to open the file for writing");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fpr);

        if (ch == EOF)
            break;
        else
            fputc(ch, fpw);
    }
    printf("File is copied ");
    fclose(fpr);
    fclose(fpw);
    return 1;
}

// s.no	file mode		description
// 1		r				read mode, open the file if exist, return null if unable to open the file, or not having permission. File pointer points to first charater of file.
// 2		w				open file for writing, if file not exist creates new file, if file exist old content get deleted a fresh copy of file is used. if unable to open or create new file it return null.
// 3		a				append mode, we can add more content to file. if file does not exist it creats new and if unable to open the file it return null. after opening the file file pointer points to last line of the file for appending new content
// 4		r+				read/write
// 	fseek(); it is use to move the file pointer in file forward or backward
// 5		w+				write/read. and it is same as w mode
// 6		a+				append/read and it is same as a mode.