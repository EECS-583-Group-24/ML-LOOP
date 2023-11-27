#include<stdio.h>
 
typedef int S4;
typedef unsigned char U1;

#define FALSE (0)
#define TRUE  (1)

#define MAX_DIGIT (7)    /* ?????§?????° */
#define MIN_DIGIT (1)    /* ????°??????° */

#define DIVID_NUM_FOR_LOWER_DIGIT (10) /* ????????????????????????????????° */

#define MAX_INPUT_VALUE (1000000) /* ?????§??\?????? */
 
S4 main(){

    S4 s4_t_a;
    S4 s4_t_b;
    U1 u1_t_delimiter;
    S4 s4_t_scanfRtn;
    S4 s4_t_sumInput;
    S4 s4_t_digit;

    s4_t_scanfRtn = (S4)0;

    while(s4_t_scanfRtn != (S4)EOF)
    {
          s4_t_scanfRtn = scanf("%d %d%c", &s4_t_a, &s4_t_b, &u1_t_delimiter);
          s4_t_sumInput = s4_t_a + s4_t_b;

          s4_t_digit = s4_s_calcDigit(s4_t_sumInput);

          printf("%d\n", s4_t_digit);
    }

    return 0;
}

static S4 s4_s_calcDigit(S4 s4_a_inputNum)
{
    S4 s4_t_digit;
    S4 s4_t_maxNumOfDigit
    U1 u1_t_isFinishCalc;
    
    u1_t_isFinishCalc = (U1)FALSE;
    s4_t_maxNumOfDigit = (S4)MAX_INPUT_VALUE;
    s4_t_digit = (S4)MAX_DIGIT;

    while((s4_t_digit > (S4)MIN_DIGIT) &&
          (u1_t_isFinishCalc != (U1)TRUE))
    {
         if(s4_a_inputNum >= s4_t_maxNumOfDigit)
         {
             u1_t_isFinishCalc = (U1)TRUE;
         }
         else
         {
             s4_t_digit--;
             s4_t_maxNumOfDigit /= (S4)DIVID_NUM_FOR_LOWER_DIGIT;
         }
    }

    return (s4_t_digit);
}