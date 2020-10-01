#include<stdio.h>
#include<string.h>
int main(){
    char pat[]="saba",txt[]="sabasdaasbasabaabsabaab";
    int i,j,c=strlen(pat);
    for(i=0;i<strlen(txt);i++){
        for(j=0;j<c;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
        }
        if(j==c){
            printf("Found at %d index!\n",i);
            // break;
        }
    }
}