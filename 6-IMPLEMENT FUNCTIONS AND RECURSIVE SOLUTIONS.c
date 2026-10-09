#include <stdio.h> 
int square(int n); 
int factorial(int n); 
int main() 
{ 
int n, res, fact; 
printf("Enter a number: "); 
scanf("%d", &n); 
res = square(n); 
fact = factorial(n); 
printf("\nSquare of %d = %d", n, res); 
printf("\nFactorial of %d = %d", n, fact); 
return 0; 
} 
int square(int n) 
{ 
int res; 
res = n * n; 
return res; 
} 
int factorial(int n) 
{ 
int res; 
if(n == 0 || n == 1) 
{ 
return 1; 
}
else 
{ 
res = n * factorial(n - 1); 
return res; 
} 
} 
