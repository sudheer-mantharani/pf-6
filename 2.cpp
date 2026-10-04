#include <stdio.h>
int main() {
    int total_quizzes;
    printf("Enter number of quizzes: ");
    scanf("%d", &total_quizzes);
    printf("\n");
    int highest = -1, lowest = 9999;
    int count_80_above = 0, count_below_50 = 0;
    int continuously_improving = 1, previous_marks = -1;
    for (int i = 1; i <= total_quizzes; i++) {
        int current_marks;
        printf("Enter marks for quiz %d: ", i);
        scanf("%d", &current_marks);
        if (current_marks > highest) highest = current_marks;
        if (current_marks < lowest) lowest = current_marks;
        if (current_marks >= 80) count_80_above++;
        if (current_marks < 50) count_below_50++;
        if (i > 1 && current_marks <= previous_marks) {
            continuously_improving = 0; }
        previous_marks = current_marks;}
    printf("\n\n");
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Quizzes with 80 or above: %d\n", count_80_above);
    printf("Quizzes below 50: %d\n", count_below_50);
    printf("Performance continuously improving: %s\n", continuously_improving ? "Yes" : "No");
    return 0;}

