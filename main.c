#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double x[] = {1, 2, 4, 3, 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    double y[] = {
    17910.1,
    17853.75,
    17688.05,
    17563.2,
    17759.95,
    17655.3,
    17700.15,
    17633.4,
    17710.95,
    17625.6,
    17643.05,
    17718.25,
    17727.8,
    17677.9,
    17544.9,
    17348.65,
    17377.4,
    17370.45,
    17325.5,
    16986.95,
    16596.9,
    16765.85,
    16857.65
    };

    int i,sum=0;
    double mean_x;
    for(i=1;i<=23;i++)
    {
        sum+=sum;
    }
    mean_x=sum/23;
    double mean_y;
    for(i=1;i<=23;i++)
    {
        sum+=sum;
    }
    mean_y=sum/23;

    double num,den=0;
    for (i=1;i<=23;i++)
    {
        num += (x[i] - mean_x)*(y[i] - mean_y);
        den += pow((x[i] - mean_x),2);
    }

    float m,c;
    m=num/den;
    c=mean_y - m*mean_x;

    float pred_y;
    pred_y = m*32+c;
    printf("m:%f\nc:%f\n",m,c);
    printf("predicted y value: %f",pred_y);
}
