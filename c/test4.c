#include <stdio.h>
int main()
{
char name[ 50 ];
int marks, i, num; printf( "Enter number of student scanf( "%d" , &num); FILE *fptr; fptr = (fopen( "C:\\student.txt" ,
if (fptr == NULL) { printf( "Error!" );
exit ( 1 ); }
for (i = 0 ; i < num; ++i) { printf( "For student%d\nEnter scanf( "%s" , name); printf( "Enter marks: " ); scanf( "%d" , &marks); fprintf(fptr, "\nName: %s \nM } fclose(fptr);
return 0 ;