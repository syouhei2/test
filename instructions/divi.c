#include "commands.h"

void divi()
{
       char *rs,*rt,*rd,*imm;
       rs = strtok(NULL," ,");
       rt = strtok(NULL," ,");
       imm = strtok(NULL," ,\n"); 

        write_bit(DIVI,6);
        typeI(regn(rs),regn(rt),atoi(imm));
}