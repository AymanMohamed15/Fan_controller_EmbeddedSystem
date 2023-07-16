#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_
//#include "STD_TYPES.h"
#define SET_BIT(Var,BitNo)    Var |=  (1 << (BitNo))

#define CLR_BIT(Var,BitNo)    Var &= ~(1 << (BitNo))
#define TOG_BIT(Var,BitNo)    Var ^=  (1 << (BitNo))
#define GET_BIT(Var,BitNo)      (Var>>BitNo)&1

#endif
