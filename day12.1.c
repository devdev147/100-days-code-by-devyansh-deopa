#include <stdio.h>

int main() {
    int late_days, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 0) {
        printf("No fine.\n");
    } else if (late_days <= 5) {
        fine = late_days * 2;
        printf("Fine: ₹%d\n", fine);
    } else if (late_days <= 10) {
        fine = (late_days - 5) * 4;
        printf("Fine: ₹%d\n", fine);
    } else if (late_days <= 30) {
        fine = (late_days - 10) * 6;
        printf("Fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}