#include <stdio.h>

int main()
{
    float sp, cp, profit, loss, profitPercent, lossPercent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        profitPercent = (profit / cp) * 100;
        printf("You made a Profit of ₹%.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercent);
    }
    if (cp > sp) {
        loss = cp - sp;
        lossPercent = (loss / cp) * 100;
        printf("You incurred a Loss of ₹%.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercent);
    }
    if(sp==cp) {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
