#include "../s21_cat.h"

void processing_flag_eE(int num, struct auxiliary *aux) {
  if (num == '\n') {
    aux->key_for_print_e = 1;
  } else {
    aux->key_for_print_e = 0;
  }
}