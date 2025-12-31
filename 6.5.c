#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int count_vowels_with_pointer(char *str);

int main() {
    char sentence[MAX_SIZE];
    int vowel_count;

    printf("Enter a sentence: ");

    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    vowel_count = count_vowels_with_pointer(sentence);

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}

int count_vowels_with_pointer(char *str) {
    int count = 0;
    char *char_ptr = str; 

    while (*char_ptr != '\0') {
        char current = tolower(*char_ptr); 
        switch (current) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            default:
                break;
        }
        char_ptr++; 
    }
    return count; 
}