#include <stdio.h>


void input(int a[], int size) {
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int size) {
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                printf("pass %d",i+1);
                display(a,size);
            }
        }
    }
}


void selectionSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
        printf("pass %d",i+1);
        display(a,size);
    }
}




int main() {
    int size, choice;
    printf("Choose sorting method:\n1. Bubble Sort\n2. Selection Sort\nEnter choice: ");
    scanf("%d", &choice);
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int a[size];
    
    read(a, size);
    
  
    
    switch (choice) {
        case 1:
            bubbleSort(a, size);
            break;
        case 2:
            selectionSort(a, size);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    display(a, size);
    
    return 0;
}