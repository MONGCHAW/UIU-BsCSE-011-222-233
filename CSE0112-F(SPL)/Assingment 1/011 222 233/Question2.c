#include <stdio.h>

void main() {  
    //Initilizing Value

    int angle1, angle2, angle3;  
   
    /* 
     * Take three angles of triangle as input 
     * from user using scanf 
     */ 

    printf("Enter Three Angles of a Triangle\n");  
    scanf("%d %d %d", &angle1, &angle2, &angle3);     
   
    /* 
     ! Sum any of the angle is 0 the program would go to invalid 
     ! if the program still runs it'll check if the sums of the triangle is 180
     */ 

    if( angle1 >= 0 || angle1 == 180 ) {  

        if ( angle2 >= 0 || angle2 == 180){

            if (angle3 >= 0 || angle3 == 180){

                if (angle1 + angle2 + angle3 == 180)
                {

                    printf("YES");

                }else{

                    printf("NO");

                }
            }
        }
    } else {  

        printf("NO");  

    }  
}
