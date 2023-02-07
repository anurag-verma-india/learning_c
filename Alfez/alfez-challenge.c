#include <stdio.h>

int main()
{
    int marks;
   
    printf("What are your marks?");
    scanf("%d",& marks);
    if ((marks >= 85)&&(marks < 100));
    {
    printf("Excillent you scored A+");
    }
    else if ((marks >= 60)&&(marks < 85));
    {
        printf("Good you obtained B");
    }
    else if ((marks >= 40)&&(marks < 60));
    {
        printf("Nice you obtained C");
    }
    else 
    {
        printf("You are failed ghar pe beth maderchoood");
    }
    return 0;
}
