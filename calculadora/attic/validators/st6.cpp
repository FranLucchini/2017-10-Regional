#include "testlib.h"

int main()
{
  registerValidation();
  int N = inf.readInt(100, 999, "N");
  inf.readEoln();
  inf.readInt(1, 9, "D1");
  for (int i=2; i<=N; i++)
  {
    inf.readSpace();
    inf.readInt(0, 9, "Di");    
  } 
  inf.readEoln();
  inf.readEof();
  return 0;
}