#include <stdio.h>

int main() {
    int frequency;
    long long a,b,c;
    scanf("%d",&frequency);
    int s[frequency];
    for( int i=1; i<=frequency; i++ ){
        scanf("%lld%lld%lld", &a, &b, &c);
        if( (a+b) > c )    s[i] = 1;
        else    s[i] = 0;
    }
    for( int i=1; i<=frequency; i++ ){
        if( s[i] )    printf("Case #%d: true\n", i);
        else    printf("Case #%d: false\n", i);
    }
    return 0;
}