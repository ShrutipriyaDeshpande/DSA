#include <stdio.h>

void read(int[], int);
void display(int[], int);
void sort(int[], int);
int miss(int[], int);

int main() {
  int a[100];
  int n, mis;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  if(n < 0)
    {
    printf("Invalid input.\n");
    }
  else
    {
    printf("Enter the array:\n ");
    read(a, n);

    printf("The given array is: ");
    display(a, n);
    printf("\n");

    printf("The given array can be sorted as: ");
    sort(a, n);
    display(a, n);

    mis = miss(a, n);
    printf("\nThe missing element is: %d", mis);
  }

  return 0;
}

void read(int a[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}

void display(int a[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

void sort(int a[], int n) {
  int i, j, temp;
  for(i = 0; i < n; i++) {
    for(j = 0; j < n - i - 1; j++) {
      if(a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int miss(int a[], int n) {
  int i, dif;

  for(i = 0; i < n - 1; i++) {
    dif = a[i + 1] - a[i];

    if(dif == 2) {
      return a[i] + 1;
    }
  }

  return -1;
}

