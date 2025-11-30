#include <stdio.h>
#include <string.h>
#include "agri.h"

void suggestCrops(struct Crop *list, int count, char *soil, int rain, int temp)
{
    printf("\n--- SUITABLE CROP SUGGESTIONS ---\n");

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(list[i].soil, soil) == 0 &&
            rain >= list[i].minRain && rain <= list[i].maxRain &&
            temp >= list[i].minTemp && temp <= list[i].maxTemp)
        {
            printf("Crop: %s | Expected Yield: %.2f tons/hectare\n",
                   list[i].name, list[i].yield);
            found = 1;
        }
    }

    if (!found)
        printf("No matching crops found for given conditions.\n");
}

void seasonalSuggestion(int temp)
{
    printf("\n--- Seasonal Recommendation ---\n");

    if (temp < 20)
        printf("Suggested Season: Rabi (Winter crops such as Wheat, Barley).\n");
    else if (temp <= 30)
        printf("Suggested Season: Kharif (Crops like Rice, Maize, Cotton).\n");
    else
        printf("Suggested Season: Summer Crops (Millets, Vegetables).\n");
}