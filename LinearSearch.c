#include<iostream>

using namespace std;

int main()
{
    bool check = false;
    int num;
    scanf("%d", &num);
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        if (num==numbers[i]){
            printf("Number is %d", numbers[i]);
            check = true;
            break;
        }
        else{
            check = false;
        }
 
        
    }
    if (check == false){
        printf("Number is not found!\n");
    }


    return 0;
}
