#include <stdio.h>
int main()
{
    float Depreciation,Purchase_price, Salvage_price, Year_of_service;

    // main equation
    Depreciation = (Purchase_price - Salvage_price) / Year_of_service;
    // modify equation
    // Salvage_price = Purchase_price - (Depreciation * Year_of_service);
    // এখন ডান পাসের ৩টা রাশির মান নিয়ে calculation করলেই মান পাওয়া যাবে
    return 0;
}
