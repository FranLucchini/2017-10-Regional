#include "testlib.h"

int main()
{
  registerValidation();
  inf.readLong((long long)1L, (long long)10000000000L, "D");
  inf.readSpace();
  inf.readInt(1, 7, "W");
  inf.readEoln();
  inf.readEof();
  return 0;
}
