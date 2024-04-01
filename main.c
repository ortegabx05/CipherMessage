#include <stdio.h>

int main(void) {
    char text[1000];
    int shift;

    printf("Enter the text: ");

    scanf(" %[^\n]", text);

    printf("Enter the shift amount: ");
  
    scanf("%d", &shift);

    printf("Text: %s\n", text);
    printf("Shift: %d\n", shift);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + ((text[i] - 'A' + shift) % 26 + 26) % 26;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + ((text[i] - 'a' + shift) % 26 + 26) % 26;
        }
    }

    printf("Cipher: %s\n", text);

    return 0;
}