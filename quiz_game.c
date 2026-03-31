#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[][100] = {"What is the largest planet in the Solar System?",
                             "What is the hotest planet?",
                             "Which planet has most of the moons?",
                             "Is the Earth flat?"};

    char options[][100] = {"\n A)Jupiter\n B)Saturn\n C)Uranus\n D)Neptune",
                           "\n A)Mercury\n B)Venus\n C)Earth\n D)Mars",
                           "\n A)Earth\n B)Mars\n C)Jupiter\n D)Saturn",
                           "\n A)Yes\n B)No\n C)Maybe\n D)Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("***** QUIZ GAME *****\n");

    for (int i = 0; i < questionCount; i++)
    {

        printf("\n%s", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);
        
        if (guess == answerKey[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }

    printf("\nYour score is %d out of %d points.\n", score, questionCount);

    return 0;
}