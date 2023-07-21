 #include <stdio.h>
int main()
{
printf("\na");
printf("\nb");
printf("\nc");
start://label
    printf("\nd");
goto start;
printf("\ne");
}
