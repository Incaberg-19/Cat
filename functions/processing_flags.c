#include "../s21_cat.h"

void processing_flags(FILE *f, struct flags *parameters,
                      struct auxiliary *aux) {
  int num;
  char last_symvol = '\n';
  while (1) {
    num = fgetc(f);
    if (num == EOF) break;

    if (aux->is_next_file && num == '\n') {
      aux->is_next_file = 0;
      continue;
    }

    if (parameters->s) {
      if (processing_flag_s(num, last_symvol, aux) == 1) continue;
    }

    if (parameters->b) processing_flag_b(num, last_symvol, aux);
    if (parameters->n) processing_flag_n(last_symvol, aux);
    if (parameters->e || parameters->E) processing_flag_eE(num, aux);

    print_symvol(num, parameters, aux);
    last_symvol = num;
    aux->is_next_file = 0;
  }
}