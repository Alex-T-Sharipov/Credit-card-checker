#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Number: ");
    
    long p15 = 1000000000000000; 
    long p14 = 100000000000000;
    long p13 = 10000000000000;
    long p12 = 1000000000000;
    long p11 = 100000000000;
    long p10 = 10000000000;
    long p9 =  1000000000;
    long p8 =  100000000;
    long p7 =  10000000;
    long p6 =  1000000;
    long p5 =  100000;
    long p4 =  10000;
    long p3 =  1000;
    long p2 =  100;
    long p1 =  10;
    
    
    
    //13 digits
    if( (number > 999999999999) && (number < 10000000000000) )
    {
        long d1 = number / p12;
        long d2 = (number - d1*p12) / p11;
        long d3 = (number - d1*p12 - d2*p11) / p10;
        long d4 = (number - d1*p12 - d2*p11 - d3*p10) / p9;
        long d5 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9) / p8;
        long d6 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8) / p7;
        long d7 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7) / p6;
        long d8 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6) / p5;
        long d9 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6 - d8*p5) / p4;
        long d10 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6 - d8*p5 - d9*p4) / p3;
        long d11 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6 - d8*p5 - d9*p4 - d10*p3) / p2;
        long d12 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6 - d8*p5 - d9*p4 - d10*p3 - d11*p2) / 10;
        long d13 = (number - d1*p12 - d2*p11 - d3*p10 - d4*p9 - d5*p8 - d6*p7 - d7*p6 - d8*p5 - d9*p4 - d10*p3 - d11*p2 - d12*10) / 1;
        
        int sum = 0;
        
        if(2 * d12 > 9)
        {
            sum+=2*d12/10 + (2*d12 - (2*d12/10)*10); 
        }
        else
        {
            sum+=2*d12;
        }
        
        if(2 * d10 > 9)
        {
            sum+=2*d10/10 + (2*d10 - (2*d10/10)*10); 
        }
        else
        {
            sum+=2*d10;
        }
    
        if(2 * d8 > 9)
        {
            sum+=2*d8/10 + (2*d8 - (2*d8/10)*10); 
        }
        else
        {
            sum+=2*d8;
        }
        
        if(2 * d6 > 9)
        {
            sum+=2*d6/10 + (2*d6 - (2*d6/10)*10); 
        }
        else
        {
            sum+=2*d6;
        }
        
        if(2 * d4 > 9)
        {
            sum+=2*d4/10 + (2*d4 - (2*d4/10)*10); 
        }
        else
        {
            sum+=2*d4;
        }
        
        if(2 * d2 > 9)
        {
            sum+=2*d2/10 + (2*d2 - (2*d2/10)*10); 
        }
        else
        {
            sum+=2*d2;
        }
        
        int sum1 = d13 + d11 + d9 + d7 + d5 + d3 + d1;
        
        int sum2 = sum + sum1;
        
        if(sum2 % 10 == 0)
        {
            if(d1 == 4)
            {
                printf("VISA\n");
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
    //15 digits
    else if(number > 99999999999999 && number < 1000000000000000)
    {
        long d1 = number / p14;
        long d2 = (number - d1*p14) / p13;
        long d3 = (number - d1*p14 - d2*p13) / p12;
        long d4 = (number - d1*p14 - d2*p13 - d3*p12) / p11;
        long d5 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11) / p10;
        long d6 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10) / p9;
        long d7 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9) / p8;
        long d8 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8) / p7;
        long d9 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7) / p6;
        long d10 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6) / p5;
        long d11 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6 - d10 * p5) / p4;
        long d12 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6 - d10 * p5 - d11 * p4) / p3;
        long d13 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6 - d10 * p5 - d11 * p4 - d12 *p3) / p2;
        long d14 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6 - d10 * p5 - d11 * p4 - d12 *p3 - d13*p2) / 10;
        long d15 = (number - d1*p14 - d2*p13 - d3*p12 - d4*p11 - d5*p10 - d6*p9 - d7 * p8 - d8 *p7 - d9*p6 - d10 * p5 - d11 * p4 - d12 *p3 - d13*p2 - d14*10)/1;
        

        int sum = 0;
        
        if(2 * d14 > 9)
        {
            sum+=2*d14/10 + (2*d14 - (2*d14/10)*10); 
        }
        else
        {
            sum+=2*d14;
        }
        
        if(2 * d12 > 9)
        {
            sum+=2*d12/10 + (2*d12 - (2*d12/10)*10); 
        }
        else
        {
            sum+=2*d12;
        }
        
        if(2 * d10 > 9)
        {
            sum+=2*d10/10 + (2*d10 - (2*d10/10)*10); 
        }
        else
        {
            sum+=2*d10;
        }
    
        if(2 * d8 > 9)
        {
            sum+=2*d8/10 + (2*d8 - (2*d8/10)*10); 
        }
        else
        {
            sum+=2*d8;
        }
        
        if(2 * d6 > 9)
        {
            sum+=2*d6/10 + (2*d6 - (2*d6/10)*10); 
        }
        else
        {
            sum+=2*d6;
        }
        
        if(2 * d4 > 9)
        {
            sum+=2*d4/10 + (2*d4 - (2*d4/10)*10); 
        }
        else
        {
            sum+=2*d4;
        }
        
        if(2 * d2 > 9)
        {
            sum+=2*d2/10 + (2*d2 - (2*d2/10)*10); 
        }
        else
        {
            sum+=2*d2;
        }
        
        int sum1 = d15 + d13 + d11 + d9 + d7 + d5 + d3 + d1;
        
        int sum2 = sum + sum1;
        
        if(sum2 % 10 == 0)
        {
            if(d1 == 3 && (d2 == 4 || d2 == 7))
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
    //16 digits
    else if(number > 999999999999999 && number < 10000000000000000)
    {
        long d1 =  number / p15; 
        long d2 = (number - d1 *p15) / p14;
        long d3 = (number - d1 *p15 - d2 * p14)/p13;
        long d4 = (number - d1 *p15 - d2 * p14 - d3 *p13)/p12;
        long d5 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12)/p11;
        long d6 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11)/p10;
        long d7 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10)/p9;
        long d8 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9)/p8;
        long d9 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8)/p7;
        long d10 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7)/p6;
        long d11 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6)/p5;
        long d12 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6 - d11*p5)/p4;
        long d13 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6 - d11*p5-d12*p4)/p3;
        long d14 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6 - d11*p5-d12*p4-d13*p3)/p2;
        long d15 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6 - d11*p5-d12*p4-d13*p3-d14*p2)/10;
        long d16 = (number - d1 *p15 - d2 * p14 - d3 *p13 - d4*p12 - d5*p11 - d6*p10 - d7*p9 - d8*p8 - d9*p7 - d10*p6 - d11*p5-d12*p4-d13*p3-d14*p2-d15*10)/1;
        
        int sum = 0;
        
        if(2 * d15 > 9)
        {
            sum+=2*d15/10 + (2*d15 - (2*d15/10)*10); 
        }
        else
        {
            sum+=2*d15;
        }
        
        if(2 * d13 > 9)
        {
            sum+=2*d13/10 + (2*d13 - (2*d13/10)*10); 
        }
        else
        {
            sum+=2*d13;
        }
        
        if(2 * d11 > 9)
        {
            sum+=2*d11/10 + (2*d11 - (2*d11/10)*10); 
        }
        else
        {
            sum+=2*d11;
        }
    
        if(2 * d9 > 9)
        {
            sum+=2*d9/10 + (2*d9 - (2*d9/10)*10); 
        }
        else
        {
            sum+=2*d9;
        }
        
        if(2 * d7 > 9)
        {
            sum+=2*d7/10 + (2*d7 - (2*d7/10)*10); 
        }
        else
        {
            sum+=2*d7;
        }
        
        if(2 * d5 > 9)
        {
            sum+=2*d5/10 + (2*d5 - (2*d5/10)*10); 
        }
        else
        {
            sum+=2*d5;
        }
        
        if(2 * d3 > 9)
        {
            sum+=2*d3/10 + (2*d3 - (2*d3/10)*10); 
        }
        else
        {
            sum+=2*d3;
        }
        
        if(2 * d1 > 9)
        {
            sum+=2*d1/10 + (2*d1 - (2*d1/10)*10); 
        }
        else
        {
            sum+=2*d1;
        }
        
        int sum1 = d16 + d14 + d12 + d10 + d8 + d6 + d4 + d2;
        
        int sum2 = sum + sum1;
        
        printf("%i\n", sum);
        printf("%i\n", sum1);
        
        if(sum2 % 10 == 0)
        {
            if(d1 == 4)
            {
                printf("VISA\n");
            }
            else if (d1 == 5 && (d2 == 1 || d2 == 2 || d2 == 3 || d2 == 4 || d3 == 5))
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
    else
    {
         printf("INVALID\n");
    }
    
}