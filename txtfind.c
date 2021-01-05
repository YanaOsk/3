#define LINE 256
#define WORD 30
#include <stdio.h>
#include <string.h>
#include "mylib.h"
int getLine(char s[],char *p){
      int count=0;
      int i=0;
    while(*(p+i) != '\n' && *(p+i)!='\0' && *(p+i)!='\r' ){
           s[i]=*(p+i);
            count++;
            i++;
    }
    return count;
} 

int getWord(char w[],char *s){
     int counter=0;
    for(int i=0; *(s+i)!='\n' && *(s+i)!='\t' && *(s+i)!=' ' && *(s+i)!='\0' && *(s+i)!='\r'; i++){
             w[i]=*(s+i);

            counter++; 
    }
    return counter;
}

int similar(char *s,char *t,int n){
int a=0;
int count=0;
for(int j=0; j<strlen(s); j++){
    if(strlen(s) == strlen(t) && *(s+j) == *(t+j)){
        count++;
        }
}
if(count==strlen(t)) return 1;
for(int i=0; i<strlen(s);i++){
if(*(s+i) != *(t+a) &&strlen(s)!=1){
    n--;
}
else{
    a++;
}
}
if(n==0){
return 1;
}
else{
return 0;
}
}
//check if str2 includes in str1
int Substring(char * str1, char *str2){
int i=0,ans=0,count=0;
    
        for(int j=0;j<strlen(str1);j++){
            if(*(str1+j) == *(str2+i)){
                count++; i++;
            }
            else{
        count=0;
        i=0;
            }
    if(count == strlen(str2)){
        ans=1;
    }
        }
return ans;
}


//////////////////// Q1 ///////////////
void print_lines(char *str){
char allLine[LINE];
while (fgets(allLine,LINE,stdin)){
// printf("%s",allLine);
    if(Substring(allLine,str) == 1){
        printf("%s",allLine);
    }
}
}
///////////////////Q2//////////////////
void print_similar_words(char * str){
char allWords[LINE];
 char arr[LINE];
 char tempo[WORD];
int i=0;
while(fgets(allWords,sizeof(allWords),stdin)){
    int len = getLine(arr,allWords);
    i=0;
    while(i<len){
 char tempWord[WORD]={0};
    int temp=getWord(tempWord,allWords+i);
        if(similar(tempWord,str,1)==1){
           printf("%s\n",tempWord); 
          
        }
        i=i+temp+1;
        memset(tempo,0,WORD);
        memset(tempWord,0,WORD);
        
        
    }
}
}
/////////////////////////////////////MAIN//////////////////////////////////////////
int main(){
//////////////Second part////////////////
char firstline[LINE];
char secondline[LINE];
char answer[WORD];
int t=0;
fgets( firstline, LINE ,stdin ) ;
 fgets( secondline, LINE ,stdin ) ;
for(int i=0; firstline[i]!=' ';i++){
    answer[t]=firstline[i];
    t++;
}
//printf("%s\n",answer);//Here now we have "cat"
char choice2;
for(int i=strlen(answer)+1; answer[i] !='\n';i++){
    choice2=answer[i];
}
//printf("%c\n",choice);//Here we have now choice for switch case-or a or b
switch(choice2)
    {
        case 'a':
            print_lines(answer);
            break;

        case 'b':
            print_similar_words(answer);
            break;

        default:
            printf("Error! Operator is not correct");
    }

return 0;
}





