#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum1 = 0;

    for(i=0; i<argc; i++)
    {
       printf("argv[%d] = %s\n", i, argv[i]);
       sum1 = sum1 + atoi(argv[i]);
    }

    printf("\nSum is %d\n",sum1);

    char fname[20], str[500];
    FILE *fp;
    fp = fopen("Message.txt", "r");

    if(fp==NULL)
        printf("Error Occurred while Opening the File!");
    else
    {
        fscanf(fp, "%[^\0]", str);
        printf("%s", str);
    }
	fclose(fp);
    getch();

    return 0;
}

