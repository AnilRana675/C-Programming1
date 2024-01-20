#include <stdio.h>

int main() {
  // Define tariff rates (modify these as needed)
  float base_charge = 20.0f; // Fixed monthly charge
  float unit_rate_low = 0.10f; // Rate for units below 100
  float unit_rate_high = 0.15f; // Rate for units above 100

  // Get user input
  float units_consumed;
  printf("Enter units consumed: ");
  scanf("%f", &units_consumed);

  // Calculate bill amount
  float bill_amount;
  if (units_consumed <= 100) {
    bill_amount = base_charge + units_consumed * unit_rate_low;
  } else {
    bill_amount = base_charge + 100 * unit_rate_low + (units_consumed - 100) * unit_rate_high;
  }

  // Print bill details
  printf("-----------------------------------------\n");
  printf("Units consumed: %.2f\n", units_consumed);
  printf("Base charge: %.2f\n", base_charge);
  printf("Bill amount (before taxes): %.2f\n", bill_amount);

  // Add tax if applicable (replace with your tax rate calculation)
  float tax_rate = 0.18f; // Replace with actual tax rate
  float tax_amount = bill_amount * tax_rate;
  bill_amount += tax_amount;

  // Print final bill amount
  printf("Tax amount: %.2f\n", tax_amount);
  printf("Total bill amount: %.2f\n", bill_amount);
  printf("-----------------------------------------\n");

  return 0;
}
