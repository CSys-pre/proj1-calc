#include"factorial.h"
long factorial(int fact , char sign)
{
    long result = 1;

    if (sign == '!')
      {
        if (fact <= 1)
            return 1;
        else
            {

                int i;

                for (i=1 ; i<=fact ; i++)
                {
                  result = result*i;
                }
            }
    }
    return result;

}
