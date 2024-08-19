#include "../s21_cat.h"

int processing_flag_s(int num, char last_symvol, struct auxiliary *aux) {
  int returning = 0;
  if (aux->isPreviousStringEmpty && num == '\n') {
    returning = 1;
  } else {
    if (num == '\n' && last_symvol == '\n') {
      aux->isPreviousStringEmpty = 1;
    } else {
      aux->isPreviousStringEmpty = 0;
    }
  }
  return returning;
}