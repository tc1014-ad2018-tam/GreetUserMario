/*
 * Este programa fue creado con el proposito de practicar el que el programa se cierre en caso de que se le den variables
 * no aceptadas
 *
 * Mario Emilio Aguilar Chung
 * 8/27/2018
 * A01411210@itesm.mx
 */
#include <stdio.h>
#include <stdlib.h>
int main() {
    //Here we ask the user to input the variables
    int hour;
    int minute;
    printf("Please input the hour in 24 hour form:");
    scanf("%i", &hour);
    //Here we establish the allowed numbers for the hout
    if ((24<hour)&&(0>hour))
        goto error1;
        else
        {
            printf("Please input the minute:");
            scanf("%i", &minute);
            //Here we establish the allowed numbers for the minutes
            if (60<minute)
                goto error2;
            else
                //Here we establish which numbers constitute morning
            {if ((2<=hour) && (hour<12))
                    goto morning;
                else
                    //Here we establish which numbers constitute afternoon
                {if ((12<=hour) && (hour<19))
                        goto afternoon;
                        //Here we establish which numbers constitute evening
                    else
                    {if ((19<=hour) && (hour<22))
                            goto evening;

                        else
                            //Here we establish which numbers constitute night
                        {if ((22<=hour) && (hour<24))
                                goto night;
                            else
                            {if ((0<hour) && (hour<=2))
                                    goto night;}
                        }
                    }
                }
            }
        }

    error1:
    printf("error, wrong hour format");
    exit(0);

    error2:
    printf("error, wrong minute format");
    exit(0);

    morning:
    printf ("The time is: %i",hour);
    printf(":%i \n",minute);
    printf("Good morning");
    exit(0);

    afternoon:
    printf ("The time is: %i",hour);
    printf(":%i \n",minute);
    printf("Good afternoon");
    exit(0);

    evening:
    printf ("The time is: %i",hour);
    printf(":%i \n",minute);
    printf("Good evening");
    exit(0);

    night:
    printf ("The time is: %i",hour);
    printf(":%i \n",minute);
    printf("Good night");
    exit(0);


}