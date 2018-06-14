#include <stdio.h>
//Functions in C
 // As you have to print maximum of four here so i have 
 // used Ternary operator(?:) in it to print 
 // result in one line
// so you can see
// return Let st1 = (if a > b then a else b) which is compared with
// Let st2 = (if c > d then c else d ) which 
// leads us to conclusion if any of statement is greater let st1 
// is greater which leads us to conclusion that integer a or b is
// greater and we just again compare them which gives our answer.
// and same for if st2 is greater.    

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    return ((a > b ? a : b) > (c > d ? c : d)) ? (a > b ? a : b) : (c > d ? c : d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
