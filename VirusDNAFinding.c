#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void virusIndices(char* p, char* v) {
    //Function compares DNA strings and finds sub-patterns.
    int i = 0, j = 0, k = 0, flag = 0;
    int maxError;
    int pSize = strlen(p), vSize = strlen(v);
    for (i = 0; p[i] != '\0'; i++) {
        if ((pSize-i) < vSize) { 
            //Condition to not make useless comparisons
            break;
        }
        j = 0;
        maxError = 0;
        k = i;
        while ((maxError <= 1) && (v[j] != '\0') && (p[k] != '\0')) {    
            if (p[k] != v[j]) {
                maxError++;
            }
            k++;
            j++;
        }
        if (v[j] == '\0' && maxError <= 1) {
            flag = 1;
            printf ("%d ", i);
            //Prints the index each time a Match is found 
        }
    }
    if (flag == 0) {
        //Prints only if no Match was found
        printf ("No Match!");
    }
    printf ("\n");
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        char* p = (char *)malloc(512000 * sizeof(char));
        char* v = (char *)malloc(512000 * sizeof(char));
        scanf("%s %s", p, v);
        virusIndices(p, v);
    }
    return 0;
}
