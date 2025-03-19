#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate permutations using backtracking
void generatePermutations(char* str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(&str[l], &str[i]);
        generatePermutations(str, l + 1, r);
        swap(&str[l], &str[i]); // Backtrack to restore the original string
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("All permutations of the string are:\n");
    generatePermutations(str, 0, n - 1);

    return 0;
}
