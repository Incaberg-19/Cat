#include "../s21_cat.h"

void open_and_processing_files(int argc, char **argv, struct flags *parameters,
                               struct auxiliary *aux) {
  int count_files = 0;
  input(argc, argv, parameters);
  int proper = 0;
  for (int i = 1; i < argc; i++) {
    if (argv[i][0] != '-') {
      proper = i;
    }
    if (proper != 0) {
      FILE *f;
      f = fopen(argv[proper], "r");
      if (NULL == f) {
        continue;
      }
      if (++count_files > 1) {
        if (parameters->e == 1) printf("$");
        printf("\n");
        aux->is_next_file = 1;
      }
      processing_flags(f, parameters, aux);
      fclose(f);
    }
  }
}