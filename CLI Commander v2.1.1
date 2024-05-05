#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#define elif else if
int main()
{//CLICommander Version 2.1.1
  FILE *ptr1,*ptr2;
  char command[100];
  char args[100];
  char ch;
  int Flag;
  while(1)
    { Flag=0;
      //Display block
      printf("\33[0;31m");
      printf("\033[1m");
      printf("~/Some_Idiot>>");
      printf("\33[0m");
      //User input block
      char input[100 * 2]; 
      fgets(input, sizeof(input), stdin);
      sscanf(input, "%s %s", command, args);
      //Exit block
      if(strcmp(command,"exit")==0){
        exit(0);
      }
      //make directory block
      elif(strcmp(command,"mkdir")==0){
          if(mkdir(args, 0777) == 0){
              printf("\nDirectory created successfully\n");
          } else {
              perror("\nSystem error");
          }
      }
      //create directory block
      elif(strcmp(command,"cd")==0){
          if(chdir(args) == 0){
              printf("\nDirectory changed successfully\n");
          } else {
              perror("\nSystem error");
          }
      }
      //compiling block
      elif(strcmp(command, "gcc") == 0) {
        char temp[200];  
        strcpy(temp, "gcc ");  
        strcat(temp, args);  
        strcat(temp, " -o a.out"); 
        if (system(temp) == 0) {
            printf("\nCompilation successful\n");
        } else {
            perror("\nSystem error");
        }
      }
      //output block
      elif(strcmp(command,"./a.out")==0){
        system("./a.out");
      }
      //adding new file block
      elif(strcmp(command,"gedit")==0){
        ptr1=fopen(args,"w");
          if(ptr1==NULL){
            perror("\nSytem error");  Flag++;
          }if(Flag==0) {
          printf("\nFile created sucessfully\n");
           if (strlen(args) >= 2 && strcmp(args + strlen(args) - 2, ".c") == 0) {
            fputs("#include<stdio.h>\nint main()\n{\n\n\n\n\n\nreturn 0;\n}\n", ptr1);
            fclose(ptr1);        }}
        }
      //list out block
      elif(strcmp(command,"ls")==0){
          system("ls");
        }
      //screen clear block
      elif(strcmp(command,"clear")==0){
          system("clear");
        }
      //delete block
      elif(strcmp(command,"delete")==0){
        if(remove(args)==0){
          printf("\n '%s' is deleted \n",args);
        }else{
        perror("System error");      }
      }
      //present working directory block
      elif(strcmp(command,"pwd")==0){
        system("pwd");
      }
      //display content of file block
      elif(strcmp(command,"cat")==0){
        ptr1=fopen(args,"r");
          if(ptr1==NULL){
            perror("\nSytem error"); Flag++;
          }if(Flag==0){
        printf("The content of the file is \n");
        while((ch=fgetc(ptr1))!=EOF){
            printf("%c",ch);
          }
        fclose(ptr1);}
      }
      //Error block
      else{
        printf("\n'%s' is not a valid command\n",command);
      } 
//End of the program
    }
  return 0;
}
