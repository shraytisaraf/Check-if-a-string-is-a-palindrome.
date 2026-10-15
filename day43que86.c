//Check if a string is a palindrome
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Compare characters from both ends
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }

    return 0;
}