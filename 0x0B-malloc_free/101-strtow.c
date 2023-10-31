#include <stdlib.h>

	int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
	char **strtow(char *str)
{
	if (str == NULL || *str == '\0') return NULL;

    int word_count = 0;
    int in_word = 0;

    // Count the number of words
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        if (is_space(*ptr)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            word_count++;
        }
    }

    if (word_count == 0) return NULL;

    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (result == NULL) return NULL;

    in_word = 0;
    char *start = str;
    int word_index = 0;

    // Split the words
    for (char *ptr = str; ; ptr++) {
        if (is_space(*ptr) || *ptr == '\0') {
            if (in_word) {
                int word_length = ptr - start;
                result[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (result[word_index] == NULL) {
                    // Clean up and return NULL if allocation fails
                    for (int i = 0; i < word_index; i++) {
                        free(result[i]);
                    }
                    free(result);
                    return NULL;
                }
                for (int i = 0; i < word_length; i++) {
                    result[word_index][i] = start[i];
                }
                result[word_index][word_length] = '\0';
                word_index++;
                in_word = 0;
            }
            if (*ptr == '\0') break;
        } else if (!in_word) {
            in_word = 1;
            start = ptr;
        }
    }

    result[word_index] = NULL;
    return result;
}

