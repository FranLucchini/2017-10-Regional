#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 1, "W");
  inf.readSpace();
  inf.readInt(1, 4, "D");
  inf.readEoln();
  inf.readEof();
  return 0;
}
