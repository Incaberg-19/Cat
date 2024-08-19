#include "../s21_cat.h"

void processing_flag_b(int num, char last_symvol, struct auxiliary *aux) {
  if (last_symvol == '\n' && num != '\n') {
    aux->number_of_string += 1;
    aux->key_for_print_b = 1;
  } else {
    aux->key_for_print_b = 0;
  }
}
