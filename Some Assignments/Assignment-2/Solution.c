#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct student_marks {
    char id[10];
    int bangla;
    int english;
    int math;
};
int i, n;
float calc_grade(int mark){
    float grade;
    if(100>=mark && mark>=80)return grade = 4.00;
    if(79>=mark && mark>=75)return grade = 3.75;
    if(74>=mark && mark>=70)return grade = 3.75;
    if(69>=mark && mark>=65)return grade = 3.25;
    if(64>=mark && mark>=60)return grade = 3.00;
    if(59>=mark && mark>=55)return grade = 2.75;
    if(54>=mark && mark>=50)return grade = 2.50;
    if(49>=mark && mark>=45)return grade = 2.25;
    if(44>=mark && mark>=40)return grade = 2.00;
    if(39>=mark && mark>=0)return grade = 0.00;
}

void make_gradesheet(struct student_marks st[]) {
    float grade; char name[50];
    FILE *studentid;

    for(i=1; i<=n; i++){
        strcpy(name,st[i].id);
        strcat(name, ".txt");

        studentid = fopen("studentid.txt", "w");

        fprintf(studentid, "Student Id: %s", st[i].id);
        grade = calc_grade(st[i].bangla);
        fprintf(studentid, "\nBangla: %d (%.2f)", st[i].bangla, grade);
        grade = calc_grade(st[i].english);
        fprintf(studentid, "\nEnglish: %d (%.2f)", st[i].english, grade);
        grade = calc_grade(st[i].math);
        fprintf(studentid, "\nMath: %d (%.2f)", st[i].math, grade);

        fclose(studentid);

        rename("studentid.txt", name);
    }
}

int main(){
    struct student_marks st[10];
    FILE* fp;
    fp = fopen("marks.txt", "r");
    if(fp == NULL){
        printf("file does not exist\n");
        exit(0);
    }
    fscanf(fp, "%d", &n);
    for(i=1; i<=n; i++){
        fscanf(fp, "%s %d %d %d", st[i].id, &st[i].bangla, &st[i].english, &st[i].math);
    }
    fclose(fp);
    make_gradesheet(st);
}
