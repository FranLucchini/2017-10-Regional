#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 4, "D");
  inf.readSpace();
  inf.readInt(1, 1, "W");
  inf.readEoln();
  inf.readEof();
  return 0;
}
