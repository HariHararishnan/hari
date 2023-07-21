 #include <stdio.h>
int main()
{
printf("\na");
printf("\nb");
printf("\nd");
start://label
    printf("\nd");
goto start;
printf("\ne");
}
