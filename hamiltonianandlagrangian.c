2. Hamiltonian and Lagrangian
Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb Mid Semester examination, it�s now time for the results. The TAs have released the marks of students in the form of an array, where arr[i] represents the marks of the ith student.
Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array.
Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.
Output Format
Output all the integers separated in the array from left to right that are not smaller than those on its right side.
Constraints
1 <= n <= 1000000
0 <= arr[i] <= 10000





#include<stdio.h>
int main()
{
int marks[10],i,n;
printf("Enter the number of students\n");
scanf("%d", &n);
printf("Enter the marks of the students\n");
for(i=0;i<n;i++)
{
scanf("%d", &marks[i]);
}
for(i=0;i<n;i++)
{
if(marks[i]<marks[i+1])

printf("%d\t", marks[i+1]);

}
if(marks[n-1]<marks[n-2])
{
printf("%d", marks[n-1]);
}
}