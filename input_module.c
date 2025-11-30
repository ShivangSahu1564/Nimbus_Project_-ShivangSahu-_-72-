#include <stdio.h>
#include <string.h>
#include "agri.h"

void getInput(char *soil, int *rainfall, int *temp)
{
    printf("\nEnter Soil Type (Clay/Loamy/Sandy): ");
    scanf("%s", soil);

    printf("Enter Average Rainfall (mm): ");
    scanf("%d", rainfall);

    printf("Enter Temperature (°C): ");
    scanf("%d", temp);

    printf("\n--- INPUT RECEIVED ---\n");
    printf("Soil: %s\nRainfall: %d mm\nTemperature: %d°C\n", soil, *rainfall, *temp);
}