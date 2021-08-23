
//Include header files containing the relevant pre-defined functions such as get_long
#include <stdio.h>
#include <cs50.h>

//Define the main function
int main(void)
{
    //Ask user for the credit or debit card number
    long number = get_long("Number: ");
    //Define the variable luhnsum that will hold the sum value troughout the algoritghm
    int luhnsum = 0;

    //check if the number has 13, 15, or 16 digits. Otherwise it is invalid
    if (number < 1000000000000)
    {
        printf("INVALID\n");
    }
    else if (number > 9999999999999 && number < 100000000000000)
    {
        printf("INVALID\n");
    }
    else if (number > 9999999999999999)
    {
        printf("INVALID\n");
    }

    //Consider the case when number has 13 digits. If it has 13 digits, it can either be VISA or invalid
    if (number > 999999999999 && number < 10000000000000)
    {
        //Get the digits of the given number
        int A = (int)(number / 1000000000000);

        if (A != 4)
        {
            printf("INVALID\n");
        }

        int B = (int)((number - A * 1000000000000) / 100000000000);
        int C = (int)((number - A * 1000000000000 - B * 100000000000) / 10000000000);
        int D = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000) / (long) 1000000000);
        int E = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000) / 100000000);
        int F = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000) /
                      10000000);
        int G = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000) / 1000000);
        int H = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000) / 100000);
        int I = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000 - H * 100000) / 10000);
        int J = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000 - H * 100000 - I * 10000) / 1000);
        int K = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000 - H * 100000 - I * 10000 - J * 1000) / 100);
        int L = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000 - H * 100000 - I * 10000 - J * 1000 - K * 100) / 10);
        int M = (int)((number - A * 1000000000000 - B * 100000000000 - C * 10000000000 - (long) D * 1000000000 - E * 100000000 -
                       F * 10000000 - G * 1000000 - H * 100000 - I * 10000 - J * 1000 - K * 100 - L * 10));

        //First half of the luhnsum
        if ((2 * B) < 10)
        {
            luhnsum = luhnsum + 2 * B;
        }
        else
        {
            luhnsum = luhnsum + 2 * B / 10 + 2 * B - 2 * B / 10 * 10;
        }


        if ((2 * D) < 10)
        {
            luhnsum = luhnsum + 2 * D;
        }
        else
        {
            luhnsum = luhnsum + 2 * D / 10 + 2 * D - 2 * D / 10 * 10;
        }


        if ((2 * F) < 10)
        {
            luhnsum = luhnsum + 2 * F;
        }
        else
        {
            luhnsum = luhnsum + 2 * F / 10 + 2 * F - 2 * F / 10 * 10;
        }


        if ((2 * H) < 10)
        {
            luhnsum = luhnsum + 2 * H;
        }
        else
        {
            luhnsum = luhnsum + 2 * H / 10 + 2 * H - 2 * H / 10 * 10;
        }

        if ((2 * J) < 10)
        {
            luhnsum = luhnsum + 2 * J;
        }
        else
        {
            luhnsum = luhnsum + 2 * J / 10 + 2 * J - 2 * J / 10 * 10;
        }

        if ((2 * L) < 10)
        {
            luhnsum = luhnsum + 2 * L;
        }
        else
        {
            luhnsum = luhnsum + 2 * L / 10 + 2 * L - 2 * L / 10 * 10;
        }

        //Second half of the luhnsum
        luhnsum = luhnsum + A + C + E + G + I + K + M;


        if ((luhnsum - luhnsum / 10 * 10) == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //Consider the case when number has 15 digits. If it has 15 digits, it can either be AMEX or invalid
    if (number > 99999999999999 && number < 1000000000000000)
    {
        //Get the digits of the given number
        int A = (int)(number / 100000000000000);
        int B = (int)((number - A * 100000000000000) / 10000000000000);
        int C = (int)((number - A * 100000000000000 - B * 10000000000000) / 1000000000000);
        int D = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000) / 100000000000);
        int E = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000) / 10000000000);
        int F = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000) /
                      (long) 1000000000);
        int G = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000) / 100000000);
        int H = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000) / 10000000);
        int I = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000) / 1000000);
        int J = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000) / 100000);
        int K = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000 - J * 100000) / 10000);
        int L = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000 - J * 100000 - K * 10000) / 1000);
        int M = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000 - J * 100000 - K * 10000 - L * 1000) / 100);
        int N = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000 - J * 100000 - K * 10000 - L * 1000 - M * 100) / 10);
        int O = (int)((number - A * 100000000000000 - B * 10000000000000 - C * 1000000000000 - D * 100000000000 - E * 10000000000 -
                       (long) F * 1000000000 - G * 100000000 - H * 10000000 - I * 1000000 - J * 100000 - K * 10000 - L * 1000 - M * 100 - N * 10) / 1);

        //First half of luhnsum
        if ((2 * B) < 10)
        {
            luhnsum = luhnsum + 2 * B;
        }
        else
        {
            luhnsum = luhnsum + 2 * B / 10 + 2 * B - 2 * B / 10 * 10;
        }


        if ((2 * D) < 10)
        {
            luhnsum = luhnsum + 2 * D;
        }
        else
        {
            luhnsum = luhnsum + 2 * D / 10 + 2 * D - 2 * D / 10 * 10;
        }


        if ((2 * F) < 10)
        {
            luhnsum = luhnsum + 2 * F;
        }
        else
        {
            luhnsum = luhnsum + 2 * F / 10 + 2 * F - 2 * F / 10 * 10;
        }


        if ((2 * H) < 10)
        {
            luhnsum = luhnsum + 2 * H;
        }
        else
        {
            luhnsum = luhnsum + 2 * H / 10 + 2 * H - 2 * H / 10 * 10;
        }

        if ((2 * J) < 10)
        {
            luhnsum = luhnsum + 2 * J;
        }
        else
        {
            luhnsum = luhnsum + 2 * J / 10 + 2 * J - 2 * J / 10 * 10;
        }

        if ((2 * L) < 10)
        {
            luhnsum = luhnsum + 2 * L;
        }
        else
        {
            luhnsum = luhnsum + 2 * L / 10 + 2 * L - 2 * L / 10 * 10;
        }

        if ((2 * N) < 10)
        {
            luhnsum = luhnsum + 2 * N;
        }
        else
        {
            luhnsum = luhnsum + 2 * N / 10 + 2 * N - 2 * N / 10 * 10;
        }

        //Second half of luhnsum
        luhnsum = luhnsum + A + C + E + G + I + K + M + O;

        if ((luhnsum - luhnsum / 10 * 10) == 0)
        {
            if ((A == 3) && (B == 4 || B == 7))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    //Consider the case when number has 16 digits. If it has 16 digits, it can either be MASTERARD, or VISA, or invalid
    if (number > 999999999999999 && number < 10000000000000000)
    {
        //Get the digits of the given number
        int A = (int)(number / 1000000000000000);
        int B = (int)((number - A * 1000000000000000) / 100000000000000);
        int C = (int)((number - A * 1000000000000000 - B * 100000000000000) / 10000000000000);
        int D = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000) / 1000000000000);
        int E = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000) / 100000000000);
        int F = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000) /
                      10000000000);
        int G = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000) /
                      (long) 1000000000);
        int H = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000) / 100000000);
        int I = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000) / 10000000);
        int J = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000) / 1000000);
        int K = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000) / 100000);
        int L = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000 - K * 100000) / 10000);
        int M = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000 - K * 100000 - L * 10000) / 1000);
        int N = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000 - K * 100000 - L * 10000 - M * 1000) / 100);
        int O = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000 - K * 100000 - L * 10000 - M * 1000 - N * 100) /
                      10);
        int P = (int)((number - A * 1000000000000000 - B * 100000000000000 - C * 10000000000000 - D * 1000000000000 - E * 100000000000 - F *
                       10000000000 - (long) G * 1000000000 - H * 100000000 - I * 10000000 - J * 1000000 - K * 100000 - L * 10000 - M * 1000 - N * 100 - O *
                       10) / 1);


        //First half of luhnsum
        if ((2 * A) < 10)
        {
            luhnsum = luhnsum + 2 * A;
        }
        else
        {
            luhnsum = luhnsum + 2 * A / 10 + 2 * A - 2 * A / 10 * 10;
        }


        if ((2 * C) < 10)
        {
            luhnsum = luhnsum + 2 * C;
        }
        else
        {
            luhnsum = luhnsum + 2 * C / 10 + 2 * C - 2 * C / 10 * 10;
        }


        if ((2 * E) < 10)
        {
            luhnsum = luhnsum + 2 * E;
        }
        else
        {
            luhnsum = luhnsum + 2 * E / 10 + 2 * E - 2 * E / 10 * 10;
        }


        if ((2 * G) < 10)
        {
            luhnsum = luhnsum + 2 * G;
        }
        else
        {
            luhnsum = luhnsum + 2 * G / 10 + 2 * G - 2 * G / 10 * 10;
        }

        if ((2 * I) < 10)
        {
            luhnsum = luhnsum + 2 * I;
        }
        else
        {
            luhnsum = luhnsum + 2 * I / 10 + 2 * I - 2 * I / 10 * 10;
        }

        if ((2 * K) < 10)
        {
            luhnsum = luhnsum + 2 * K;
        }
        else
        {
            luhnsum = luhnsum + 2 * K / 10 + 2 * K - 2 * K / 10 * 10;
        }

        if ((2 * M) < 10)
        {
            luhnsum = luhnsum + 2 * M;
        }
        else
        {
            luhnsum = luhnsum + 2 * M / 10 + 2 * M - 2 * M / 10 * 10;
        }

        if ((2 * O) < 10)
        {
            luhnsum = luhnsum + 2 * O;
        }
        else
        {
            luhnsum = luhnsum + 2 * O / 10 + 2 * O - 2 * O / 10 * 10;
        }

        //Second half of luhnsum
        luhnsum = luhnsum + B + D + F + H + J + L + N + P;


        if ((luhnsum - luhnsum / 10 * 10) == 0)
        {
            if (A == 4)
            {
                printf("VISA\n");
            }
            else if ((A == 5) && (B == 1 || B == 2 || B == 3 || B == 4 || B == 5))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

}
