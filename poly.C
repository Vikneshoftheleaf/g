#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    int a[20], b, i, j, n, x, y;
    clrscr();
    printf("Enter the no of points used: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter the co-ordinate points for point %d:", i + 1);
        scanf("%d %d", &a[2 * i], &a[2 * i + 1]);
    }
    a[2 * n] = a[0]; // Closing the polygon by repeating the first point
    a[2 * n + 1] = a[1];
    
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    
    setcolor(10);
    fillpoly(n + 1, a);
    
    printf("\nEnter the pixel co-ordinates to find: ");
    scanf("%d %d", &x, &y);
    b = getpixel(x, y);
    putpixel(x, y, 2);
    printf("\nColor of the pixel at (%d,%d): %d", x, y, b);
    if (b == 15)
        printf("\nGiven pixel is inside the polygon");
    else if (b == 10)
        printf("\nGiven pixel is on the polygon");
    else
        printf("\nGiven pixel is outside the polygon");
    
    getch();
    closegraph();
}
// give this inputs
// Enter the no of points used: 4

// Enter the co-ordinate points for point 1: 50 100

// Enter the co-ordinate points for point 2: 200 100

// Enter the co-ordinate points for point 3: 200 200

// Enter the co-ordinate points for point 4: 50 200

// Enter the pixel co-ordinates to find: 150 150


