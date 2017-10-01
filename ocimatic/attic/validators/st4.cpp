#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 7, "W");
  inf.readSpace();
  inf.readInt(1, 100000, "D");
  inf.readEoln();
  inf.readEof();
  return 0;
}
