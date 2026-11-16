#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");

    char c;

    puts("Введите цифру:");
    scanf("%c", &c);

    switch (c)
    {
        case '0':
            printf("%c - zero", c);
            break;
        case '1':
            printf("%c - one", c);
            break;
        case '2':
            printf("%c - two", c);
            break;
        case '3':
            printf("%c - three", c);
            break;
        case '4':
            printf("%c - four", c);
            break;
        case '5':
            printf("%c - five", c);
            break;
        case '6':
            printf("%c - six", c);
            break;
        case '7':
            printf("%c - seven", c);
            break;
        case '8':
            printf("%c - eight", c);
            break;
        case '9':
            printf("%c - nine", c);
            break;
    }

    return 0;
}
