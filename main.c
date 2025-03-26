// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num_room,choice;
    int a,b,c,d,e;
    printf("Enter Number of Rooms : ");
    scanf("%d",&num_room);
int house[num_room][4];
printf("\nEnter the status for each room:\n");
    printf("1. Light (1 = ON, 0 = OFF)\n");
    printf("2. Temperature (in °C)\n");
    printf("3. Motion Sensor (1 = Motion Detected, 0 = No Motion)\n");
    printf("4. Door (1 = Open, 0 = Closed)\n\n");
for (int i = 0; i < num_room; i++) {
        printf("Room %d:\n", i + 1);
        
        printf("Light (1 = ON, 0 = OFF): ");
        scanf("%d", &house[i][0]);

        printf("Temperature (°C): ");
        scanf("%d", &house[i][1]);

        printf("Motion Sensor (1 = Motion Detected, 0 = No Motion): ");
        scanf("%d", &house[i][2]);

        printf("Door (1 = Open, 0 = Closed): ");
        scanf("%d", &house[i][3]);

        printf("\n");
    }
    
 while (choice != 6) {
    printf("1.TOGGLE LIGHT\n2.Read Temperature\n3.Check Motion Sensor\n4.Lock/Unlock Security System\n5.House Status Summary\n6.Exit\n");
    printf("Enter Your Choice");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the room number : ");
            scanf("%d",&a);
            if(house[a][0] == 0){
                printf("The Light is switched On in Room %d",a);
                house[a][0]==1;
            }
            else{
                printf("The Light is switched Off in Room %d",a);
                house[a][0]==0;
            }
            
        case 2:
            printf("Enter the room number : ");
            scanf("%d",&b);
            printf("The Temperature in Room %d is %d",b,house[b][1]);
        case 3:
            printf("Enter the room number : ");
            scanf("%d",&c);
            if(house[c][2]== 0){
                printf("No Motion is Detected.");
            }
            else{
                printf("The Motion is Detected");
            }
        case 4:
            printf("Enter the room number : ");
            scanf("%d",&d);
            if (house[d][3]== 0){
                printf("The Door is Closed.");
            }
            else{
                printf("The Door is Opened.");
            }
        case 5:
            for (int i = 0; i < num_room; i++){
                for (int j = 0; j < 4; i++){
                    printf("Room %d",i);
                    if(j==1){
                        if(house[i][0] == 0){
                            printf("Light is Off.");
            }
                    else{
                        printf("Light is On.");
                    }
                    }
                    else if(j==1){
                        printf("Temperature id %d",house[i][j]);
                    }
                    else if(j==2){
                         if(house[i][2] == 0){
                            printf("No Motion Tracked.");
            }
                    else{
                        printf("Motion is Tracked.");
                    }
                }
                else if(j==3){
                         if(house[i][3] == 0){
                            printf("The Door is Closed");
            }
                    else{
                        printf("Door is Opened");
                    }
                }
                
            }
        case 6:
            printf("Exiting program...\n");
            return 0;
        
    }
 }}}
