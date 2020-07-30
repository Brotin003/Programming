// mcs 011  book 2
// example 5.1 (pg.7)
//SIMPLE IF STATEMENT
/*Question:- Write a program to calculate the net salaty of an employee,
  if a tax of 15% is leived on his gross -  salary if it exceeds Rs. 10,000/ per month. */

  #include <stdio.h>
  int main(int argc, char const *argv[])
  {
      float gross_salary, net_salary;

      printf("Enter gross salary of an employee\n");
      scanf("%f",&gross_salary);

      if (gross_salary<10000)
        net_salary = gross_salary;

      if (gross_salary>=10000)
        net_salary = gross_salary - 0.15*gross_salary;

      printf("\nNet salary is Rs. %2f\n",net_salary);  
      return 0;
  }
  