// Question:1 Draw the following Patterns

      // (P-i)

// #include <stdio.h>

// int main () 
// {
//     int i,space,rows=5,k=0, count=0,count1=0;

//     for(i=rows; i>=1;--i)
//     {
  
//    //print space until space value 
//         for(space=1;space<=rows-i; ++space)
//         {
//             printf("  ");
//             ++count; //increment count after each space
//         }

//     k =0;

//     while (k != 2*i-1)
//     {
//         if(count<=rows-1)
//         {
//            printf("%d ", i+k);
//            ++count; 
//         }
//         else{
//             ++count1;
//             printf("%d ",(i+k-2*count1));
//         }
//         ++k;
//     }
//         count1 = count = k = 0;

//         printf("\n");
//    }
// return 0;

// }



        //   (P-ii)
// #include <stdio.h>
// int main()
// {
//     int numLine = 5; // Define no. of lines
//     int iSpc,j;
//     for(iSpc=numLine-1;iSpc>=0;iSpc--)
//     {
//         for(j=iSpc;j>0;j--)
//         {
//             printf("  ");
//         }
//         for(j=0;j<numLine-iSpc;j++)
//         {
//             printf("%c ",'A'+j);
//         }
//         for(j=numLine-iSpc-2;j>=0;j--)
//         {
//             printf("%c ",'A'+j);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// (iii)

// #include <stdio.h>

// int main() {
//    int rows, space, incNum, decNum, num = 5; // Set number of rows to 5
//    for (rows = 1; rows <= num; rows++) {
//       for (space = 1; space <= num - rows; space++) {
//          printf("  "); // Print spaces
//       }
//       for (incNum = 1; incNum <= rows; incNum++) {
//          printf("%d ", incNum);
//       }
//       for (decNum = rows-1; decNum >= 1; decNum--) {
//          printf("%d ", decNum);
//       }
//       printf("\n");
//    }
//    return 0;
// }



//pattern # (iv)
//     #include <stdio.h>

// int main() {
//     int TotalRows=7;
//     int tempNum = 1;

//     for (int i=0; i<TotalRows; i++) {
//         for (int spaces=1; spaces<=TotalRows-i; spaces++) {
//             printf("  ");
//         }

//         for (int j=0; j<=i; j++) {
//             if (j==0 || i==0)
//                 tempNum = 1;
//             else
//                 tempNum = tempNum * (i-j+1)/j; 

//             printf("%4d", tempNum); 
//         }
//         printf("\n");
//     }
// }


// Pattern(V)

//pattern # 05


// #include <stdio.h>

// int main()
// {
//     int n = 9, i, j, k;
//     for (i = 0; i <= n / 2; i++)
//     {
//         for (j = 0; j < (n / 2) - i; j++)
//         {
//             printf(" ");
//         }
//         for (k = 0; k < (2 * i) + 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (i = 0; i < n / 2; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             printf(" ");
//         }
//         for (k = 0; k < n - 2 - (2 * i); k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern(VI)
// pattern no 6

// #include <stdio.h>

// int main() {
//     int a = 1;   // first term
//     int r = 2;   // common ratio
//     int n = 4;   //total number of rows

//     for (int i=0; i<n; i++) {
//         for (int S=0; S<n-i; S++) {
//             printf(" "); 
//         }
//         int term= a;
//         for (int j = 0; j<=i; j++) {
//             printf("%d", term); 
//             term *= r;
//         }
        
//       term /= n;
//       for(int k=1; k<=i; k++)
//       {
//         printf("%d", term);
//         term /= r;
//       }
      
        
//         printf("\n");
//     }

//     return 0;
// }

// Pattern(VII)

//pattern # 07
    
//  #include <stdio.h>

//   int main() {
   
//      int totalRows=5;
    
//     for (int i=totalRows; i>=1; i--) {
//         for (int j=totalRows-i; j>0; j--) {
//             printf(" ");  
//         }
//         for (int j=1; j<=i; j++) {
//             printf("* ");  
//         }
//         printf("\n");  
//     }


//     for (int i=1; i<=totalRows; i++) {
//         for (int j=1; j<=totalRows-i; j++) {
//             printf(" ");
//         }
//         for (int k=1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Pattern(viii)

// #include <stdio.h>

// int main() {
//     int totalRows = 5; 

//     for (int i=1; i<=totalRows; i++) {
//         for (int space=i; space<totalRows; space++) {
//             printf(" ");
//         }
//         for (int k=1; k<=2*i-1; k++) {
//             if (k==1 || k==2*i-1) {
//                 printf("*");
//             } 
//             else if(i==totalRows){ 
//             printf("*"); }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

//pattern(ix)

// #include <stdio.h>

// int main() {
//     int totalRows=5;
// int space;
    

//     for (int i=1; i<=totalRows; i++) {
//         for ( space=1; space<=totalRows-i; 
//         space++) {
//             printf(" ");
//         }

//         for (int j=1; j<=2*i-1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }

//         printf("\n");
//     }

    

//     for (int i=1; i<=totalRows-1; i++) {
//         for (int space=1; space<=i; space++) {
//             printf(" ");
//         }
//         for (int j=1; j<=2*(totalRows-i)-1; j++) {
//             if (j==1 || j==2*(totalRows-i)-1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }


//pattern # 10(X) 
// #include <stdio.h>

// int main() {
//     char letter = 'A';
//     int totalRows=5;

//     for (int i=1; i<=totalRows; i++) {
//         for (int j=1; j<=totalRows; j++) {
//             printf("%c ", letter);
//             letter++;
//         }
//         printf("\n");
//     }

//     return 0;
// }


//pattern # 11(xi)

// #include <stdio.h>
// int main(){
//    int totalRows=5;

//        for(int i=5; i>=1; i--){
    
//          for(int j=1; j<=i; j++){
    
//           printf("%d ",j);}
    
//          for(int S=4; S>=i;S--){

//           printf("* * ");}
 
//           for(int k=i;k>=1;k--){

//            printf("%d ",k);}

//       printf("\n");}

//    return 0;
// }

//pattern # 12
// #include <stdio.h>

// int main() {
//     char letter = 'A';
//     int totalRows=5;

//     for (int i=1; i<=totalRows; i++) {
//     for(int Space=1; Space<=totalRows-i;Space++){
//     printf(" ");  } 
//     for (int j=1; j<=i; j++) {
//             printf("%c ", letter);
//             letter++;
//         }
//         printf("\n");
//     }

//     return 0;
// }


// PATTERN (13)

// #include <stdio.h>

// int main(){
//          printf("           *                    *                                \n");
//          printf("          * *                  * *                               \n");
//          printf("         * * *                * * *                              \n");
//          printf("        *     *              * * * *                             \n");
//          printf("       * * * * *            * * * * *                            \n");
//          printf("      *         *          *         *                           \n");
//          printf("     * * * * * * *        * * * * * * *                          \n");
//          printf("    *             *      *             *                         \n");
//          printf("   * * * * * * * * *    * * * * * * * * *                        \n");
//          printf("  * * * * * * * * * *  * * * * * * * * * *                       \n");
//          printf("  *                *    *               *                        \n");
//          printf("    * * * * * * * *      * * * * * * * *                         \n");
//          printf("     *           *        *           *                          \n");
//          printf("      * * * * * *          * * * * * *                           \n");
//          printf("       *       *            *       *                            \n");
//          printf("        * * * *              * * * *                             \n");
//          printf("         *   *                *   *                              \n");
//          printf("          * *                  * *                               \n");
//          printf("           *                    *                                \n");
         
// }

// Pattern(14)

//pattern # 14
// #include <stdio.h>

// int main() {
//     int totalRows = 3; 
//     int Letter= 65; // ASCII code for 'A'

//     for (int i=1; i<=totalRows+2; i++) {

//         if (i==1 || i==totalRows+2) {
//             for (int j=1; j<=5; j++) {
//                 printf("*");
//             }
//         }
//         else {
//             printf("*");
//             for (int j=1; j<=totalRows; j++) {
//                 printf("%c", Letter);
//                 Letter++;
//             }
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Pattern(15)
// #include <stdio.h>

// int main() {
//     int totalRows = 10;
    
//     for(int i=1; i <= totalRows; i++)
//     {
//         for(int j=1; j <= totalRows-i ; j++)
//         {
//             printf(" ");
//         }
//         for(int k=i; k >= 1 ; k--)
//         {
//             if(k % 2 == 0)
//             {
//                 printf("$ ");
//             }
//             else
//             {
//                 printf("* ");    
//             }
//         }
//     printf("\n");
//     }
//     return 0;
// }

//pattern # 16
// #include <stdio.h>

// int main(){
//        int totalRows=7;
//     for(int i=1; i<=totalRows;i++){
//     for(int j=1; j<=i; j++){
//     printf("*");}
//       for(int space=1; space<=totalRows-i; space++){
//     printf("  ");}
//     for(int j=1; j<=i; j++){
//     printf("*");}
//     printf("\n");
//     }
// return 0;
// }

// Pattern # 17

// #include <stdio.h>

// int main() {
//     int rows = 8;
//     printf("\n\n");

//     for (int i = rows; i >= 1; i--) {
//         for (int j = 0; j < rows - i; j++) {
//             printf(" ");
//         }
//         for (int k = i; k >= 1; k--) {
//             printf("%c ", k + 64);
//         }
//         for (int j = 0; j < 2 * (rows - i); j++) {
//             printf(" ");
//         }
//         for (int k = i; k >= 1; k--) {
//             printf("%c ", k + 64);
//         }
//         printf("\n\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() 
{
    int rows, i, spaceBtw_l, descOrder;

    for (rows = 0; rows < 10; rows++) 
        {
        for (i = 0; i < (8 - rows); i++) 
        {
            printf("%c", 'A' + i);
        }
        for (spaceBtw_l = 0; spaceBtw_l < (2 * rows); spaceBtw_l++) {
            printf(" ");
        }
        for (descOrder = (7 - rows); descOrder >= 0; descOrder--) 
        {
            printf("%c", 'A' + descOrder );
        }
        printf("\n");
    }
    return 0;
}


// QUESTION:Write a program in C# to find the frequency of each character in
// your name.
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
    

//     printf("Input the String : ");
//     scanf("%s", str);
//     printf("\n");

//     int freq[256] ={0};
//     int len = strlen(str);
    
//     for(int i = 0; i <len; i++ ){
//         freq[str[i]]++;
//     }

//     printf("The frequency of the characters are: \n");
//     for(int i = 0; i<256;i++){
//         if(freq[i]> 0){
//             printf("Character %c: %d times\n",i,freq[i]);
//         }
//     }

// }




// QUESTION:Write a program in C to input any number and print it in words
// between 1 to 100000.

// #include<stdlib.h>
// #include<stdio.h>
// main() {
//   long inpNum, div, tempNum;
//   int preFlag, curtDig, posDig, totDig;
  
//   printf("\nEnter a number: ");
//   scanf("%ld", &inpNum);
    
// 	if(inpNum == 0) {
//     printf("Zero\n");
//     exit(0);
//   }
	
//   if(inpNum > 99999) {
//     printf("please enter a number between 0 and 100000\n\n");
//     exit(0);
//   }
	
//   totDig = 0;
//   div = 1;
//   tempNum = inpNum;
	
//   while ( tempNum > 9 ) {
//     tempNum = tempNum / 10;
//     div = div * 10;
    
//     totDig++;
//   }
  
	
//   totDig++;
//   posDig = totDig;
	
//   while ( inpNum != 0 ) {
//     curtDig = inpNum / div;
//     inpNum = inpNum % div;
//     div = div / 10;
//     switch(posDig) {
//         case 2:
//         case 5: 
// 				  if ( curtDig == 1 )
// 					  preFlag = 1;
// 				  else {
//             preFlag = 0;
// 					  switch(curtDig) {
// 						  case 2: printf("twenty ");break;
// 						  case 3: printf("thirty ");break;
// 						  case 4: printf("forty ");break;
// 						  case 5: printf("fifty ");break;
// 						  case 6: printf("sixty ");break;
// 						  case 7: printf("seventy ");break;
// 						  case 8: printf("eighty ");break;
// 						  case 9: printf("ninety ");
// 					}
// 		  }
// 			break;
//    case 1:
//    case 4:
//       if (preFlag == 1) {
// 			  preFlag = 0;
// 				switch(curtDig) {
// 				  case 0 : printf("ten ");break;
// 					case 1 : printf("eleven ");break;
// 					case 2 : printf("twelve ");break;
// 					case 3 : printf("thirteen ");break;
// 					case 4 : printf("fourteen ");break;
// 					case 5 : printf("fifteen ");break;
// 					case 6 : printf("sixteen ");break;
// 					case 7 : printf("seventeen ");break;
// 					case 8 : printf("eighteen ");break;
// 					case 9 : printf("nineteen ");
// 			  }
// 			} else {
// 			  switch(curtDig) {
// 				  case 1 : printf("one ");break;
// 					case 2 : printf("two ");break;
// 					case 3 : printf("three ");break;
// 					case 4 : printf("four ");break;
// 					case 5 : printf("five ");break;
// 					case 6 : printf("six ");break;
// 					case 7 : printf("seven ");break;
// 					case 8 : printf("eight ");break;
// 					case 9 : printf("nine ");
// 			  }
// 		  }
            
// 			if (posDig == 4) 
// 			  printf("thousand ");
// 			break;
				
//       case 3:
// 				if (curtDig > 0) {
// 					switch(curtDig) {
// 						case 1 : printf("one ");break;
// 						case 2 : printf("two ");break;
// 						case 3 : printf("three ");break;
// 						case 4 : printf("four ");break;
// 						case 5 : printf("five ");break;
// 						case 6 : printf("six ");break;
// 						case 7 : printf("seven ");break;
// 						case 8 : printf("eight ");break;
// 						case 9 : printf("nine ");
// 					}
// 					printf("hundred ");
// 				}
//         break;
//       }
//       posDig--;
//     }
//     if (posDig == 4 && preFlag == 0)
// 		  printf("thousand");
//     else if (posDig == 4 && preFlag == 1)
// 		  printf("ten thousand");
	
//     if (posDig == 1 && preFlag == 1)
// 		  printf("ten ");
// }


// Question: Write a C program that prints all ASCII characters with their values
// #include<stdio.h>
// int main()
// {
//         int i;
//         for(i=0;i<=255;i++)
//         {
//                 printf("ASCII value :%d \t and Ascii character :%c \n ",i,i);
//         }
//         return 0;
// }



// Question: Write a C program that prints Factors of a Number 
 
// #include <stdio.h>

// int main()
// {
//     int i, inpNum;

//     /* Input number from user */
//     printf("Enter any number to find its factor: ");
//     scanf("%d", &inpNum);

//     printf("All factors of %d are: \n", inpNum);

//     /* Iterate from 1 to Num */
//     for(i=1; i<=inpNum; i++)
//     {
       
//         if(inpNum % i == 0)
//         {
//             printf("%d, ",i);
//         }
//     }

//     return 0;
// }

// Question: Write a C Program to Make a Simple Calculator to Add, Subtract,
// Multiply or Divide Using switch...case

// #include <stdio.h>
// #include <conio.h>
 
// int main()
// {
//     char oper;            
//     float inpNum1, inpNum2, result;
 
//     printf ("Simulation of a Simple Calculator\n\n");
 
//     printf("Enter two numbers\n");
//     scanf ("%f %f", &inpNum1, &inpNum2);
 
//     fflush (stdin);
 
//     printf("Enter the operator [+,-,*,/]\n");
//     scanf ("%c", &oper);
 
//     switch (oper)
//        {
//         case '+': result = inpNum1 + inpNum2;
//               break;
//         case '-': result = inpNum1 - inpNum2;
//               break;
//         case '*': result = inpNum1 * inpNum2;
//               break;
//         case '/': result = inpNum1 / inpNum2;
//               break;
//         default : printf ("Error in operation\n");
//               break;
//     }
 
//     printf ("\n%5.2f %c %5.2f= %5.2f\n", inpNum1,oper, inpNum2, result);
// return 0;
// }



// Question: Write a C Program to Find the Number of Vowels, Consonants, Digits
// and White Spaces in a String

// #include <stdio.h>
// #include <ctype.h>

// int main(){
//     char line[150];
//     int vowels = 0, consonants = 0, digits = 0, spaces= 0;


//     printf("Enter a line of string ");
//     fgets(line,sizeof(line), stdin);

//     for(int i = 0; line[i] != '\0'; ++i) {

//         line[i] = tolower(line[i]);


//         if(line[i] == 'a' || line [i] == 'e' || line [i] == 'i' ||
//         line[i] == 'o' || line[i] == 'u')
//         {
//             ++vowels;
//         }
//         else if ((line[i] >= 'a' && line[i] <= 'z')){
            
//             ++consonants;
//         }

//         else if (line[i] >= '0' && line[i] <= '9'){
//             ++digits;
//         }
       

//         else if(line[i] == ' '){
//             ++spaces;
//         }
//     }

//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n",consonants);
//     printf("Digits: %d\n", digits);
//     printf("White spaces: %d\n", spaces);
//     return 0;
//     }


// Question: Write a C Program to remove all Characters in a String except
// Alphabets.
 
// #include <stdio.h>

// int main(){
//     char str[100];
//     int i, j;

//     printf("Enter a string: ");
//     gets(str);


//     for(i = 0; str[i] != '\0'; ++i)
//     {
//         while(!(str[i]>= 'a' && str[i] <= 'z' || (str[i] >= 'A' &&
//         str[i] <= 'Z') || str[i] == '\0') )
//         {
//             for(j = i; str[j] != '\0'; ++j)
//             {
//                 str[j] = str[j+1];
//             }
//             str[j] = '\0';
//         }
//     }

//     printf(" After removing non alphabetical characters the string is : ");
//     puts(str);
//     return 0;
// }

 #include <stdio.h>
int main()
{
    //Initializing variable.
    char str[100];
    int i, j;
    
     //Accepting input.
    printf(" Enter a string : ");
    gets(str);

     //Iterating each character and removing non alphabetical characters.
    for(i = 0; str[i] != '\0'; ++i)
    {
        while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0'; 
        }
    }
     //Printing output.
    printf(" After removing non alphabetical characters the string is :");
    puts(str);
    return 0;
}



// other




