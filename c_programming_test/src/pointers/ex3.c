    #include<stdio.h>  
    int main(void) {  
        int n=0;  
        int temp = 0;  
        int value[4],count=0;  
        int i;  
        scanf("%d", &n);  
        temp = n;  
        while (temp > 0) {  
            value[count++] = temp % 10;  
            temp /= 10;  
        }  
        while (count-- > 0) {  
            if (count == 0)   
                for (i = 1; i <= value[count]; i++)  
                    printf("%d", i);  
            else if (count == 2)  
                for (i = 0; i < value[count]; i++)  
                    printf("%c", 'B');  
            else if (count == 1)  
                for (i = 0; i < value[count]; i++)  
                    printf("%c", 'S');  
        }  
        return 0;  
    }  
