#include "testlib.h"

int main()
{
  registerValidation();
  int N = inf.readInt(2, 2, "N");
  inf.readEoln();
  inf.readInt(1, 9, "D1"); 
  inf.readSpace();
  inf.readInt(0, 9, "D2"); 
  inf.readEoln();
  inf.readEof();
  return 0;
}