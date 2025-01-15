#include <stdio.h>
#include <stdlib.h>


int alsa();

int main(){
    printf("\nthis is a bus tool for craze peple\n");
    printf(" #### >> this tool maded for find and now nember of the bus and the place that it.s go in agadir city \n");
    printf("write the name of place or the nember of bus");
    alsa();
    return 0;
}


int alsa(){
    FILE *file;
    char filename[1000] = "address.txt";
    char str[1000];
    int line_nemb;
    scanf("%d",&line_nemb);
    file = fopen(filename,"r");
    int i = 1;
    while (fgets(str,sizeof(str),file)){
        if (i == line_nemb){
            printf("%s",str);
            break;
        }
        i++;
    }
    if (i != line_nemb){
    
// this citys dont found in the addr*.txt 
         if (line_nemb == 95){
            printf("95) الولاية - بن سركاو - سوق انزكان - ايت ملول ");
         }else if (line_nemb == 97){

            printf("97) الولاية - بن سركاو - مستشفى الدشيرة - سوق انزكان");
         }else if (line_nemb == 98){

             printf("98) الميناء - الولاية - بن سركاو - محطة انزكان");
        }else{
             printf("not found");
        }
    }

// close file
    fclose(file);

    return 0;

}

