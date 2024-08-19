#include "../s21_cat.h"

void processing_flag_v(int num, struct flags *parameters) {
  if (num == 9 || num == 10) {
    (num == 9 && (parameters->t || parameters->T)) ? (printf("^I"))
                                                   : printf("%c", num);
  } else if (num >= 32 && num < 127) {
    printf("%c", num);
  } else if (num == 127) {
    printf("^?");
  } else if (num >= 128 + 32) {
    printf("M-");
    (num < 128 + 127) ? printf("%c", num - 128) : printf("^?");
  } else {
    (num > 32) ? printf("M-^%c", num - 128 + 64) : printf("^%c", num + 64);
  }
}