#include<stdio.h>
typedef struct student
{
    char *name;
    char *school;
    int age,id;
}Credentials;
void main()
{
    Credentials data;
    char ans, grade;
    char correct[] ={'a','b','a','c','a','b','c','d','d','c'};
    char *name, *school;
    int right = 0,wrong =0, age;
    float percentage = 0.0;
    printf("*********************************************\n");
    printf("             Here Is Your Quiz               \n");
    printf("*********************************************\n");

    printf("Enter Your Credentials:-\n");
    printf("Enter Your Name:- \n");
        gets(data.name);
    printf("Enter your school:- \n");
        gets(data.school);
    fflush(stdin);
    printf("Enter your age:- \n");
        scanf("%d", &data.age);
    printf("Enter your id:- \n");
        scanf("%d", &data.id);

    printf("*********************************************\n");
    printf("Now you can begin the quiz All The Best...\n");
    printf("*********************************************\n");


    printf("Q1 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    scanf("%c",&ans);
    if(ans == correct[0])
        right++;
    else
        wrong++;

    printf("Q2 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[1])
        right++;
    else
        wrong++;


    printf("Q3 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[2])
        right++;
    else
        wrong++;


    printf("Q4 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[3])
        right++;
    else
        wrong++;


    printf("Q5 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[4])
        right++;
    else
        wrong++;


    printf("Q6 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[5])
        right++;
    else
        wrong++;


    printf("Q7 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[6])
        right++;
    else
        wrong++;


    printf("Q8 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[7])
        right++;
    else
        wrong++;


    printf("Q9 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[8])
        right++;
    else
        wrong++;


    printf("Q10 ->  Which Bird Can not Fly?\n");
    printf("Options:-\n");
    printf("a) Ostrich\n");
    printf("b) Pigeon\n");
    printf("c) Kingfisher\n");
    printf("d) Owl\n");
    printf("Enter your answer...\n");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans == correct[9])
        right++;
    else
        wrong++;

    percentage = (right/(right+wrong))*100;

    printf("*********************************************\n");
    printf("Your Scorecard:- \n");
    printf("*********************************************\n");

    if(right <=3)
        grade = 'D';
    else if(right >3 && right <=6)
        grade = 'C';
    else if(right > 6 && right <=8)
        grade = 'B';
    else
        grade = 'A';

    printf("*********************************************\n");
    printf("Details Of Candiate:- \n");
    printf("*********************************************\n");

    printf("Name Of Candidate:- %s\n", data.name);
    printf("Name Of school:- %s\n", data.school);
    printf("Age Of Candidate:- %d\n", data.age);
    printf("Id Of Candidate:- %d\n", data.id);
    printf("Correct Answers:- %d\n", right);
    printf("Wrong Answers:- %d\n", wrong);
    printf("Your Scoring Percentage:- %.2f\n", percentage);
    printf("Your Grade:- %c\n", grade);

}