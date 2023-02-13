/*Brute-Force or Naive String Search algorithm searches for a string (also called pattern) within larger string.
It checks for character matches of pattern at each index of string.
If all characters of pattern match with string then search stops.
If not, it shifts to the next index of string for check.
It has worst case complexity of O(mn). Where m is length of pattern and n is length of string.*/
#include <stdio.h>
#include <string.h>
 
// Brute-force string search function
void string_search(char *string, char *pattern, int s_len, int p_len) {
    int i = 0;
    int found = 0;
    for(; i < s_len - p_len + 1; i++) {
        int j = 0;
        for (; j < p_len; j++) {
            if (string[i + j] != pattern[j])
                break;
        }
        if (j == p_len) {   // If we have reached end of pattern, we have found the pattern in string
            found = 1;
            break;
        }
    }
    if (found)
        printf("Found pattern at index: %d\n", i);
    else
        printf("Could not find the pattern\n");
}
 
// Driver function
int main() {
    char *string = "DIVYANK PATIL";
    char *pattern = "AT";
    int s_len = strlen(string);
    int p_len = strlen(pattern);
 
    string_search(string, pattern, s_len, p_len);
 
    return 0;
}
