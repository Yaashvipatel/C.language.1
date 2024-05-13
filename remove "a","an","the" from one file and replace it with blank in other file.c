#include <stdio.h>
#include <string.h>
int main(){
    FILE* fptr1,*fptr2;
    int a,b,i,n,c,len;
    char s[50],s1[50];
    fptr1=fopen("data.txt","w");
    printf("enter paragraph:\n ");
    fgets(s,50,stdin);
    for(i=0;i!=strlen(s);i++)
    fputc(s[i],fptr1);
    fclose(fptr1);
   fptr1=fopen("data.txt","r");
    fptr2=fopen("del.txt","w");
    printf("The contents of data.txt are: \n");
    while(fgets(s,50,fptr1)){
        printf("%s",s);      
    }  
    fclose(fptr1);
    fptr1=fopen("data.txt","r");
    while(fgets(s,50,fptr1)){
        a=0,b=0,i=0;
        len=strlen(s);
        while(*(s+i)!='\0'&&*(s+i)!='\n'){   
            c=0;
            while((*(s+i)>='A'&&*(s+i)<='Z')||(*(s+i)>='a'&&*(s+i)<='z')&&i<len){
                s1[c++]=s[i++];
            }
            s1[c]=0;
            if(!(strcmp(s1,"a")==0||strcmp(s1,"an")==0||strcmp(s1,"the")==0)){
                fprintf(fptr2,"%s",s1);
            }
            fprintf(fptr2,"%c",' ');
            i++;   
        }
        fprintf(fptr2,"%c",'\n');
    }
    fclose(fptr1);
    fclose(fptr2);
    fptr2=fopen("del.txt","r");
    printf("\n\t\t\t********OUTPUT********\n\n");
    while(fgets(s,50,fptr2)){
        printf("%s",s);      
    }
    fclose(fptr2);
}
