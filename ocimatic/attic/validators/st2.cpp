#include "testlib.h"

int main()
{
  registerValidation();
  inf.readInt(1, 5, "W");
  inf.readSpace();
  inf.readInt(1, 5, "D");
  inf.readEoln();
  inf.readEof();
  return 0;
}
