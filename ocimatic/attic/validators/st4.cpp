#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 100000, "D");
  inf.readSpace();
  inf.readInt(1, 7, "W");
  inf.readEoln();
  inf.readEof();
  return 0;
}
