#include <stdio.h>

int main() {
  char cc, t; // cc = customer category, t = meter type
  int units;
  double energy_charge, demand_charge, meter_rent, vat, total_bill;

  scanf(" %c %c", &cc, &t);
  scanf("%d", &units);

  if (cc == 'H') {
    if (units <= 75)
      energy_charge = units * 5.26;
    else if (units <= 200)
      energy_charge = 75 * 5.26 + (units - 75) * 7.2;
    else if (units <= 300)
      energy_charge = 75 * 5.26 + 125 * 7.2 + (units - 200) * 7.59;
    else
      energy_charge = 75 * 5.26 + 125 * 7.2 + 100 * 7.59 + (units - 300) * 8.02;
  } else if (cc == 'C') {
    if (units <= 100)
      energy_charge = units * 9.5;
    else if (units <= 300)
      energy_charge = 100 * 9.5 + (units - 100) * 10.25;
    else
      energy_charge = 100 * 9.5 + 200 * 10.25 + (units - 300) * 11.10;
  }

  switch (t) {
  case 'S':
    demand_charge = cc == 'H' ? 42 : 80;
    meter_rent = 40;
    break;
  case 'T':
    demand_charge = cc == 'H' ? 126 : 250;
    meter_rent = 100;
    break;
  default:
    printf("Error");
    break;
  }

  vat = 0.05 * (energy_charge + demand_charge);
  total_bill = energy_charge + demand_charge + meter_rent + vat;

  if (cc == 'H')
    printf("Category :Household\n");
  else if (cc == 'C')
    printf("Category :Commercial\n");

  if (t == 'S')
    printf("Meter Type :Single Phase\n");
  else if (t == 'T')
    printf("Meter Type :Three Phase\n");

  printf("Units Consumed :%d\n", units);
  printf("Energy Charge :Tk. %.2lf\n", energy_charge);
  printf("Demand Charge :Tk. %.2lf\n", demand_charge);
  printf("Meter Rent :Tk. %.2lf\n", meter_rent);
  printf("VAT (5%%) :Tk. %.2lf\n", vat);
  printf("---------------------------------\n");
  printf("Total Bill :Tk. %.2lf\n", total_bill);

  printf("Consumption Status :");
  units > 300 ? printf("High Consumption") : printf("Normal Consumption");

  return 0;
}
