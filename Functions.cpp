#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.


*/

int max_of_four(int a, int b, int c, int d){
    
    int new_max = max(a,b);
    int new_max_2 = max(c,d);
    
    int result = max(new_max,new_max_2);
    
    return result;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
