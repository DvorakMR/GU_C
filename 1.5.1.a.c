int heltal = 10;
int *pekare_till_heltal = &heltal;
//Vilka av följande uttryck resulterar i en utskrift av talet 11? (och varför? Testa!)

int main() {
	printf("%i\n", pekare_till_heltal + 1);
	printf("%i\n", heltal+1);
	printf("%i\n", *(&heltal)+1);
	printf("%i\n", *(pekare_till_heltal + 1));
	printf("%i\n", *pekare_till_heltal + 1);
	printf("%i\n", &heltal + 1);
return 0; }