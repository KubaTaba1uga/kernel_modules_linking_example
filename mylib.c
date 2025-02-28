/*
 * mylib.c
 ****************************************************************
 * Brief Description:
 * A very simple module which shows how one can link multiple C files into one
 *lkm. We have this file which simulates a library, and we have mycaller.c file
 *which simulates main file of the module.
 */

int product(int a, int b)
{
  return a * b;
};
