#include <stdio.h>

int main() {
    char science, math, pass, entrance;

    // Check for science background
    printf("Did you take science in +2 (y/n): ");
    scanf(" %c", &science);

    if (science == 'y') {
        // Check for math background
        printf("Did you take math in +2 (y/n): ");
        scanf(" %c", &math);

        if (math == 'y') {
            // Check for passing +2 exam
            printf("Did you pass +2 exam (y/n): ");
            scanf(" %c", &pass);

            if (pass == 'y') {
                // Check for BSc.CSIT entrance exam
                printf("Did you pass BSc.CSIT Entrance exam (y/n): ");
                scanf(" %c", &entrance);

                if (entrance == 'y') {
                    printf("Congrats! You meet all the requirements for BSc.CSIT!\n");
                } else {
                    printf("You are not eligible due to the BSc.CSIT Entrance exam.\n");
                }
            } else {
                printf("You are not eligible due to the +2 exam.\n");
            }
        } else {
            printf("You are not eligible due to missing math in +2.\n");
        }
    } else {
        printf("You are not eligible due to missing science in +2.\n");
    }

    return 0;
}
