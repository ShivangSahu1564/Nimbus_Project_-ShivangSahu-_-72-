#include <stdio.h>
#include <stdlib.h>
#include "agri.h"

int main()
{
    char soil[20];
    int rainfall, temp;

    struct Crop *list = NULL;
    int count = loadCrops(&list);

    if (count == 0)
        return 0;

    getInput(soil, &rainfall, &temp);

    suggestCrops(list, count, soil, rainfall, temp);
    seasonalSuggestion(temp);

    free(list);
    return 0;
}