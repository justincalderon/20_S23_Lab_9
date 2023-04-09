// Module:		Assembly
// Author:		Justin Calderon
// Date:		     April, 9, 2023
// Purpose:		Implimentation file for Assembly

#include "Assembly.h"

// inline assembly language function
int Assembly::DoAssemble(int iIn)
{
    int iOut = 0;             // return

    __asm
    {
        pushad              // save registers

        mov     eax, iIn    // mov input into eax
        mov     ebx, 02h    // mov 2 into ebx
        div     ebx         // divide by ebx (2)
        mov     iOut, eax   // store output back into eax

        popad               // restore registers
    }

    return iOut;              // return value
}