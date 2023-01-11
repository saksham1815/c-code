//1
// // sum of matrices
// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }


//   // scalor matrice 
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] =  2 * a[i][j] ;
//     }

//   // printing the result
//   printf("\n scalor  matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }

//   return 0;
// }

//2
// // code for prime number 
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
// 	int num,res=0;
	
// 	printf("\nENTER A NUMBER: ");
// 	scanf("%d",&num);
// 	res=prime(num);      // here resposnse is assigned to  prime
// 	if(res==0)
// 		printf("\n%d IS A PRIME NUMBER",num);
// 	else
// 		printf("\n%d IS NOT A PRIME NUMBER",num);
	
// }
// int prime(int n)
// {
// 	int i;
// 	for(i=2;i<=n/2;i++)
// 	{
// 		if(n%i!=0)
// 			continue;
// 		else
// 			return 1;
// 	}
// 	return 0;
// }

// // code for printing number in reverse order
// #include <stdio.h>

// int rev_Int(int);

// int main(){

//      int Num, Rev = 0;   
//     printf("\nEnter the number to reverse: ");
//     scanf("%d", &Num);   
//     Rev = rev_Int (Num);      
//      printf("Reverse of %d is = %d\n", Num, Rev);

//     return 0;

// }

// int rev_Int (int Num){
//     int remainder, Rev = 0;    
//     while (Num > 0){
//         remainder = Num %10;
//         Rev = Rev *10+ remainder;
//         Num = Num /10;
//     }    
//     return Rev;

// }

//3
// // code for armstrong
// #include<stdio.h>

// int isArmstrong(int number) 
// {

//   // declare variables
//   int lastDigit = 0;
//   int power = 0;
//   int sum = 0;

//   // temporary variable to store number
//   int n = number;

//   while(n!=0) {

//      // find last digit
//      lastDigit = n % 10;

//      // find power of digit (order = 3)
//      power = lastDigit*lastDigit*lastDigit;

//      // add power value into sum
//      sum += power;

//      // remove last digit
//      n /= 10;
//   }

//   if(sum == number) return 0;
//   else return 1;
// }

// int main()
// {
//   int number;

//   printf("Enter number: ");
//   scanf("%d",&number);

//   if(isArmstrong(number) == 0)
//   printf("%d is an Armstrong number.\n", number);
//   else
//   printf("%d is not an Armstrong number.", number);

//   return 0;
// }

//4
// // code for perfect number
// #include<stdio.h>
// int perfect(int );
// int main()
// {

//   int num;
//   printf("Enter any number : ");
//   scanf("%d", &num);
//   perfect(num);
  
//   return 0;
// }
// int perfect(int num)
// {
//   int n,sum=0,i;
//   n=num;
//   for(i=1; i<n; i++)
//   {
//      if(num%i==0)
//         sum=sum+i;
//   }
//   if(num==sum)
//      printf("%d is Perfect Number",num);
//   else
//      printf("%d is not Perfect Number",num);
// }

//5
// // code for strong number
// #include<stdio.h>
// int fact (int val)
// {
// int a, b = 1;
// for (a = 1; a <= val; a++)
// {
// b = b * a;
// }
// return b;
// }
// int main ()
// {
// int n, count, final_result, rem, sum = 0, tmp;
// printf ("Enter a Number:\t");
// scanf ("%d", &n);
// tmp = n;
// for (tmp = n; n > 0; n = n / 10)
// {
// count = 1, final_result = 1;
// rem = n % 10;
// final_result = fact(rem);
// sum = sum + final_result;
// }
// if (sum == tmp)
// {
// printf ("%d is a Strong Integer\n\n", tmp);
// }
// else
// {
// printf ("%d is Not a Strong Integer\n\n", tmp);
// }
// return 0;
// }

//6
// // product of two number
// #include<stdio.h>
//  void multiply(int a , int b){
//     int m = 1;
//     m  = a*b;
//     printf("the product of two number %d" , m);
//  }
// int main()
// {
//     int a , b;
//     printf(" enter two number ");
//     scanf("%d %d" ,&a , &b);
//     multiply(a , b);
//     return 0; 
// }

//7
// // code for module
// #include<stdio.h>
//  void module(int a , int b){
//     int m;
//     m  = a%b;
//     printf("the remainder of two number %d" , m);
//  }
// int main()
// {
//     int a , b;
//     printf(" enter two number ");
//     scanf("%d %d" ,&a , &b);
//     module(a , b);
//     return 0; 
// }

//8
// // code for subtraction
// #include<stdio.h>
// int sub(int a , int b){
//     return a-b;
// }
// int main()
// { 
//     int a , b;
//     printf("enter two number");
//     scanf("%d %d" ,&a ,&b);
//     printf("sub is %d" , sub(a,b));
//         return 0; 
// }

//9
// //print array using fuction
// #include <stdio.h>
// void printArray(int arr[], int size)
// {
//     int i;
//     printf("Array elements are: ");
//     for(i = 0; i < size; i++)
//     {
//         //printf("%d ", arr[i]);
//         scanf("%d" , &arr[i]);

//     printf("yours values are : ");
//     }
//      for(i = 0; i < size; i++)
//     {
//         //printf("%d ", arr[i]);
//         printf("%d\n" , arr[i]);

//     }
// }
// int main()
// {
//     int arr[5];
//     int size ;

//     printArray(&arr, 5);    // Pass array directly to function printArray
//     return 0;
// }

//10
// // structure

// #include<stdio.h>
// #include<string.h>


// struct employee{
//     int code;
//     float salary;
//     char name[10]; 
// };

// int main()
// {
//     int a=34;
//     char b='s';
//     float d = 3214354.2134;

 


//     struct employee e1;
//     e1.code= 100;
//     e1.salary= 100000;
//  *strcpy (e1.name, "ssaksham");

// printf ("%d\n"  , e1.code);
// printf ("%f\n"  , e1.salary);
// printf ("%s\n"  , e1.name);

//     return 0; 
// }

//11
// // structure from user
// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };

// int main()

// {
//     struct employee e1 , e2 ,e3;

//     printf("for e1");

//     printf("enter code  of e1  ");
//     scanf("%d" , &e1.code);
//     printf("enter salary  of e1  ");
//     scanf("%f" , &e1.salary);
//     printf("enter code  of e1  ");
//     scanf("%s" , e1.name);

//      printf("for e2");
    
//     printf("enter code  of e2  ");
//     scanf("%d" , &e2.code);
//     printf("enter salary  of e2  ");
//     scanf("%f" , &e2.salary);
//     printf("enter code  of e2  ");
//     scanf("%s" , e2.name);

//      printf("for e3");
    
//     printf("enter code  of e3  ");
//     scanf("%d" , &e3.code);
//     printf("enter salary  of e3  ");
//     scanf("%f" , &e3.salary);
//     printf("enter code  of e3  ");
//     scanf("%s" , e3.name);
//     return 0; 
// }

//12
// // initialinzinfg structure second method
// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name [10];
// };


// int main()
// {
//     struct employee saksham = {100, 34.42 ,"saksham"};

//     printf("code is %d\n" , saksham.code);
//     printf("salary is %f\n" , saksham.salary);
//     printf("code is %s\n" , saksham.name);


//     return 0; 
// }

//13
// //first program
// #include<stdio.h>
// int main()
// {
//     printf("the world");
//     printf("the hello world");


//     return 3; 
// }

//14
//// string initialization
// #include<stdio.h>
// int main()
// {
//     char A[]={'h' , 'e' , 'l' ,'l'  , 'o' , '\0'};  // \0 is a zero

//     for(char i =0 ; i<5 ; i++){
//         printf("the character  of %d is %c\n" , i ,A[i]);
//     }
//     return 0; 
// }

//15
//// input of string
// #include<stdio.h>
// int main()
// {
//     char A[]="hello world";  // \0 is a zero
//     char *str=A;

//     for(char i =0 ; i<11 ; i++){
//         printf("%c" ,A[i]);
//     }
//     for(char i =0 ; i<11 ; i++){
//         printf("the memory of %d is %d\n" ,i,*str);
//         str++;
//     }
//     return 0; 
// }

//16
//// input using %s
// #include<stdio.h>
// int main()
// { char s[30];
// printf("entr your spelling  ");
// scanf("%s" , s);
// printf("the name is %s" , s);


// return 0; 
// } 

//17
////using gets and puts
// #include<stdio.h>
// int main()
// { char s[30];
// printf("entr your spelling  ");                    //using get() to give spaces 
// gets( s);                                          // using puts to print in nex5t line
// puts( s);

// printf("the name is %s" , s);


// return 0; 
// } 

//18
////to cal culate length of string
// #include<stdio.h>
// #include<string.h>

// int main()
// { char s[] = "hello hi salam shabha kair ";       // to calculate lentgth of string
// int a= strlen(s);
// printf ("the length is is %d" , a);

// return 0; 
// } 

//19
//// to assign value to enter
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "hello";
    
//     char st2[30];
     
//     strcpy (st2 , st );                      // strcpy is to assign value to other
    
//     puts(st2);
    
//     return 0; 
// }

//20
// //  to  connecr one string to another
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "hello";
    
//     char st2[] = "world";
     
//     strcat (st , st2 );                      // strcat is to connect one string to another 
    
//     puts(st);
    
//     return 0; 
// }

//21
// // to assign value to other
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "hello";
    
//     char st2[] = "hello";
     
//     int val =strcmp (st2 , st );                      // strcpy is to assign value to other
    
//     printf("the val is %d" , val);
    
//     return 0; 
// }

//22
//// to input from user
// #include<stdio.h>
// int main()
// {
//     char name[30];
    
//     scanf("%s" , name[30]);
    
//     printf("%s"  , name[30]);
//     printf("JVFUK"  );

    

//     return 0; 
// }
 
 //  //23
// // to check whether it is digit alphabet or special character 

// #include<stdio.h>

// int main()
// {
//     char ch;

//     /* Input character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);
//     /* Alphabet check */
//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("'%c' is alphabet.", ch);
//     }
//     else if(ch >= '0' && ch <= '9')
//     {
//         printf("'%c' is digit.", ch);
//     }
//     else 
//     {
//         printf("'%c' is special character.", ch);
//     }
//     return 0;
// }

// // 24
// #include<stdio.h>

// void main()

// {                                                        //outpu = 11111

// int a[]={1,2,3,4,5};

// printf("%d%d%d%d%d", *a, *(a+0), *(0+a), a[0], 0[a]);

// }

// // to find factorial
// #include<stdio.h>
// long int multiplyNumbers(int n);
// int main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d",&n);
//     printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//     return 0;
// }

// long int multiplyNumbers(int n) {
//     if (n>=1)
//         return n*multiplyNumbers(n-1);
//     else
//         return 1;
// }

////25
// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("* ");
//       }
//       printf("\n");
//    }
//    return 0;
// }


// // //26
// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("* ");
//       }
//       printf("\n");
//    }
   
   
//    for (i = rows; i > 1; --i) {
//       for (j = rows; j > i; --j) {
//          printf("* ");
//       }
//       printf("\n");
//    }
  
//    return 0;
// }

// // 27
// // too check matrices are equal or not
// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }

//   printf("Enter elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//
  
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//        if( a[i][j] == b[i][j]){
//            printf("matrices are equal");
//       }
//       else (printf("matrice are not equal");
//       )
       
//     }
  

//   return 0;
// }


// // // 28
///// to count number pf even 
// #include<stdio.h>

//     int main(){
// {
// int arr[10],i,count=0;
// for(i=0;i<10;i++)
// {
// printf("Enter the elements of array:");
// scanf("%d",&arr[i]);
// }
// for(i=0;i<10;i++)
// {
// if(arr[i]%2==0)
// {
// printf("%d\n",arr[i]);
// count++;
// }

// }
// printf("Total number of even elements are:%d",count);
// }
//     return 0; 
// }

// // // 29
// // to check armstrong number 
// #include <math.h>
// #include <stdio.h>

// int main() {
//    int num, originalNum, remainder, n = 0;
//    float result = 0.0;

//    printf("Enter an integer: ");
//    scanf("%d", &num);

//    originalNum = num;

//    // store the number of digits of num in n
//    for (originalNum = num; originalNum != 0; ++n) {
//        originalNum /= 10;
//    }

//    for (originalNum = num; originalNum != 0; originalNum /= 10) {
//        remainder = originalNum % 10;

//       // store the sum of the power of individual digits in result
//       result += pow(remainder, n);
//    }

//    // if num is equal to result, the number is an Armstrong number
//    if ((int)result == num)
//     printf("%d is an Armstrong number.", num);
//    else
//     printf("%d is not an Armstrong number.", num);
//    return 0;
// }

// // 30
// // to remove first occurance from a string
// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//     char s[1000],c,temp=1;  
//     int  i,j,k,count=0,n;
 
//     printf("Enter  the string : ");
//     gets(s);
    
// 	printf("Enter character: ");
//     c=getchar();
     
//     for(i=0;s[i];i++);
// 	 n=i; 
    
 
//     for(i=0;i<n;i++)  
//     {
     	 
//        if(temp)
//         {
//           	 if(c==s[i])
//           	  {
// 				temp=0;
// 				s[i]=s[i+1];
// 		     }
// 	    }
// 	    else
// 	     s[i]=s[i+1];
	   
//     }
	   
//  	 printf("%s",s);
 	 
     
//     return 0;
// }

// // 31
///// C Program for Arithmetic Operations using Switch Statement
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b;
//     int op;
//     printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
//     printf("Enter the values of a & b: ");
//     scanf("%d %d",&a,&b);
//     printf("Enter your Choice : ");
//     scanf("%d",&op);
//     switch(op)
//     {
//     case 1	:
//         printf("Sum of %d and %d is : %d",a,b,a+b);
//         break;
//     case 2	:
//         printf("Difference of %d and %d is : %d",a,b,a-b);
//         break;
//     case 3	:
//         printf("Multiplication of %d and %d is : %d",a,b,a*b);
//         break;
//     case 4	:
//         printf("Division of Two Numbers is %d : ",a/b);
//         break;
//     default	:
//         printf(" Enter Your Correct Choice.");
//         break;
//     }
//     return 0;
// }
 
// // 32
//// ELSE IF LADDER TO PERFORM OPERATION ON TWO NUMBERS BASED ON OPERATOR IN C LANGUAGE
// #include<conio.h>
// #include<stdio.h>
// main()
// {
//       int a,b,c;
//        char op;
//        printf("Enter first number : ");
//        scanf("%d",&a);
//        printf("Enter second number : ");
//        scanf("%d",&b);
//       printf("Enter  any operator from + , - , * , / ,% ");
//       scanf(" %c",&op);
//                       if(op=='+')
//                             {
//                              c=a+b;   
//                             printf("Sum of %d and %d = %d ",a,b,c);
//                             }
//                       else if(op=='-')
//                             {
//                              c=a-b;   
//                             printf("Subtraction of %d and %d = %d ",a,b,c);
//                             }
                     
//                       else if(op=='*')
//                             {
//                              c=a*b;   
//                             printf("Multiplication of %d and %d = %d",a,b,c);
//                             }
   
//                      else if(op=='/')
//                             {
//                              c=a/b;   
//                            printf("%d divided by %d = %d ",a,b,c);
//                             }                                
//                     else if(op=='%')
//                             {
//                              c=a%b;   
//                             printf("Remainder of %d divided by %d = %d ",a,b,c);
//                             }
//                     else
//                            {
//                             printf("INVALID OPERATOR!! Please enter correct one");
//                            }
//                     getch();
//                     }

// //33
// // to add two number using pointers 
// #include<stdio.h>
// int main()
// {
//     printf("pointer :- ");
//     int a =8 , b=9 ,c ;
//     int* ptra = &a;
//     int* ptrb = &b;
//     c = *ptra + *ptrb ;
//     printf("the value of a is %d\n"  , c);
//     return 0; 
// }

//// 34
// // to swap two number 
// #include<stdio.h>
// int main()
// {
//     printf("pointer :- ");
//     int a = 7 , b=  9 ,c ;
//     int* ptra = &a;
//     int* ptrb = &b;
//     printf("the value of a is %d\n"  ,  a);
//     printf ("the value of b is %d\n "  , b);
//     printf ("now after swAPPING\n " );
//      c = *ptra  ;
//     *ptra=*ptrb;
//     *ptrb = c;
//     printf("the value of a is %d\n"  ,  a);
//     printf ("the value of b is %d\n "  , b);
//     return 0; 
// }

// // 35
// //to input and print elements of array  
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter n ");
//     scanf("%d" ,  &n);
// 	int arr[n];

// 	int *parr = arr;


// 	for (int i = 0; i < n; i++)
// 	{
//         printf ("enter number\n");
// 		scanf("%d\n", parr);
//         parr++;
// 	}
	
//     printf("\n");

//     parr=arr;
//     for (int i = 0; i < n; i++)
// 	{
// 		printf("%d\n", *parr);
//         parr++;
// 	}

// }

// // 36
// // to swap two arrays  

// #include <stdio.h>

// int main()
// {
//     int  n , i;
//     printf("enter n  ");
//     scanf("%d" ,  &n);
// 	int arr1[n];

// 	int *parr1 = arr1;


// 	for (int i = 0; i < n; i++)
// 	{
//         printf ("enter number\n");
// 		scanf("%d\n", parr1);
//         parr1++;
// 	}
	
//     printf("\n");

//     parr1=arr1;
//     for (int i = 0; i < n; i++)
// 	{
// 		printf("%d\n", *parr1);
//         parr1++;
// 	} 

//     printf("the second array\n ");
    
//     int arr2[n];
//     int *parr2= arr2;
//     for (int i = 0; i < n; i++)
// 	{
//         printf ("enter number\n");
// 		scanf("%d\n", parr2);
//         parr2++;
// 	}
	
//     printf("\n");

//     parr2=arr2;
//     for (int i = 0; i < n; i++)
// 	{
// 		printf("%d\n", *parr2);
//         parr2++;
// 	}
//     int swap;
//     int *pswap = swap;
//     int pswap=paar1;
//     int parr1=parr2;
//     int parr2=pswap;
//     printf("after swapping\n");
//     for(i=0 ;i<n ; i++){
    
//     printf("%d" , *paar1);
//     paar1++;
//     }
//     printf("the second arrary");
//     for(i=0 ;i<n ; i++){
    
//     printf("%d" , *paar2);
//     paar2++;
//     }

// }