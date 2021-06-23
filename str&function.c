typedef struct{
    int ID;
    int mark;
    char grade;
}student;
#include<stdio.h>
char grade(student n){
    char g;
     if(n.mark>=90) g='A+';
else if(n.mark>=80) g='A';
else if(n.mark>=70) g='A-';
else if(n.mark>=65) g='B+';
else if(n.mark>=60) g='B';
else if(n.mark>=55) g='B-';
else if(n.mark>=50) g='C';
else if(n.mark>=40) g='D';
else g='F';
return g;
}
int main()
{
    int n,i,j;
        student s;
        printf("Enter ID: ");  scanf("%d",&s.ID);
        printf("\nEnter Mark: "); scanf("%d",&s.mark);
        s.grade=grade(s);

    printf("Enter Student ID: ");
        printf("\n ID: %d\nMark: %d\nGrade: %c\n",s.ID,s.mark,s.grade);
        printf("\n\n Enter student ID: ");
    return 0;

}
