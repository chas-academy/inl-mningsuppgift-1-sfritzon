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
        int roll1 = 0;
        int roll2 = 1;
        int roll3 = 2;
        int roll4 = 3;
        int roll5 = 4;
        int roll6 = 5;
        int sum = 0;

        for (int i=0; i<100; i++){
            if (dice_rolls[i] == 1){
                roll1++;
            }
              if (dice_rolls[i] == 2){
                roll2++;
            }
              if (dice_rolls[i] == 3){
                roll3++;
            }
              if (dice_rolls[i] == 4){
                roll4++;
            }
              if (dice_rolls[i] == 5){
                roll5++;
            }
              if (dice_rolls[i] == 6){
                roll6++;
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
        printf("%.1f", sum/100.0);  
 
        return 0;
    }

