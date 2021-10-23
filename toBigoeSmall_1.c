#include <stdio.h>
#include <string.h>

int main(){
    char s[1024];
    printf("Enter 1 string : ");
    scanf("%s",s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >90){ //ASCII A-Z -> 65-90
            s[i] = s[i] - 32;
        }else if(s[i] < 97){ //ASCII a-z -> 97-122
            s[i] = s[i] + 32;
        }
    }
    printf("Result : %s",s);
}
