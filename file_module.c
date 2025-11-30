#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agri.h"

// Load crops from file into dynamic array
int loadCrops(struct Crop **list)
{
    FILE *fp = fopen("crops.txt", "r");
    if (!fp)
    {
        printf("Error: crops.txt not found!\n");
        return 0;
    }

    int count;
    fscanf(fp, "%d", &count);

    *list = (struct Crop *)malloc(count * sizeof(struct Crop));

    for (int i = 0; i < count; i++)
    {
        fscanf(fp, "%s %s %d %d %d %d %f",
               (*list)[i].name,
               (*list)[i].soil,
               &(*list)[i].minRain,
               &(*list)[i].maxRain,
               &(*list)[i].minTemp,
               &(*list)[i].maxTemp,
               &(*list)[i].yield);
    }

    fclose(fp);
    return count;
}

// Save result to report.txt
void saveReport(struct Crop *selected, int count)
{
    FILE *fp = fopen("report.txt", "w");
    fprintf(fp, "Smart Agriculture Crop Suggestion Report\n");
    fprintf(fp, "---------------------------------------\n");

    for (int i = 0; i < count; i++)
        fprintf(fp, "%s\n", selected[i].name);

    fclose(fp);
    printf("\nReport saved to report.txt\n");
}