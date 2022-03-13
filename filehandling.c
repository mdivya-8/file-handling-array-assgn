1.// findout the number of vowels in the given file//
#include <stdio.h>
void main{
   char x;
   int count;
   FILE *fp=fopen("file1.txt","r");
   if(fp==null){
       printf("file does not exist\n");
   }
   else{
       x=fgetc(fp);
       while(x!=EOF){
           if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
           count++;
           x=fgetc(fp);
       }
       fclose(fp);
       printf("the no of vowels is %d",count);
}
}

2.// concatination//
#include <stdio.h>
void main(){
    FILE *fp1=fopen("a.txt","r");
    FILE *fp2=fopen("b.txt","r");
    FILE *fp3=fopen("c.txt","a");
    char x;
    if(fp1!=NULL){
        x=fgetc(fp1);
        while(x!=EOF){
            fputc(x,fp3);
            x=fgetc(fp1);
        }
    }
    if(fp2!=NULL){
        x=fgetc(fp2);
        while(x!=EOF){
            fputc(x,fp3);
            x=fgetc(fp1);
}
}
rewind(fp3);
        x=fgetc(fp3);
        while(x!=EOF){
          printf("%c",x);
            x=fgetc(fp3);
        }
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
}

3.read and write a string

#include <stdio.h>
void main(){
char x[20],char *y="helloworld";
FILE *fp=fopen("file2.txt","r+");
fputs(y,fp);
fgets(x,5,fp);
printf("%s",x);
fclose(fp);
}
4.write mode
#include <stdio.h>

int main()
{
   FILE *fp=fopen("file.txt","w");
   if(fp)
   printf("file opened sucessful\n");
   else
   printf("file opened not successful\n");
}
