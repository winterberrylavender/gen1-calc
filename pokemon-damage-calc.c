#include <stdio.h>
#include <math.h>

int main(void){

    float atk;
    float def;
    float eff;
    float bp;
    float lvl;
    float stab;
    int lowroll;
    int highroll;

    printf("What is your move's type effectiveness (.25, .5, 1, 2, 4)? ");
    scanf("%f", &eff);

    printf("What is your Pokemon's relevant attacking stat? ");
    scanf("%f", &atk);

    printf("What is your opposing's Pokemon's relevent defense stat? ");
    scanf("%f", &def);

    printf("What is your move's base power? ");
    scanf("%f", &bp);

    printf("What level is your Pokemon? ");
    scanf("%f", &lvl);

    printf("Does your move have a STAB boost (1, 1.5)? ");
    scanf("%f", &stab);

    lowroll=((2*lvl/5+2)*bp*atk/def/50+2)*stab*eff*217/255;
    highroll=((2*lvl/5+2)*bp*atk/def/50+2)*stab*eff*255/255;

    printf("\nrolls %i-%i", lowroll, highroll);

    return (0);
}