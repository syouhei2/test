#include "commands.h"



void jr(char *rs)
{

  write_bit(JR,6);
  typeI(regn(rs),0,0);

}
