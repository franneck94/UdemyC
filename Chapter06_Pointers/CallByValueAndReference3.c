#include <stdio.h>

void do_something(double param_in, double *param_out1, double *param_out2)
{
    *param_out1 = param_in;
    *param_out2 = param_in;
}

int main()
{
    double argument_in = 1.0;
    double argument_out1 = 2.0;
    double argument_out2 = 3.0;

    do_something(argument_in, &argument_out1, &argument_out2);

    printf("%lf\n", argument_out1);
    printf("%lf\n", argument_out2);

    return 0;
}
