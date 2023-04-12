#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    
    int s1_len = 0;
    while (s1[s1_len] != '\0') {
        s1_len++;
    }
    
    int s2_len = 0;
    while (s2[s2_len] != '\0') {
        s2_len++;
    }
    
    char *concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
    if (concat_str == NULL) {
        return NULL;
    }
    
    int i, j;
    for (i = 0; i < s1_len; i++) {
        concat_str[i] = s1[i];
    }
    for (j = 0; j < s2_len; j++) {
        concat_str[s1_len + j] = s2[j];
    }
    concat_str[s1_len + s2_len] = '\0';
    
    return concat_str;
}
