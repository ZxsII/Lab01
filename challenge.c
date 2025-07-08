#include <stdio.h>

int main(){

    printf("+----------------+--------+--------+\n");
    printf("| Name           | Score1 | Score2 |\n");
    printf("+----------------+--------+--------+\n");
    printf("| %-14s | %6d | %6d |\n", "Alice", 85, 90);
    printf("| %-14s | %6d | %6d |\n", "Bob", 78, 82);
    printf("| %-14s | %6d | %6d |\n", "Charlie", 92, 88);
    printf("+----------------+--------+--------+\n");
    return 0;
}