#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myNumbers[]={100,200,300,400};

    printf("%d", sizeof(myNumbers) / sizeof(myNumbers[1]));
    return 0;
}
