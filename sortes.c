#include <stdio.h>
#include <time.h>
void mass_in(double *a, int length){srand(time(NULL));for(int i=0;i<length;i++){a[i]=rand()%200-100;}}
void mass_out(double *a, int length){for(int i=0;i<length;i++){printf("%lg ", a[i]);}}

void direct_choice_sort(double *a, int length){
double max;
int indexmax;
for(int i=0;i<length;i++){
    max = a[0];
    indexmax = 0;
    for(int j=0;j<length-i;j++){
        if(a[j]>max){max=a[j];indexmax=j;}
    }
a[indexmax] = a[length-i-1];
a[length-i-1] = max;
}
}

void bubble_sort(double *a, int length){
double temp;
for(int i=0;i<length-1;i++){
for(int j=0;j<length-i-1;j++){
if(a[j]>a[j+1]){temp=a[j+1];a[j+1]=a[j];a[j]=temp;}
}}}

void direct_insert_sort(double *a, int length){
int counter = 1;
double memory;
for(int i=1;i<length;i++){
if(a[i]<a[i-1]){
memory=a[i];
int j = i-1;
while(memory<a[j] && j >= 0){a[j+1]=a[j];j--;}
a[j+1]=memory;
}
}
}

void shaker_sort(double *a, int length){
int left_border=0, right_border=length;
int temp, templ, tempr;
templ = left_border;
tempr = right_border;
while(left_border<right_border){
for(int i=templ;i<tempr;i++){if(a[i]>a[i+1]){temp=a[i+1];a[i+1]=a[i];a[i]=temp;right_border=i;}}
templ = left_border;
tempr = right_border;
for(int i=tempr;i>templ;i--){if(a[i]<a[i-1]){temp=a[i-1];a[i-1]=a[i];a[i]=temp;left_border=i;}}
if(left_border==templ){left_border=right_border;}
templ = left_border;
tempr = right_border;
}
}

int main(){
double *a;
int n, k;
printf("Input a size of an array: ");
scanf("%d", &n);
a = (int*)malloc(n * sizeof(int));
mass_in(a, n);
printf("What sort method?\n1 - Direct choice sort\n2 - Bubble sort\n3 - Direct insert sort\n4 - Shaker sort\n");
scanf("%d", &k);
printf("Original array: ");
mass_out(a, n);
if(k==1){direct_choice_sort(a, n);}else if(k==2){bubble_sort(a, n);}else if(k==3){direct_insert_sort(a, n);}else{shaker_sort(a, n);};
printf("\nSorted array: ");
mass_out(a, n);
free(a);
}