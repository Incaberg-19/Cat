#include "../s21_cat.h"

void processing_flag_n(char last_symvol, struct auxiliary *aux) {
  (last_symvol == '\n') ? (aux->key_for_print_n = 1, aux->number_of_string += 1)
                        : (aux->key_for_print_n = 0);
}