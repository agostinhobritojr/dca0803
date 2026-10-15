#include <float.h>
#include <stdio.h>

int main(void) {
  float f = 5.32e-5f;
  double d = 5.32e-5;
  long double ld = 5.32e-5L;

  printf("float:       %.9g\n", f);
  printf("double:      %.15g\n", d);
  printf("long double: %.18Lg\n", ld);

  printf("float:       %.*f\n", FLT_DECIMAL_DIG, f);
  printf("double:      %.*f\n", DBL_DECIMAL_DIG, d);
  printf("long double: %.*Lf\n", LDBL_DECIMAL_DIG, ld);

  printf("\nPrecisao:\n");
  printf("FLT_DIG  = %d\n", FLT_DIG);
  printf("DBL_DIG  = %d\n", DBL_DIG);
  printf("LDBL_DIG = %d\n", LDBL_DIG);

  return 0;
}