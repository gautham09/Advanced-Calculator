#include<stdio.h>
#include<math.h>
int main()
{
  char op;
  float val;
  float i;
  printf("Enter the initial number to undergo operation =");
  scanf("%f", &val);
  getchar();
  while(1)
    {
    float prev = val;
    printf("\na)add/ b) subtract /c)multiply /d)divide /e)exp /f)natural log /g)tan /h)sin /i)cos /j)tan inverse/k)cos inverse\n");
    printf("l)sin inverse /m) given number power q  /n)square root  /o)log base 10 /p)reciprocal /q)exit \n");
    printf("\nEnter the operation to be performed : ");
    scanf("%c", &op);
    getchar();
    switch (op)
    {
      case 'a': {
          printf("%f + ? ,  where ? = ", val);
          scanf("%f", &i);
          getchar();
          val = val + i;printf("%0.2f + %0.2f = %f\n\n", prev, i , val);
          break;}
     case 'b':{
          printf("\n%f - ?, where ? = ", val);
          scanf("%f", &i);
          getchar();
          val = val - i; printf("\n%0.2f + %0.2f = %f\n\n", prev, i, val);
          break;}
     case 'c': {
          printf("\n%f x ? ,  where  ? = ", val);
          scanf("%f", &i);
          getchar();
          val = val*i;printf("\n%0.2f x %f = %f\n\n", prev, i, val);
          break;}
    case 'd': {
          printf("\n%f/? , where  ? = ", val);
          scanf("%f", &i);
          getchar();
          val = val/i;printf("\n%0.2f/0.2%f = %f\n\n",prev, i, val);
          break;}
    case 'e': {
          val = exp(val);
          printf("\ne^(%0.2f) = %f\n\n", prev, val);
          break;}
    case 'f': {
          val = log(val);
          printf("\nlog(%0.2f) = %f\n\n", prev, val);
          break;}
    case 'g': {
          val = tan(val);
          printf("\ntan(%0.2f) = %f\n\n", prev, val);
          break;}
   case 'h': {
         val = sin(val);
         printf("\nsin(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'i': {
         val = cos(val);
         printf("\ncos(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'j': {
         val = atan(val);
         printf("\ntan inv(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'k': {
         val = acos(val);
         printf("\ncos inv(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'l': {
         val = asin(val);
         printf("\nsin inv(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'm': {
         printf("\n(%f)^ ? , where ? = ", val);
         scanf("%f", &i);
         getchar();
         val = pow(val,i);
         printf("\n(%0.2f)^(%0.2f) = %f\n\n", prev, i, val);
         break;}
   case 'n': {
         val = sqrt(val);
         printf("\nsquareRoot of (%0.2f) = %f\n\n", prev, val);
         break;}
   case 'o': {
         val = log10(val);
         printf("\nlog(%0.2f) = %f\n\n", prev, val);
         break;}
   case 'p': {
         val = 1/val;
         printf("1/(%0.2f) = %f", prev, val);
         break;}
   case 'q': {return 0;}
   default : {printf("Illegal operation\n");}
    }
   }
}
