#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int dice_rolls[100];

    for (int i=0; i<100; i++){
        dice_rolls[i] = (rand() %6) +1;
    }
        int one = 0;
        int two = 1;
        int three = 2;
        int four = 3;
        int five = 4;
        int six = 5;
        int sum = 0;

        for (int i=0; i<100; i++){
            if (dice_rolls[i] == 1){
                one++;
            }
              if (dice_rolls[i] == 2){
                two++;
            }
              if (dice_rolls[i] == 3){
                three++;
            }
              if (dice_rolls[i] == 4){
                four++;
            }
              if (dice_rolls[i] == 5){
                five++;
            }
              if (dice_rolls[i] == 6){
                six++;
            }
            sum+=dice_rolls[i];
        }

        printf("%d\n", roll1);
        printf("%d\n", roll2);
        printf("%d\n", roll3);
        printf("%d\n", roll4);
        printf("%d\n", roll5);
        printf("%d\n", roll6);
        printf("%d\n", sum); 
        printf("%.1f\n", sum/100.0);  
 
        return 0;
    }

