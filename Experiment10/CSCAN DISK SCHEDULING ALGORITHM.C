#include <stdio.h>

void main() {
    int t[20], d[20], h, i, j, n, temp, k, atr[20], tot, p, sum = 0;

    // Input the number of tracks to be traversed
    printf("enter the no of tracks to be traversed");
    scanf("%d", &n);

    // Input the initial position of the head
    printf("enter the position of the head");
    scanf("%d", &h);

    t[0] = 0;
    t[1] = h;

    // Input the total number of tracks on the disk
    printf("enter total tracks");
    scanf("%d", &tot);

    t[2] = tot - 1;

    // Input the tracks to be accessed
    printf("enter the tracks");
    for (i = 3; i <= n + 2; i++)
        scanf("%d", &t[i]);

    // Bubble sort to arrange the tracks in ascending order
    for (i = 0; i <= n + 2; i++) {
        for (j = 0; j <= (n + 2) - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    p = 0;
    // Add tracks in ascending order after the initial position
    while (t[j] != tot - 1) {
        atr[p] = t[j];
        j++;
        p++;
    }
    atr[p] = t[j];
    p++;
    i = 0;
    // Add tracks in ascending order before the initial position
    while (p != (n + 3) && t[i] != t[h]) {
        atr[p] = t[i];
        i++;
        p++;
    }

    // Calculate the distance moved by the head for each track
    for (j = 0; j < n + 2; j++) {
        if (atr[j] > atr[j + 1])
            d[j] = atr[j] - atr[j + 1];
        else
            d[j] = atr[j + 1] - atr[j];
        sum += d[j];
    }

    // Output the total header movements and the average movement
    printf("total header movements: %d\n", sum);
    printf("avg is %f", (float)sum / n);
}
