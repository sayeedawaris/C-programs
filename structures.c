// print details of students in tabular form.
// Finding student who scored the highest marks.

#include <stdio.h>
struct student{
  int rollno;
  char name[50];
  float marks;
};
int main() {
    int i,max,n,rn;
    printf("How many students are in your class? ");
    scanf("%d",&n);
    
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter roll no, name, marks of student number %d: ",i+1);
        scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    
    printf("Roll no\t\t Name\t\t Marks\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t %s\t\t %f\t\t\n",s[i].rollno,s[i].name,s[i].marks);
    }
    
    max=s[0].marks;
    rn=0;
    for(i=1;i<n;i++)
    {
        if(max<s[i].marks)
        {
            max=s[i].marks;
            rn=i;
        }
    }
    printf("Student who scored highest marks is %s with %.2f marks",s[rn].name,s[rn].marks);
    return 0;
}
