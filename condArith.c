/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			<Conditional arithmetic>
 * Author:			<Moritz Polleichtner>
 * ----------------------------------------------------------
 * Description:
 * <>
 * ----------------------------------------------------------
 */
 #include <stdio.h>

 void selection(int* choice, int* selectNum)
 {

   do {
     printf("Add(1) or Multiply(2): ");
     scanf("%d", choice);

   } while(*choice != 1 && *choice != 2);

   do {
     printf("Select a number between 1-100:");
     scanf("%d", selectNum);
   } while(*selectNum < 1 || *selectNum > 100);
 }

 void printResult(int res)
 {
   printf("Ergebniss: %d\n", res);
 }

 void add(int selectNum)
 {
   int res;
   for (size_t i = selectNum; i > 0 ; i--)
   {
     if (i % 3 == 0 || i % 5 == 0)
     {
       res += i;
     }
   }
   printResult(res);
 }

 void multiply(int selectNum)
 {
   int res = 1;
   for (size_t i = selectNum; i > 0 ; i--)
   {
     if (i % 3 == 0 || i % 5 == 0)
     {
       res *= i;
     }
   }
   if (res == 1)
   {
     res = 0;
   }
   printResult(res);
 }



 void executeOption(int choice, int selectNum)
 {
   switch (choice) {
   case 1:
   add(selectNum);
   break;

   case 2:
   multiply(selectNum);
   break;
 }
 }



int main(int argc, char const *argv[])
{
  int choice;
  int selectNum;
  selection(&choice, &selectNum);
  executeOption(choice, selectNum);
  return 0;
}
