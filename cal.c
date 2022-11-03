#include <stdio.h>

int cal(int a, char b, int c)
{
    switch (b)
    {
    case '+':
        return (a + c);
        break;
    case '-':
        return (a - c);
        break;
    case '*':
        return (a * c);
        break;
    case '/':
        return (a / c);
        break;
    default:
        return 0;
        break;
    }
}

int main()
{
    printf("Hello ......\n");
    int a, c, result = 0;
    char b;
    scanf("%d", &a);
    scanf(" %c", &b);
    scanf("%d", &c);
    printf("------\n");
    result = cal(a, b, c);
    printf("%d\n", result);
    while (1)
    {
        scanf(" %c", &b);
        scanf("%d", &c);
        result = cal(result, b, c);
        printf("------\n");
        printf("%d\n", result);
    }
}