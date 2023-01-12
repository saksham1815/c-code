// Q 1 C program to perform all arithmetic 
// operations
// #include <stdio.h>
// int main()
// {
//  int num1, num2;
//  int sum, sub, mult, mod;
//  float div;
//  printf("Enter any two numbers: ");
//  scanf("%d%d", &num1, &num2);
//  sum = num1 + num2;
//  sub = num1 - num2;
//  mult = num1 * num2;
//  div = (float)num1 / num2;
//  mod = num1 % num2;
//  printf("SUM = %d\n", sum);
//  printf("DIFFERENCE = %d\n", sub);
//  printf("PRODUCT = %d\n", mult);
//  printf("QUOTIENT = %f\n", div);
//  printf("MODULUS = %d", mod);
//  return 0; 
// }
// Q2 C program to find area of a triangle if 
// base and height are given.
// #include <stdio.h>
// int main()
// {
//  float base, height, area;
//  printf("Enter base of the triangle: ");
//  scanf("%f", &base);
//  printf("Enter height of the triangle: ");
//  scanf("%f", &height);
//  area = (base * height) / 2;
//  printf("Area of the triangle = %.2f sq. 
// units", area);
//  return 0;
// }
// 3. C program to find all angles of a 
// triangle if two angles are given.
// #include <stdio.h>
// int main()
// {
//  int a, b, c;
//  printf("Enter two angles of triangle: ");
//  scanf("%d%d", &a, &b);
//  c = 180 - (a + b);
//  printf("Third angle of the triangle = 
// %d", c);
//  return 0;
// }
// Q4 C program to convert days in to 
// years, weeks and days.
// #include <stdio.h>
// int main()
// {
//  int days, years, weeks;
//  printf("Enter days: ");
//  scanf("%d", &days);
//  years = (days / 365); 
//  weeks = (days % 365)/7;
//  days = days - ((years * 365) + (weeks * 
// 7));
//  printf("YEARS: %d\n", years);
//  printf("WEEKS: %d\n", weeks);
//  printf("DAYS: %d", days);
//  return 0;
// }
// Q5 C program to find power and square 
// root of any number.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//  double num, root;
//  printf("Enter any number to find 
// square root: ");
//  scanf("%lf", &num);
//  root = sqrt(num);
//  printf("Square root of %.2lf = %.2lf", 
// num, root);
//  return 0;
// }
// Q6 C program to calculate total, average 
// and percentage and grades of five 
// subjects.
// #include <stdio.h>
// int main()
// {
//  float eng, phy, chem, math, comp; 
//  float total, average, percentage;
//  printf("Enter marks of five subjects: 
// \n");
//  scanf("%f%f%f%f%f", &eng, &phy, 
// &chem, &math, &comp);
//  total = eng + phy + chem + math + 
// comp;
//  average = total / 5.0;
//  percentage = (total / 500.0) * 100;
//  printf("Total marks = %.2f\n", total);
//  printf("Average marks = %.2f\n", 
// average);
//  printf("Percentage = %.2f", 
// percentage);
//  return 0;
// }
// Q7 C program to check Least Significant 
// Bit (LSB) and MSB of a number using 
// bitwise operator.
// #include <stdio.h>
// int main()
// {
//  int num;
//  printf("Enter any number: ");
//  scanf("%d", &num);
//  if(num & 1)
//  printf("LSB of %d is set (1).", num);
//  else
//  printf("LSB of %d is unset (0).", 
// num);
//  return 0;
// }
// Q8 C program to swap two numbers 
// USING 3RD VARIABLE AND WITHOUT 
// 3RD VARIABLE
// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("Enter two numbers \n");
// scanf("%d%d",&a,&b);
// int x=a,y=b;
// printf("value of a and b before 
// swapping is : %d and %d\n",a,b);
// c=a;
// a=b;
// b=c;
// printf("Value of a and b after 
// swapping with use of third variable is: %d 
// and %d\n",a,b);
// printf("----------------------------------
// ---------------\n");
// //without using third variable;
// x=x+y;
// y=x-y;
// x=x-y;
//  printf("Value of a and b after 
// swapping without using third variable is: 
// %d and %d\n",x,y);
// }
// Q9 C program to find maximum between 
// three numbers using conditional 
// operator AND Ternary Operator
// #include <stdio.h>
// int main()
// {
//  int num1, num2, num3, max;
//  printf("Enter three numbers: ");
//  scanf("%d%d%d", &num1, &num2, 
// &num3);
//  max = (num1 > num2 && num1 > 
// num3) ? num1 :
//  (num2 > num3) ? num2 : num3;
//  printf("\nMaximum between %d, %d 
// and %d = %d", num1, num2, num3, max);
//  return 0;
// }
// 10. C program to check alphabet, digit or 
// special character using Conditional 
// operator.
// #include <stdio.h>
// int main()
// {
//  char ch;
//  printf("Enter any character: ");
//  scanf("%c", &ch);
//  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' 
// && ch <= 'Z'))
//  {
//  printf("'%c' is alphabet.", ch);
//  }
//  else if(ch >= '0' && ch <= '9')
//  {
//  printf("'%c' is digit.", ch);
//  }
//  else 
//  {
//  printf("'%c' is special character.", 
// ch);
//  }
//  return 0;
// }
// 11. C program to calculate total 
// electricity bill.
// #include<stdio.h>
// int main()
// {
//  int unit;
//  float amt, total_amt, sur_charge;
//  printf("Enter total units consumed: ");
//  scanf("%d", &unit);
//  if(unit <= 50)
//  {
//  amt = unit * 0.50;
//  }
//  else if(unit <= 150)
//  {
//  amt = 25 + ((unit-50) * 0.75);
//  }
//  else if(unit <= 250)
//  {
//  amt = 100 + ((unit-150) * 1.20);
//  }
//  else
//  {
//  amt = 220 + ((unit-250) * 1.50);
//  }
//  sur_charge = amt * 0.20;
//  total_amt = amt + sur_charge;
//  printf("Electricity Bill = Rs. %.2f", 
// total_amt);
//  return 0;
// }
// Q 12 C program to create Simple 
// Calculator AND Days of week using 
// switch case.
// #include <stdio.h>
// int main() {
//  char op;
//  double first, second;
//  printf("Enter an operator (+, -, *, /): ");
//  scanf("%c", &op);
//  printf("Enter two operands: ");
//  scanf("%lf %lf", &first, &second);
//  switch (op) {
//  case '+':
//  printf("%.1lf + %.1lf = %.1lf", first, 
// second, first + second);
//  break;
//  case '-':
//  printf("%.1lf - %.1lf = %.1lf", first, 
// second, first - second);
//  break;
//  case '*':
//  printf("%.1lf * %.1lf = %.1lf", first, 
// second, first * second);
//  break;
//  case '/':
//  printf("%.1lf / %.1lf = %.1lf", first, 
// second, first / second);
//  break;
//  default:
//  printf("Error! operator is not 
// correct");
//  }
//  return 0;
// }
// 13. C program to check vowel or 
// consonant using switch case
// #include <stdio.h>
// int main()
// {
//  char ch;
//  printf("Enter any alphabet: ");
//  scanf("%c", &ch);
//  switch(ch)
//  {
//  case 'a': 
//  printf("Vowel");
//  break;
//  case 'e': 
//  printf("Vowel");
//  break;
//  case 'i': 
//  printf("Vowel");
//  break;
//  case 'o': 
//  printf("Vowel");
//  break;
//  case 'u': 
//  printf("Vowel");
//  break;
//  case 'A': 
//  printf("Vowel");
//  break;
//  case 'E': 
//  printf("Vowel");
//  break;
//  case 'I': 
//  printf("Vowel");
//  break;
//  case 'O': 
//  printf("Vowel");
//  break;
//  case 'U': 
//  printf("Vowel");
//  break;
//  default: 
//  printf("Consonant");
//  }
//  return 0;
// }
// 14. C program to check positive negative 
// or zero using switch case.
// #include <stdio.h>
// int main()
// {
//  int num;
//  printf("Enter any number: ");
//  scanf("%d", &num);
//  switch (num > 0)
//  {
//  case 1:
//  printf("%d is positive number.", 
// num);
//  break;
//  case 0:
//  switch (num < 0)
//  {
//  case 1: 
//  printf("%d is negative 
// number.", num);
//  break;
//  case 0:
//  printf("%d is zero.", num);
//  break;
//  }
//  break;
//  }
//  return 0;
// }
// Q 15 C program to check whether a 
// triangle is Equilateral, Isosceles or 
// Scalene.
// #include <stdio.h>
// int main()
// {
//  int side1, side2, side3;
//  printf("Enter three sides of triangle: ");
//  scanf("%d%d%d", &side1, &side2, 
// &side3);
//  if(side1==side2 && side2==side3) 
//  {
//  printf("Equilateral triangle.");
//  }
//  else if(side1==side2 || side1==side3 || 
// side2==side3) 
//  {
//  printf("Isosceles triangle.");
//  }
//  else 
//  {
//  printf("Scalene triangle.");
//  }
//  return 0;
// }
// 16. C program to print all natural 
// numbers AND sum of it from 1 to n.
// #include <stdio.h>
// int main()
// {
//  int i, n;
//  printf("Enter any number: ");
//  scanf("%d", &n);
//  printf("Natural numbers from 1 to %d : 
// \n", n);
//  for(i=1; i<=n; i++)
//  {
//  printf("%d\n", i);
//  }
//  return 0;
// }
// 17. C program to print all even numbers 
// AND sum of it from 1 to n
// #include <stdio.h>
// int main()
// {
//  int i, n, sum=0;
//  printf("Enter upper limit: ");
//  scanf("%d", &n);
//  printf("Even numbers from 2 to %d is 
// :",n);
//  for(i=2; i<=n; i+=2)
//  {
//  printf("%d ",i);
//  sum += i;
//  }
//  printf("\n");
//  printf("Sum of all even number 
// between 1 to %d = %d", n, sum);
//  return 0;
// }
// 18. C program to print multiplication 
// table of a number
// #include <stdio.h>
// int main() {
//  int n, i;
//  printf("Enter an integer: ");
//  scanf("%d", &n);
//  for (i = 1; i <= 10; ++i) {
//  printf("%d x %d = %d \n", n, i, n * i);
//  }
//  return 0;
// }
// 19. C program to calculate factorial of a 
// number.
// #include<stdio.h>
// void main(){
//  int n,fact=1;
//  printf("Enter the number whose 
// factorial is to be found: ");
//  scanf("%d",&n);
//  while(n>0){
//  fact =fact*n;
//  n -=1;
//  }
//  printf("The factorial of the above 
// number is: %d",fact);
// }
// 20. C program to check whether a 
// number is palindrome or not.
// #include <stdio.h>
// int main() {
//  int n, reversed = 0, remainder, original;
//  printf("Enter an integer: ");
//  scanf("%d", &n);
//  original = n;
//  while (n != 0) {
//  remainder = n % 10;
//  reversed = reversed * 10 + 
// remainder;
//  n /= 10;
//  }
//  if (original == reversed)
//  printf("%d is a palindrome.", 
// original);
//  else
//  printf("%d is not a palindrome.", 
// original);
//  return 0;
// }
// 22. C program to find HCF(GCD) AND 
// LCM of two numbers.
// #include <stdio.h>
// int main() {
//  int a, b, x, y, t, gcd, lcm;
//  printf("Enter two integers\n");
//  scanf("%d%d", &x, &y);
//  a = x;
//  b = y;
//  while (b != 0) {
//  t = b;
//  b = a % b;
//  a = t;
//  }
//  gcd = a;
//  lcm = (x*y)/gcd;
//  printf("Greatest common divisor of %d 
// and %d = %d\n", x, y, gcd);
//  printf("Least common multiple of %d 
// and %d = %d\n", x, y, lcm);
//  return 0;
// }
// 23. C program to print all prime numbers 
// between 1 to n.
// #include <stdio.h>
// int main()
// {
//  int i, j, end, isPrime;
//  printf("Find prime numbers between 1 
// to : ");
//  scanf("%d", &end);
//  printf("All prime numbers between 1 
// to %d are:\n", end);
//  for(i=2; i<=end; i++)
//  {
//  isPrime = 1; 
//  for(j=2; j<=i/2; j++)
//  {
//  if(i%j==0)
//  {
//  isPrime = 0;
//  break;
//  }
//  }
//  if(isPrime==1)
//  {
//  printf("%d, ", i);
//  }
//  }
//  return 0;
// }
// 24. C program to print all Strong 
// Numbers between 1 to n
// #include <stdio.h>
// int main()
// {
//  int i, j, cur, lastDigit, end;
//  long long fact, sum;
//  printf("Enter upper limit: ");
//  scanf("%d", &end);
//  printf("All Strong numbers between 1 
// to %d are:\n", end);
//  for(i=1; i<=end; i++)
//  {
//  cur = i;
//  sum = 0;
//  while(cur > 0)
//  {
//  fact = 1ll;
//  lastDigit = cur % 10;
//  for( j=1; j<=lastDigit; j++)
//  {
//  fact = fact * j;
//  }
//  sum += fact; 
//  cur /= 10;
//  }
//  if(sum == i)
//  {
//  printf("%d, ", i);
//  }
//  }
//  return 0;
// }
// 25. C program to print Fibonacci series 
// up to n terms.
// #include <stdio.h>
// int main()
// {
//  int a, b, c, i, terms;
//  printf("Enter number of terms: ");
//  scanf("%d", &terms);
//  a = 0;
//  b = 1;
//  c = 0;
//  printf("Fibonacci terms: \n");
//  for(i=1; i<=terms; i++)
//  {
//  printf("%d, ", c);
//  a = b; 
//  b = c; 
//  c = a + b;
//  }
//  return 0;
// }
// 26. C program to print Armstrong 
// numbers from 1 to n.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//  int num, lastDigit, digits, sum, i, end;
//  printf("Enter upper limit: ");
//  scanf("%d", &end);
//  printf("Armstrong number between 1 
// to %d are: \n", end);
//  for(i=1; i<=end; i++)
//  {
//  sum = 0;
//  num = i;
//  digits = (int) log10(num) + 1;
//  while(num > 0)
//  {
//  lastDigit = num % 10;
//  sum = sum + ceil(pow(lastDigit, 
// digits));
//  num = num / 10;
//  }
//  if(i == sum)
//  {
//  printf("%d, ", i);
//  }
//  }
// return 0;
// }
// 27.C program to print all Perfect 
// numbers between 1 to n
// #include <stdio.h>
// int main()
// {
//  int i, j, end, sum;
//  printf("Enter upper limit: ");
//  scanf("%d", &end);
//  printf("All Perfect numbers between 1 
// to %d:\n", end);
//  for(i=1; i<=end; i++)
//  {
//  sum = 0;
//  for(j=1; j<i; j++)
//  {
//  if(i % j == 0)
//  {
//  sum += j;
//  }
//  }
//  if(sum == i)
//  {
//  printf("%d, ", i);
//  }
//  }
// return 0;
// }
// 28. C program to find power of any 
// number using for loop.
// #include <stdio.h>
// int main()
// {
//  int base, exponent;
//  long long power = 1;
//  int i;
//  printf("Enter base: ");
//  scanf("%d", &base);
//  printf("Enter exponent: ");
//  scanf("%d", &exponent);
//  for(i=1; i<=exponent; i++)
//  {
//  power = power * base;
//  }
//  printf("%d ^ %d = %lld", base, exponent, 
// power);
//  return 0;
// }
// 29. C program to print ASCII values of all 
// characters.
// #include <stdio.h>
// int main()
// {
//  int i;
//  for(i=0; i<=255; i++) 
//  {
//  printf("ASCII value of character %c = 
// %d\n", i, i);
//  }
// return 0;
// }
// 30. C program to print Pascal triangle up 
// to n row
// #include <stdio.h> 
// int getFactorial(int n); 
// int main() { 
//  int row, rows, i, value;
 
//  printf("Enter Number of Rows of 
// Pascal Triangle\n"); 
//  scanf("%d", &rows); 
 
//  for(row = 0; row < rows; row++) { 
//  for(i = row; i <= rows; i++) 
//  printf(" "); 
 
//  for(i = 0; i <= row; i++) { 
//  value = 
// getFactorial(row)/(getFactorial(i)*getFact
// orial(row-i)); 
//  printf("%4d", value); 
//  } 
 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// int getFactorial(int N){
//  if(N < 0){
//  printf("Invalid Input: factorial not 
// defined for \
// negative numbers\n");
//  return 0;
//  }
//  int nFactorial = 1, counter;
//  for(counter = 1; counter <= N; 
// counter++){
//  nFactorial = nFactorial * counter;
//  } 
//  return nFactorial;
// }
// 31. C program to find sum of all elements 
// of array.
// #include<stdio.h>
// int main()
// {
//  int arr[100], size, i, sum = 0;
//  printf("Enter array size\n");
//  scanf("%d",&size);
//  for(i = 0; i < size; i++){
//  printf("Enter array elements on 
// index [%d]\n",i);
//  scanf("%d",&arr[i]);
//  }
//  for(i = 0; i < size; i++)
//  sum = sum + arr[i];
//  printf("Sum of the array = %d\n",sum);
 
//  return 0;
// }
// 32. C program to copy one array to 
// another array.
// #include <stdio.h>
// int main()
// {
 
//  int a[5] = { 3, 6, 9, 2, 5 }, n = 5;
//  int b[n], i;
//  for (i = 0; i < n; i++) {
//  b[i] = a[i];
//  }
//  printf("The first array is :");
//  for (i = 0; i < n; i++) {
//  printf("%d ", a[i]);
//  }
//  printf("\nThe second array is :");
//  for (i = 0; i < n; i++) {
//  printf("%d ", b[i]);
//  }
//  return 0;
// }
// 33 C program to insert an element in 
// array at specified position. 
// #include <stdio.h>
// int main()
// { int Array[10], Position, i, Number, 
// Value;
// printf("\nPlease Enter Number of 
// elements in an array\n");
//  scanf("%d", &Number);
//  printf("\nPlease Enter %d elements of 
// an Array \n", Number);
//  for (i = 0; i < Number; i++)
//  {
//  scanf("%d", &Array[i]);
//  } 
//  printf("\nPlease Enter the location of a 
// Element you want to insert\n");
//  scanf("%d", &Position);
//  printf("\nPlease Enter the value of an 
// Array Emenent to insert\n");
//  scanf("%d", &Value);
//  for (i = Number - 1; i >= Position - 1; i--)
//  {
//  Array[i+1] = Array[i];
//  }
//  Array[Position-1] = Value;
//  printf("\n Final Array after Inserting an 
// Elemnt is:\n");
// for (i = 0; i <= Number; i++)
//  {printf("%d\t", Array[i]);
//  } 
// return 0;
// }
// 34 C program to delete an element in 
// array at specified position
// #include <stdio.h>
// #define MAX_SIZE 100
// int main()
// { int arr[MAX_SIZE];
// int i, size, pos;
// printf("Enter size of the array : ");
// scanf("%d", &size);
// printf("Enter elements in array : ");
//  for(i=0; i<size; i++)
//  { scanf("%d", &arr[i]);
//  }
// printf("Enter the element position to 
// delete : ");
// scanf("%d", &pos);
// if(pos < 0 || pos > size)
//  { printf("Invalid position! Please enter 
// position between 1 to %d", size);}
//  else
//  { for(i=pos-1; i<size-1; i++)
//  {
//  arr[i] = arr[i + 1];
//  }
// size--;
// printf("\nElements of array after delete 
// are : ");
// for(i=0; i<size; i++)
//  {
//  printf("%d\t", arr[i]);
//  }
//  }
// return 0;
// }
// 35 C program to search element in array 
// using Linear Search. 
// #include <stdio.h>
// int main(){
//  int inputArray[100], elementCount, 
// counter, num;
 
//  printf("Enter Number of Elements in 
// Array\n");
//  scanf("%d", &elementCount);
//  printf("Enter %d numbers \n", 
// elementCount);
//  for(counter = 0; counter < 
// elementCount; counter++){
//  scanf("%d", &inputArray[counter]); }
//  printf("Enter a number to serach in 
// Array\n");
//  scanf("%d", &num);
// for(counter = 0; counter < 
// elementCount; counter++){
//  if(inputArray[counter] == num){
//  printf("Number %d found at index 
// %d\n", num, counter);
//  break;
//  }
//  }
 
//  if(counter == elementCount){
//  printf("Number %d Not Present in 
// Input Array\n", num);
//  }
//  return 0;
// }
// 36 C program to find second largest 
// number and Sorting Using Bubble sort in 
// an array. 
// #include <stdio.h>
// int main()
// {
// int arr[50], i, Size;
// int first, second;
// printf("\n Please Enter the 
// Number of elements in an array : ");
// scanf("%d", &Size);
// printf("\n Please Enter %d 
// elements of an Array \n", Size);
// for (i = 0; i < Size; i++)
// {
// scanf("%d", &arr[i]);
//  }
// first = second = INT_MIN; 
// for (i = 0; i < Size; i++)
// {
// if(arr[i] > first)
// {
// second = first;
// first = arr[i];
// }
// else if(arr[i] > second && 
// arr[i] < first)
// {
// second = arr[i];
// }
// }
// printf("\n The Largest Number in this 
// Array = %d", first);
// printf("\n The Second Largest Number in 
// this Array = %d", second);
// return 0;
// }
// 37 C Program Count Number of 
// Duplicate Elements in An ArrayC
// #include <stdio.h>
// int main()
// {
//  int a[10000],b[10000],i,j,n,c=0 ;
// printf("Enter size of the array : ");
// scanf("%d", &n);
// printf("Enter elements in array : ");
//  for(i=0; i<n; i++)
//  {
//  scanf("%d",&a[i]);
//  } for(i=0; i<n; i++)
//  {
//  if(a[i]!=-1)
// {
//  for(j=i+1; j<n; j++)
 
//  {
//  if(a[i]==a[j])
//  {
//  c++;
//  a[j]=-1;
//  }
//  }
// }
 
 
 
//  }printf("duplicate numbers in the 
// array: %d",c);
// return 0;
// }
// 38 C program to perform scalar 
// matrix multiplication.
// #include <stdio.h>
// #define SIZE 3 
// int main()
// {
//  int A[SIZE][SIZE]; 
//  int x, row, col;
//  printf("Enter elements in matrix of size 
// %dx%d: \n", SIZE, SIZE);
//  for(row=0; row<SIZE; row++)
//  {
//  for(col=0; col<SIZE; col++)
//  {
//  scanf("%d", &A[row][col]);
//  }
//  } 
// printf("Enter any number to multiply 
// with matrix A: ");
//  scanf("%d", &x);
//  for(row=0; row<SIZE; row++)
//  {
//  for(col=0; col<SIZE; col++)
//  {
//  A[row][col] = x * A[row][col];
//  }
//  }
// printf("\nResultant matrix c.A = \n");
//  for(row=0; row<SIZE; row++)
//  {
//  for(col=0; col<SIZE; col++)
//  {
//  printf("%d ", A[row][col]);
//  }
//  printf("\n");
//  }
//  return 0;
// }
// 39 C Program to find Sum of 
// Diagonal Elements of a Matrix 
// #include<stdio.h>
// int main()
// {
// int i, j, rows, columns, 
// a[10][10], Sum = 0;
// printf("\n Please Enter Number 
// of rows and columns : ");
// scanf("%d %d", &i, &j);
// printf("\n Please Enter the 
// Matrix Elements \n");
// for(rows = 0; rows < i; rows++)
//  {
//  for(columns = 
// 0;columns < j;columns++)
//  {
//  scanf("%d", 
// &a[rows][columns]);
//  }
//  }
 
// for(rows = 0; rows < i; 
// rows++)
//  {
//  Sum = Sum + 
// a[rows][rows];
//  }
// printf("\n The Sum of 
// Diagonal Elements of a Matrix = 
// %d", Sum );
// return 0;
// }
// 40 C program to check sparse matrix.
// 1 1 0
// 0 0 2
// 0 0 0
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//  int row,col,i,j,a[10][10],count = 0;
//  printf("Enter row
// ");
//  scanf("%d",&row);
//  printf("Enter Column
// ");
//  scanf("%d",&col);
//  printf("Enter Element of Matrix1
// ");
//  for(i = 0; i < row; i++){
//  for(j = 0; j < col; j++){
//  scanf("%d",&a[i][j]);
//  }
//  }
//  printf("Elements are:
// ");
//  for(i = 0; i < row; i++){
//  for(j = 0; j < col; j++){
//  printf("%d\t",a[i][j]);
//  }
//  printf("
// ");
//  }
//  for(i = 0; i < row; i++){
//  for(j = 0; j < col; j++){
//  if(a[i][j] == 0)
//  count++;
//  }
//  }
//  if(count > ((row * col)/2))
//  printf("Matrix is a sparse matrix ");
//  else
//  printf("Matrix is not sparse matrix");
// }
// 40 C program to check transpose 
// matrix.
// #include <stdio.h>
// int main() {
//  int a[10][10], transpose[10][10], r, c;
//  printf("Enter rows and columns: ");
//  scanf("%d %d", &r, &c);
//  printf("\nEnter matrix elements:\n");
//  for (int i = 0; i < r; ++i)
//  for (int j = 0; j < c; ++j) {
//  printf("Enter element a%d%d: ", i + 1, j 
// + 1);
//  scanf("%d", &a[i][j]);
//  }
//  printf("\nEntered matrix: \n");
//  for (int i = 0; i < r; ++i)
//  for (int j = 0; j < c; ++j) {
//  printf("%d ", a[i][j]);
//  if (j == c - 1)
//  printf("\n");
//  }
//  for (int i = 0; i < r; ++i)
//  for (int j = 0; j < c; ++j) {
//  transpose[j][i] = a[i][j];
//  }
//  printf("\nTranspose of the matrix:\n");
//  for (int i = 0; i < c; ++i)
//  for (int j = 0; j < r; ++j) {
//  printf("%d ", transpose[i][j]);
//  if (j == r - 1)
//  printf("\n");
//  }
//  return 0;
// }
// 41. C program to check whether a matrix 
// is Identity matrix or not.
// #include<stdio.h>
// int main()
// {
// int i, j, rows, columns, a[10][10], Flag = 
// 1;
//  printf("\n Please Enter Number of rows 
// and columns : ");
// scanf("%d %d", &i, &j);
// printf("\n Please Enter the Matrix 
// Elements \n");
// for(rows = 0; rows < i; rows++)
//  {
//  for(columns = 0; columns 
// < j; columns++)
//  {
//  scanf("%d", 
// &a[rows][columns]);
//  }
//  }
 
// for(rows = 0; rows < i; rows++)
//  {
//  for(columns = 0; columns 
// < j; columns++)
//  {
//  if(a[rows][columns] != 1 
// && a[columns][rows] != 0)
//  {
//  Flag = 0;
//  break;
// }
//  }
//  }
//  if(Flag == 1)
//  {
//  printf("\n The Matrix 
// that you entered is an Identity Matrix ");
// }
// else
// {
// printf("\n The Matrix 
// that you entered is Not an Identity 
// Matrix ");
// }
 
// return 0;
// }
// 42 c program to merge two sorted array 
// in ascending order
// #include <stdio.h>
// void mergeSorted(int src1[], int src2[], 
//  int newArr[], int n1, int n2)
// {
//  int i = 0, j = 0, k = 0; 
//  while (i < n1 && j < n2) 
//  { 
//  if (src1[i] <= src2[j]) 
//  { 
//  newArr[k++] = src1[i++]; 
//  } 
//  else 
//  { 
//  newArr[k++] = src2[j++]; 
//  } 
//  } 
//  while (i < n1) 
//  {
//  newArr[k++] = src1[i++]; 
//  }
//  while (j < n2) 
//  { 
//  newArr[k++] = src2[j++]; 
//  } 
// }
// int main()
// {
//  int src1[] = {9, 18, 27, 36, 45};
//  int src2[] = {10, 20, 30, 40, 50};
// int n1 = sizeof(src1)/sizeof(src1[0]);
//  int n2 = sizeof(src2)/sizeof(src2[0]);
//  int newArr[n1+n2];
// mergeSorted(src1, src2, newArr, n1, n2);
//  printf("New array = ");
//  for (int i = 0; i < n1+n2; i++) {
//  printf("%d ",newArr[i]);
//  }
// return 0;
// }
// 44 C program to check whether a string 
// is palindrome or not without Compare 
// Function of String. 
// #include<stdio.h>
// int main()
// {
//  char string[40];
//  int length=0, flag=1,i;
//  printf("Enter string:\n");
//  gets(string);
//  for(i=0;string[i]!='\0';i++)
//  {
//  length++;
//  }
// for(i=0;i< length/2;i++)
//  {
//  if( string[i] != string[length-1-i] )
//  {
//  flag=0;
//  break;
//  }
//  }
//  if(flag==1)
//  {
//  printf("PALINDROME");
//  }
//  else
//  {
//  printf("NOT PALINDROME");
//  }
//  return 0;
// }
// 45 C program to count frequency of each 
// character in a string. 
// #include <stdio.h>
// #include <string.h>
// #define MAX 100 
// int main(){
//  char string[MAX];
//  int i, length;
//  int frequency[20];
//  printf("enter the string:");
//  gets(string);
//  length = strlen(string);
//  for(i=0; i<20; i++){
//  frequency[i] = 0;
//  }
//  for(i=0; i<length; i++){
//  if(string[i]>='a' && string[i]<='z'){
//  frequency[string[i] - 97]++;
//  }
//  else if(string[i]>='A' && string[i]<='Z'){
//  frequency[string[i] - 65]++;
//  }
//  }
// printf("Frequency of all characters in 
// string: ");
//  for(i=0; i<20; i++){
//  if(frequency[i] != 0){
//  printf("'%c' = %d", (i + 97), 
// frequency[i]);
//  }
//  }
//  return 0;
// }
// 46 C program to find diameter, 
// circumference and area of a circle using 
// functions. 
// #include<stdio.h>
// #define PI 3.14
// int main()
// {
//  float radius, area, circumference, 
// diameter;
//  printf("\n Please Enter the radius of a 
// circle : ");
//  scanf("%f",&radius);
// diameter = 2 * radius;
//  circumference = 2 * PI * radius;
//  area = PI * radius * radius; 
// printf("\n Diameter Of a Circle = %.2f\n", 
// diameter);
//  printf("\n Circumference Of a Circle = 
// %.2f\n", circumference);
//  printf("\n Area Of a Circle = %.2f\n", 
// area);
// return 0;
// }
// 48 C program to add two number using 
// pointers. 
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//  int num1, num2, sum;
//  int *ptr1, *ptr2;
//  printf("Enter any two Number: ");
//  scanf("%d%d", &num1, &num2);
//  ptr1 = &num1;
//  ptr2 = &num2;
//  sum = *ptr1 + *ptr2;
//  printf("\nSum of %d and %d is %d", 
// *ptr1, *ptr2, sum);
//  getch();
//  return 0;
// }
// 49 C program to swap two number using 
// call by reference
// #include <stdio.h>
// void swap(int * num1, int * num2);
// int main()
// {
//  int num1, num2;
//  printf("Enter two numbers: ");
//  scanf("%d%d", &num1, &num2);
//  printf("Before swapping in main n");
//  printf("Value of num1 = %d \n", 
// num1);
//  printf("Value of num2 = %d \n\n", 
// num2);
//  swap(&num1, &num2);
//  printf("After swapping in main n");
//  printf("Value of num1 = %d \n", 
// num1);
//  printf("Value of num2 = %d \n\n", 
// num2);
// return 0;
// }
// 50 C program to copy the contents of 
// one array into another in the reverse 
// order
// #include <stdio.h>
// void printArray(int arr[], int len)
// {
//  int i;
//  for (i = 0; i < len; i++) {
//  printf("%d ", arr[i]);
//  }
// }
// int main()
// {
//  int original_arr[] = {1, 2, 3, 4, 5};
//  int len = 
// sizeof(original_arr)/sizeof(original_arr[0])
// ;
//  int copied_arr[len], i, j;
//  for (i = 0; i < len; i++) {
//  copied_arr[i] = original_arr[len - i -
// 1];
//  } printf("\nOriginal array: ");
//  printArray(original_arr, len);
//  printf("\nResultant array: ");
//  printArray(copied_arr, len);
//  return 0;
// }
// LIST OF STAR PATTERN PROGRAMMING 
// EXERCISES 
// Square star pattern 
// ***** 
// ***** 
// ***** 
// ***** 
// ***** 
// #include<stdio.h
// > int main() 
// { 
// int n; 
//  printf("Enter the number of 
// rows: "); scanf("%d", &n); 
// for(int r = 1; r <= n; r++) 
//  { 
//  for(int c = 1; c <= n; c++) 
//  { 
//  printf("*"); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// Right Triangle Star pattern 
// * 
// ** 
// *** 
// **** 
// ***** 
// #include<stdio.h
// > int main() 
// { 
// int n; 
// printf
// ("Ent
// er 
// the 
// num
// ber 
// of 
// rows: 
// "); 
// scanf
// ("%d
// ", 
// &n); 
 
//  for(int i = 1; i <= n; i++) 
//  { 
//  for(int j = 1; j <= i; j++) 
//  { 
//  printf("*"); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// Pyramid Star Pattern 
//  * 
//  ** 
//  *** 
//  **** 
//  ***** 
// #include<stdio.h> 
// int main() 
// { 
// int n; 
//  printf("Enter number of rows: 
// "); scanf("%d", &n); 
//  for(int i = 1; i <= n; i++) 
//  { 
//  for(int s = 1; s <= n-i; s++) 
// printf(" "); for(int j = 1; j <= 
// i; j++) printf("*"); 
// printf("\n"); 
//  } 
//  return 0; 
// } 
// PYRAMID STAR PATTERN 
//  * 
//  *** 
//  ***** 
// ******* 
// #include<stdio.h
// > int main() 
// { 
// int n; 
//  printf("Enter number of rows: 
// "); scanf("%d", &n); 
//  for(int i = 1; i <= n; i++) 
//  { 
//  for(int j = 1; j <= n; j++) 
//  { 
//  if(j <= n-i) printf(" 
// "); else printf("* "); 
 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// INVERTED PYRAMID STAR 
// PATTERN 
// ***** 
// **** 
//  *** 
//  ** 
//  * 
// #include<stdio.h
// > int main() 
// { 
// int n; 
//  printf("Enter number of rows: 
// "); scanf("%d", &n); 
//  for(int i = 1; i <= n; i++) 
//  { 
//  for(int j = 1; j <= n; j++) 
//  { if(j < i) 
// printf(" "); 
// else printf("*"); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// HOLLOW SQUARE STAR 
// PATTERN 
// ***** 
// * * 
// * * 
// * * 
// ***** 
// #include <stdio.h> 
// int main() { 
 
//  int size = 5; 
 
//  for (int i = 0; i < size; 
// i++) { for (int j = 0; j < 
// size; j++) { 
 
//  if (i == 0 || i == size - 1) { 
// printf("*"); 
//  } 
// else { 
 
//  if (j == 0 || j == size - 1) { 
// printf("*"); 
//  } 
// else { 
// printf(" "); 
//  } 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// HOLLOW RHOMBUS STAR 
// PATTERN 
//  ***** 
// * * 
// * * 
// ***** 
// #include <stdio.h> 
// #include <conio.h> 
 
// int main() 
// { int 
// i,j,n; 
// char ch; 
 
//  printf("Enter number of 
// rows: "); 
// scanf("%d%c",&n,&ch); 
// printf("Enter the symbol: "); 
// ch=getchar(); 
 
//  for(i=1;i<=n;i++) 
//  { 
//  for(j=1;j<=n-i;j++) 
//  { 
// printf(" "); 
//  } 
 
// if(i==1 || i==n) 
//  for(j=1;j<=n;j++) 
//  { 
//  printf("%c",ch); 
//  } 
// else 
//  { 
//  for(j=1;j<=n;j++) 
//  { 
//  if(j==1 || 
// j==n) 
// printf("%c",ch); 
// else 
// printf(" "); 
//  } 
//  } 
//  printf("\n"); 
 
//  } 
 
 
//  return 0; 
// } 
// RHOMBUS STAR PATTERN 
//  ***** 
//  ***** 
//  ***** 
// ***** 
// #include<stdio.h
// > int main() 
// { int i, j, k, 
// rows; 
//  printf("Enter Rhombus Star Pattern 
// Rows = "); scanf("%d", &rows); 
//  printf("Rhombus Star 
// Pattern\n"); for(i = rows; i >= 
// 1; i--) 
//  { 
//  for(j = 1; j <= i - 1; j++) 
//  { 
// printf(" "); 
//  } 
//  for(k = 1; k <= rows; k++) 
//  { 
// printf("*"); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 1 
// 11111 
// 11111 
// 11111 
// 11111 
// 11111 
// #include <stdio.h> 
// int main() 
// { int rows, 
// cols, i, j; 
 
//  printf("Enter number of 
// rows: "); scanf("%d", &rows); 
// printf("Enter number of 
// columns: "); scanf("%d", 
// &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
// printf("1"); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 2 
// 11111 
// 00000 
// 11111 
// 00000 
// 11111 
// #include <stdio.h> 
// int main() 
// { 
//  int rows, cols, i, j; 
 
 
//  scanf("%d", &rows);
 
//  scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  if(i%2 == 1) 
//  { 
// printf("1"); 
//  } 
// else 
//  { 
// printf("0"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 3 
// 01010 
// 01010 
// 01010 
// 01010 
// 01010 
// #include <stdio.h> 
// int main() 
// { int rows, 
// cols, i, j; 
 
//  scanf("%d", &rows);
 
//  scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  if(j%2 == 1) 
//  { 
// printf("0"); 
//  } 
// else 
//  { 
// printf("1"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 4 
// 11111 
// 10001 
// 10001 
// 10001 
// 11111 
// #include 
// <stdio.h> int 
// main(){ 
//  int rows, cols, i, j; 
 
 
//  scanf("%d", &rows);
 
//  scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
 
//  if(i==1 || i==rows || j==1 || 
// j==cols) 
//  { 
// printf("1");
//  } 
// else 
//  { 
// printf("0"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 5 
// 11111 
// 11111 
// 11011 
// 11111 
// 11111 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; int centerRow, centerCol; 
 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
 
//  centerRow = (rows + 1) / 2; centerCol = (cols + 1) / 2; 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  if(centerCol == j && centerRow == i) 
//  { printf("0"); 
//  } 
//  else if(cols%2 == 0 && centerCol+1 == j) 
//  { 
//  if(centerRow == i || (rows%2 == 0 && centerRow+1 == i)) 
//  printf("0"); else 
// printf("1"); 
//  } 
//  else if(rows%2 == 0 && centerRow+1 == i) 
//  { 
//  if(centerCol == j || (cols%2 == 0 && centerCol+1 == j)) printf("0"); 
// else printf("1"); } else 
//  { printf("1"); 
//  } 
//  } 
//  printf("\n");
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 6 
// 10101 
// 01010 
// 10101 
// 01010 
// 10101 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j, k; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  k = 1; 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { if(k == 1) 
//  { printf("1"); 
//  } else 
//  { printf("0"); 
//  } 
//  k *= -1; 
//  } 
//  if(cols % 2 == 0) 
//  { k *= -1; 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 7 
// 11011 
// 11011 
// 00000 
// 11011 
// 11011 
// #include <stdio.h> 
// int main() 
// { 
//  int rows, cols, i, j; int centerRow, centerCol; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  centerRow = (rows+1) / 2; centerCol = (cols+1) / 2; 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
 
//  if(centerCol == j || centerRow == i) 
//  { printf("0"); 
//  } 
//  else if((cols%2 == 0 && centerCol+1 == j) || (rows%2 == 0 && centerRow+1 == i)) 
//  { 
 
//  printf("0"); 
//  } else 
//  { printf("1"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 8 
// 10001 
// 01010 
// 00100 
// 01010 
// 10001 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  if(i == j || (j == (cols+1) - i)) 
//  { printf("1"); 
//  } else 
//  { printf("0"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 9 
// 01110 
// 10001 
// 10001 
// 10001 
// 01110 
// #include <stdio.h> 
// int main() 
// { int i, j, rows, cols; 
 
//  printf("Enter rows: "); scanf("%d", &rows); 
// printf("Enter columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  if((i==1 || i==rows) && (j==1 || j==cols)) 
//  { printf("0"); 
//  } 
//  else if(i==1 || i==rows || j==1 || j==cols) 
//  { 
//  printf("1"); 
//  } else 
//  { 
 
//  printf("0"); 
//  } 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 10 
// 11111 
// 22222 
// 33333 
// 44444 
// 55555 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  printf("%d", i); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 11 
// 12345 
// 12345 
// 12345 
// 12345 
// 12345 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; printf("Enter number of rows: "); 
// scanf("%d", &rows); printf("Enter number of columns: "); 
// scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++) 
//  { 
//  printf("%d", j); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 12 
// 12345 
// 23456 
// 34567 
// 45678 
// 56789 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=i; j < i+cols; j++) 
//  { 
//  printf("%d", j); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 13 
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j, k; 
 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  k = 1; for(i=1; i<=rows; i++) 
//  { 
//  for(j=1; j<=cols; j++, k++) 
//  { 
//  printf("%-3d", k); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATERN 14 
// 55555 
// 54444 
// 54333 
// 54322 
// 54321 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=cols; j>cols-i; j--) 
//  { 
//  printf("%d", j); 
//  } 
//  for(j=1; j<=cols-i; j++) 
//  { 
//  printf("%d", (rows - i + 1)); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 15 
// 12345 
// 23455 
// 34555 
// 45555 
// 55555 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=i; j<=cols; j++) 
//  { 
//  printf("%d", j); 
//  } 
//  for(j=i; j>1; j--) 
//  { 
//  printf("%d", cols); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 
// NUMBER PATTERN 16 
// 12345 
// 23451 
// 34521 
// 45321 
// 54321 
// #include <stdio.h> 
// int main() 
// { int rows, cols, i, j; 
//  printf("Enter number of rows: "); scanf("%d", &rows); 
// printf("Enter number of columns: "); scanf("%d", &cols); 
//  for(i=1; i<=rows; i++) 
//  { 
//  for(j=i; j<=cols; j++) 
//  { 
//  printf("%d", j); 
//  } 
//  for(j=i-1; j>=1; j--) 
//  { 
//  printf("%d", j); 
//  } 
//  printf("\n"); 
//  } 
//  return 0; 
// } 