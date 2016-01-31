
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>







int main(){
FILE *datafile,*testfile;
char str1[30], str2[20], str3[20], str4[3],str5[20],str6[20],str7[20];

datafile = fopen("1511.csv", "r");
testfile= fopen("temp.test","w");
if(datafile==NULL)
{
    printf("\nError in opening datafile.");
    
}
if(testfile==NULL)
{
    printf("\nError in opening testfile.");
    
}
while(EOF != fscanf(datafile, " %[^,], %[^,], %[^,],%[^,],%[^,],%[^,], %s, %s, %s, %s, %s, %s, %s ", str1, str2, str3, str4,str5, str6, str7))
{
    fprintf(testfile,"%s 1:%s 2:%s 3:%s\n", str4,str5, str6, str7);
}
fclose(datafile);
fclose(testfile);
return 0; 
}