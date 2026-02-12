// Ques: If the ages of Ram , Shyam and Ajay are input theough the
// keyboard, WAP to determine the youngest of three(using nested if else)

#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the age 0f Ram: ");
    scanf("%d", &ram);
    printf("Enter the age 0f ajay: ");
    scanf("%d", &ajay);
    printf("Enter the age 0f shyam: ");
    scanf("%d", &shyam);

    if (ram > shyam)
    {
        if (ram > ajay)
            printf("%d Ram is Greater", ram);
        else // shyam>ram>ajay
            printf("%d Shyam is Greater ", shyam);
    }
    else
    { // ajay > ram
        if (ajay > shyam)
            printf("%d Ajay is greatest ", ajay);
        else // shyam >ajay >ram
            printf("%d shyam is greatest ", shyam);
    }

    return 0;
}