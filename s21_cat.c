#include "s21_cat.h"

int main(int argc, char **argv) {
  struct flags parameters = {0, 0, 0, 0, 0, 0, 0, 0};
  struct auxiliary aux = {0, 0, 0, 0, 0, 0};
  if (argc == 1) {
    printf("n/a");
    return 0;
  }
  open_and_processing_files(argc, argv, &parameters, &aux);
  return 0;
}