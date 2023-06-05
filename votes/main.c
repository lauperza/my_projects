#include <stdio.h>
#include <string.h>

void bubble_sort_desc(int votes[], char options[][20], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (votes[j] < votes[j + 1]) {
                int temp = votes[j];
                votes[j] = votes[j + 1];
                votes[j + 1] = temp;
                char temp_option[20];
                strcpy(temp_option, options[j]);
                strcpy(options[j], options[j + 1]);
                strcpy(options[j + 1], temp_option);
            }
        }
    }
}
int main()
{
    int votes[] = {0, 0, 0, 0};
    char options[][20] = {"football", "basket", "handball", "tennis"};
    int input;
    int n = sizeof(votes) / sizeof(votes[0]);

    printf("if you want to play %s, type  1 \n", options[0]);
    printf("if you want to play %s, type  2 \n", options[1]);
    printf("if you want to play %s, type  3 \n", options[2]);
    printf("if you want to play %s, type  4 \n", options[3]);
 do
 {
     printf("enter the option: ");
     scanf("%i", &input);
     if (input >= 1 && input <= n) {
         votes[input - 1]++;
         printf("Thanks for your vote!\n");
     } else if (input != -1) {
         printf("Invalid choice. Please enter a number between 1 and %d.\n", n);
     }
 }while(input != -1);
    bubble_sort_desc(votes, options, n);
    printf("results for the vote:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d votes\n", options[i], votes[i]);
    }
    printf("The winner is %s, with %d votes, congratulations", options[0], votes[0]);
    return 0;
}


