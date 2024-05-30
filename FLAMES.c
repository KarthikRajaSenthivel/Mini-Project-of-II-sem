#include <stdio.h>
#include <string.h>

// Function to calculate FLAMES result
char calculateFLAMES(char name1[], char name2[]) {
    int i, j, count1 = 0, count2 = 0;
    char result;
    
    // Convert names to lowercase
    for (i = 0; name1[i]; i++) {
        if (name1[i] >= 'A' && name1[i] <= 'Z')
            name1[i] += 32; // Convert uppercase to lowercase
    }
    for (i = 0; name2[i]; i++) {
        if (name2[i] >= 'A' && name2[i] <= 'Z')
            name2[i] += 32; // Convert uppercase to lowercase
    }
    
    // Count occurrence of each character in name1
    for (i = 0; name1[i]; i++) {
        if (name1[i] != ' ') // Exclude spaces
            count1++;
    }
    
    // Count occurrence of each character in name2
    for (i = 0; name2[i]; i++) {
        if (name2[i] != ' ') // Exclude spaces
            count2++;
    }
    
    // Calculate difference in lengths
    int diff = count1 - count2;
    if (diff < 0)
        diff *= -1;
    
    // Determine FLAMES result
    char flames[] = "FLAMES";
    int len = strlen(flames);
    int index = diff % len;
    result = flames[index];
    
    return result;
}

int main() {
    char name1[100], name2[100], result;
    int i;
    
    // Input names
    printf("Enter name 1: ");
    gets(name1);
    printf("Enter name 2: ");
    gets(name2);
    
    // Calculate FLAMES result
    result = calculateFLAMES(name1, name2);
    
    // Print result
    switch (result) {
        case 'F':
            printf("Friendship\n");
            break;
        case 'L':
            printf("Love\n");
            break;
        case 'A':
            printf("Affection\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enemy\n");
            break;
        case 'S':
            printf("Sibling\n");
            break;
        default:
            printf("Error\n");
            break;
    }
    
    return 0;
}
