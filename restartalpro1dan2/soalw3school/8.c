/*8. Write a C program to convert specified days into years, weeks and days. Go to the editor
Note: Ignore leap year. 

Test Data :
Number of days : 1329 
Expected Output :
Years: 3 
Weeks: 33 
Days: 3 
*/

#include <stdio.h>

int main(){
	/*INPUT*/
	int days; //declaration
	printf("Number of days : \n");
	scanf("%d", &days);
	
	/*PROCESS*/
	int year, week,day; //variable for result
	year = days / 365; //operation to search year
	week = (days - (year*365)) / 7; //operation to search remaining weeks
	day = (days - (year*365)) - (week * 7); //operation to search remaining days
	
	/*OUTPUT*/
	printf("Years: %d\n", year);
	printf("Weeks: %d\n", week);
	printf("Days: %d\n", day);
}