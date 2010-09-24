#include<stdio.h>
#include<unistd.h>  
int main() {          
   fprintf(stdout,"euid: %d",geteuid());
   fprintf(stdout,"uid: %d",getuid());
}
