#include<stdio.h>
#include<stdlib.h>

void sort(int num[],int size){
    for (int i = 0; i < size - 1;i++){ 
        for(int j = 0; j < size -i- 1;j++){ //'size-i' because after each pass sort until last element as it is already greatest
            if (num[j] > num[j + 1])        // to sort in descending just change '>' to '<'
            {   //swapping values
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            
        }
    }
    //prints sorted array
    for ( int count = 0; count < size; count++)
    {
        printf("%d ", num[count]);
    }
    
}

int main(void){
    int n;
    printf("How many numbers do you want to sort?\n");
    scanf("%d", &n);
    int num[n];
    //calculates no. of elements by dividing total size by size of 1 element
    int size=sizeof(num)/sizeof(num[0]); 
    
    for ( int count = 0; count < size; count++)
    {
        int c = count + 1;
        printf("Enter number %d:", c);
        
        scanf("%d", &num[count]);
    }

    sort(num,size);

    system("pause");
}
