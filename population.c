{
    // TODO: Prompt for start size
 int n;
 do
 {
     n = get_int("Start Size: ");
 }
 while (n < 9);
 
    // TODO: Prompt for end size
 int a;
 do
 {
     a = get_int("End Size: ");
 }
 while (a < n);
 
    // TODO: Calculate number of years until we reach threshold
 int years = 0;
 
 while (n < a)
 {
     n = n + (n / 3) - (n / 4);
     years++;
 }
 
    // TODO: Print number of years
 printf("Years: %i\n", years);
}
