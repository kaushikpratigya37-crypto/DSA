#include <stdio.h>
int main() {
    char s[100], t[100];
    int count[26] = {0};
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
//input-----madam    madam
//output----- Anagram
//input-----car  rat
//output----- Not Anagram