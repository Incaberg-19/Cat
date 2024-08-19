#ifndef S21_CAT_H
#define S21_CAT_H

#include <getopt.h>
#include <stdio.h>
#include <string.h>

struct flags {
  int b;
  int e;
  int v;
  int E;
  int n;
  int s;
  int t;
  int T;
};

struct auxiliary {
  int number_of_string;
  int key_for_print_b;
  int key_for_print_n;
  int key_for_print_e;
  int isPreviousStringEmpty;
  int is_next_file;
};

void input(int argc, char **argv, struct flags *parameters);
void open_and_processing_files(int argc, char **argv, struct flags *parameters,
                               struct auxiliary *aux);
void processing_flag_b(int num, char last_symvol, struct auxiliary *aux);
void processing_flag_eE(int num, struct auxiliary *aux);
void processing_flag_n(char last_symvol, struct auxiliary *aux);
int processing_flag_s(int num, char last_symvol, struct auxiliary *aux);
void processing_flag_v(int num, struct flags *parameters);
void processing_flags(FILE *f, struct flags *parameters, struct auxiliary *aux);
void print_symvol(int num, struct flags *parameters, struct auxiliary *aux);

#endif