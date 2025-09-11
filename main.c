void print_tables(uint32_t n) {
   char bin[33], oct[12], hex[9];

   // Original number
   div_convert(n, 2, bin);
   div_convert(n, 8, oct);
   div_convert(n, 16, hex);
   printf("Original: Binary=%s Octal=%s Decimal=%u Hex=%s\n", bin, oct, n, hex);
 
   // Left shift by 3
   uint32_t shifted = n << 3;
   div_convert(shifted, 2, bin);
   div_convert(shifted, 8, oct);
   div_convert(shifted, 16, hex);
   printf("Left Shift by 3: Binary=%s Octal=%s Decimal=%u Hex=%s\n", bin, oct, shifted, hex);
   // AND with 0xFF
   uint32_t masked = n & 0xFF;
   // ... similar pattern
}
