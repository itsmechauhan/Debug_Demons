#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source[10], char helper[10], char Destination[14]) {
    if (n == 1) {
        printf("Move disk 1 from  %s to  %s\n", source, helper);
        return;
    }
    towerOfHanoi(n - 1, source, Destination, helper);
    printf("Move disk %d from  %s to  %s\n", n, source, helper);
    towerOfHanoi(n - 1, Destination, helper, source);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Calling the recursive function
    towerOfHanoi(n, "Source", "Helper", "Destination"); // A = Source, C = Destination, B = Helper
    return 0;
}
