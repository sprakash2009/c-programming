#include <stdio.h> 
struct Student 
{ 
int rollno; 
char name[50]; 
char attendance; 
}; 
int main() 
{ 
struct Student s[50]; 
FILE *fp; 
int n, i; 
int present = 0, absent = 0; 
printf("===== REAL-TIME ATTENDANCE SYSTEM =====\n"); 
printf("Enter the number of students: "); 
scanf("%d", &n); 
printf("\nEnter student details:\n"); 
for(i = 0; i < n; i++) 
{ 
printf("\nStudent %d\n", i + 1); 
printf("Roll Number: "); 
scanf("%d", &s[i].rollno); 
printf("Name: "); 
scanf("%s", s[i].name); 
printf("Attendance (P/A): "); 
scanf(" %c", &s[i].attendance); 
if(s[i].attendance == 'P' || s[i].attendance == 'p') 
{ 
present++; 
} 
else 
{ 
absent++; 
} 
} 
fp = fopen("attendance.txt", "w"); 
if(fp == NULL) 
{ 
printf("Unable to open file."); 
return 0; 
} 
fprintf(fp, "===== ATTENDANCE REPORT =====\n"); 
fprintf(fp, "Roll No\tName\tAttendance\n"); 
for(i = 0; i < n; i++) 
{ 
fprintf(fp, "%d\t%s\t%c\n", 
s[i].rollno, 
s[i].name, 
s[i].attendance); 
} 
fprintf(fp, "\nPresent = %d\n", present); 
fprintf(fp, "Absent = %d\n", absent); 
fclose(fp); 
printf("\n===== ATTENDANCE REPORT =====\n"); 
printf("Roll No\tName\tAttendance\n"); 
for(i = 0; i < n; i++) 
{ 
printf("%d\t%s\t%c\n", 
s[i].rollno, 
s[i].name, 
s[i].attendance); 
} 
printf("\nTotal Present = %d", present); 
printf("\nTotal Absent = %d", absent); 
printf("\n\nAttendance saved successfully."); 
return 0; 
}
