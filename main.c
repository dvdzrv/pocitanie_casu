#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Uvod, 0.
        printf("Ideme vypocitat kolko casu ti zaberie sa dostat do skoly!\n");
    //Premenne, 1.
        int minutes1, hours1, minutes2, hours2, y, z, result, result_hour, result_minute;
    //Vstavanie, 2.
        printf("Zadaj v naslednom poradi v aky cas si vstal! \nNajprv hodiny potom minuty: \n");
        printf("Zadaj hodiny:");
        scanf("%d", &hours1);
        printf("Zadaj minuty:");
        scanf("%d", &minutes1);
    //Rekapitulacia casu, 2.B
        printf("Zadal si cas: %d:%d \n", hours1, minutes1);
    //Cas kedy si prisiel do skoly, 3.
        printf("Teraz zadaj cas kedy si prisiel do skoly! Cas zadaj v poradi hodiny, nasledne minuty \n");
        printf("Zadaj hodiny:");
        scanf("%d", &hours2);
        printf("Zadaj minuty:");
        scanf("%d", &minutes2);
    //Rekapitulacia 3, 3.B
        printf("Zadal si cas: %d:%d \n", hours2, minutes2);
    //Prepocet hodin na minuty, 4.
        y= hours1*60+minutes1;
        z= hours2*60+minutes2;
    //Odpocitanie casov, 5.
        result=z-y;
    //Prepocet na hodiny a minuty, 6.
        result_hour=result/60;
        result_minute=result-result_hour*60;
    //Vysledok, 7.
        printf("Cas kolko ti to trvalo: %d:%d", result_hour, result_minute);

        printf("\nPress ENTER key to END\n");
        getch();
        return 0;
}