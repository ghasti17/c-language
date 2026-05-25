#include<stdio.h>

main()
{
	
	int score;
	char grade;
	
	printf("enter you score:");
	scanf("%d",& score);
	
	grade = (score>=81 && score<=100) 
									? 'A' 
									: (score>=61 && score<=80) 
											? 'B' 
											: (score>=41 && score<=60) 
													? 'C' 
													: (score>=33 && score<=40) 
														? 'D' 
														: 'F';
       
	printf("Your grade is %c", grade);
	   
	   switch(grade)
	   {
	   	
	   	case 'A':	   		
	   		     printf("Exellent work!");
	   		     break;  		  
		case 'B' :
				printf("Well done");
				break; 
		case 'C':
		         printf("Good job");
				 break;
		case 'D':	 		  
	   		     printf("You passed");
	   		     break;
	    case 'F':
	    	     printf("sorry,you are failed");
	   }
	   
	   if(grade == 'F') 
	   {
	   	
	   	printf("please,tray again next time");
	   	
	   }
	   
	   else
	   {
	   	 printf("You are eligible for the next level");	
	   
	   }
	   	
	   }
