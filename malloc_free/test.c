#include <stdio.h>
#include <stdlib.h>

char *_strdup(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char *s = (char *)malloc((length + 1) * sizeof(char));

    if (s != NULL) {
        for (int i = 0; i < length; i++) {
            s[i] = str[i];
        }
        s[length] = '\0'; 
    } else {
        return NULL;
    }

    return s;
}
