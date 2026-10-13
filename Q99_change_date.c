#include <stdio.h>

int main()
{
    int day, month, year;

    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    // Read date in dd/mm/yyyy format
    scanf("%d/%d/%d", &day, &month, &year);

    // Check valid month
    if(month < 1 || month > 12)
    {
        printf("Invalid date");
        return 0;
    }

    // Print date in dd-Mmm-yyyy format
    printf("%02d-%s-%04d", day, months[month - 1], year);

    return 0;
}