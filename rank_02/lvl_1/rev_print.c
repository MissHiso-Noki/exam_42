#include "unistd.h"

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            i++;
        }
        while (i)
        {
            i--;
            write(1, &argv[1][i], 1);
        }
    }
    else
        write(1, "\n", 2);
    return(0);
}