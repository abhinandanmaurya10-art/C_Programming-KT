#include <stdio.h>

int main()
{
    // taking marks as input
    int maths, physics, chemistry, hindi, english;

    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks in Hindi: ");
    scanf("%d", &hindi);
    printf("Enter marks in English: ");
    scanf("%d", &english);

    // calculating total marks 
    int total = maths + physics + chemistry + hindi + english;
    printf("\nTotal Obtained Marks = %d\n", total);

    // calculating percentage
    float percentage = (total / 500.0) * 100;
    printf("Total Percentage = %.2f%%\n", percentage);

    // calculating Grade
    if (percentage >= 81)
        printf("Grade: A (Very Good!)\n");
    else if (percentage >= 61)
        printf("Grade: B (Good Work!)\n");
    else if (percentage >= 41)
        printf("Grade: C (Needs Improvement)\n");
    else
        printf("Grade: F (Fail — Padho Aur Mehnat Karo!)\n");

    return 0;
}
