#include "commands.h"



void swoc1()
{
  char *fs,*rt,*rd,*imm;
  fs = strtok(NULL," ,");
  isfreg(fs);
  rt = strtok(NULL," ,");
  isreg(rt);
  rd = strtok(NULL," ,\n");
  isreg(rd);

  write_bit(SWOC1,6);
  typeR(regn(fs),regn(rt),regn(rd),0);

}
