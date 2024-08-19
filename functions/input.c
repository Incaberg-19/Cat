#include "../s21_cat.h"

void input(int argc, char **argv, struct flags *parameters) {
  int option = 0;
  const struct option longopts[] = {{"number-nonblank", no_argument, NULL, 'b'},
                                    {"number", no_argument, NULL, 'n'},
                                    {"squeeze-blank", no_argument, NULL, 's'},
                                    {0, 0, 0, 0}};
  while ((option = getopt_long(argc, argv, "bevEnstT", longopts, NULL)) != -1) {
    switch (option) {
      case 'n':
        if (!parameters->b) parameters->n = 1;
        break;
      case 'b':
        parameters->b = 1;
        parameters->n = 0;
        break;
      case 'e':
        parameters->e = 1;
        parameters->v = 1;
        break;
      case 'v':
        parameters->v = 1;
        break;
      case 'E':
        parameters->E = 1;
        break;
      case 's':
        parameters->s = 1;
        break;
      case 't':
        parameters->t = 1;
        parameters->v = 1;
        break;
      case 'T':
        parameters->T = 1;
        break;
    }
  }
}
