#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 5, "D");
  inf.readSpace();
  inf.readInt(1, 5, "W");
  inf.readEoln();
  inf.readEof();
  return 0;
}
