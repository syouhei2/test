#include "commands.h"



void cvt_s_w()
{
  char *fs,*ft,*fd,*imm;
  fd = strtok(NULL," ,");
  fs = strtok(NULL," ,\n");

  write_bit(CVT_S_W,6);
  typeR(regn(fs),0,regn(fd),0);

}