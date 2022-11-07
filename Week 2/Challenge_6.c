#include <stdio.h>
#include <string.h>

char    *check_string_is_plndrm(char *string_1, char *string_2)
{
    int i = 0;

        if (strcmp(string_1, string_2) == 0)
            printf("This Word is palindrom: %s\n", string_1);
        else
            printf("This word is not palindrom: %s != %s\n", string_1, string_2);

}

char    *rvrs_str(char *str)
{
    int     i   = 0;
    int     len = 0;
    char    swap;
    
    while (str[len])
        len++;
    len -= 1;
    while (i < len)
    {
        swap = str[i];
        str[i] = str[len];
        str[len] = swap;
        i++;
        len--;
    }
    return (str);
}

int main()
{
    char    s[20];
    char *str;
    char *new_s;
    printf("Enter the Word: ");
    scanf("%s", &s);

    new_s = strdup(s);
    str = rvrs_str(s);
    
    check_string_is_plndrm(new_s, str);
}
