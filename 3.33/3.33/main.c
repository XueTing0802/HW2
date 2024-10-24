#include <stdio.h>

void put(const char* text) {
    printf("%s", text);
}

void rectangle(int height, int width) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row == 0 || row == height - 1 || col == 0 || col == width - 1) {
                put("*");
            }
            else {
                put(" ");
            }
        }
        put("\n");
    }
}

int main() {
    int width;
    int height;

    put("Enter the width of the rectangle: ");
    scanf_s("%d", &width);

    put("Enter the height of the rectangle: ");
    scanf_s("%d", &height);

    rectangle(height, width);

    return 0;
}