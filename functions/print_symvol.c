#include "../s21_cat.h"

void print_symvol(int num, struct flags *parameters, struct auxiliary *aux) {
  if (aux->key_for_print_b) printf("%6d\t", aux->number_of_string);
  if (aux->key_for_print_n) printf("%6d\t", aux->number_of_string);
  if (aux->key_for_print_e) printf("$");
  if (parameters->v) {
    processing_flag_v(num, parameters);
  } else {
    if (parameters->T && num == 9) printf("^I");
    if (parameters->T && num != 9) printf("%c", num);
    if (!parameters->T) printf("%c", num);
  }
}