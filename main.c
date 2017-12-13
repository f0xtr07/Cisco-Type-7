#include <stdio.h>

int main()
{
    int csize,i;
    char hexblock[] = {0x64, 0x73, 0x66, 0x64, 0x3b, 0x6b, 0x66, 0x6f, 0x41, 0x2c, 0x2e, 0x69, 0x79, 0x65, 0x77, 0x72, 0x6b, 0x6c, 0x64, 0x4a, 0x4b, 0x44};
    printf("Enter the size of cipher text: ");
    scanf("%d", &csize);
    char cipher[csize];
    //printf("\n%X",magicblock[0]); --> Use %X to print Hexadecimal value
    printf("\nCipher text: ");
    for(i=0;i<=csize;i++)
    {
        scanf("%c",&cipher[i]);
    }
    for(i=0;i<=csize;i++)
    {
        printf("%c",cipher[i]);
    }
    return 0;
}
