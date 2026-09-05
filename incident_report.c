#include <stdio.h>

int main() {
    char incidentID[20];
    char analystName[50];
    int affectedSystems;
    float recoveryCost;
    float downtime;
    float totalRecoveryCost;

    // Input
    printf("Enter Incident ID: ");
    scanf("%s", incidentID);

    printf("Enter Analyst Name: ");
    scanf(" %[^\n]", analystName);

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affectedSystems);

    printf("Enter Estimated Recovery Cost: ");
    scanf("%f", &recoveryCost);

    printf("Enter Downtime in Hours: ");
    scanf("%f", &downtime);

    // Calculate total recovery cost
    totalRecoveryCost = affectedSystems * recoveryCost;

    // Display report
    printf("\n=================================\n");
    printf("       SECURITY INCIDENT REPORT\n");
    printf("=================================\n");
    printf("Incident ID       : %s\n", incidentID);
    printf("Analyst           : %s\n", analystName);
    printf("Affected Systems  : %d\n", affectedSystems);
    printf("Recovery Cost     : %.2f\n", recoveryCost);
    printf("Total Cost        : %.2f\n", totalRecoveryCost);
    printf("Downtime          : %.2f hours\n", downtime);
    printf("=================================\n");

    return 0;
}
