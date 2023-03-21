#include <stdio.h>
#include <string.h>

void remove_extra_spaces(char str[]) {
    int len = strlen(str);
    int i, j;

    for (i = 0; i < len; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (j = i + 1; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    remove_extra_spaces(str);

    printf("Modified string: %s", str);

    return 0;
}
