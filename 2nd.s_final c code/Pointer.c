# include <stdio.h>
void pointer1(){
    // core basic of pointer
    int x=10;
    int *p;
    p=&x;
    printf("Value of x variable: %d\n",x);
    printf("Address of x variable: %d\n",p);
    printf("Address of x variable: %d\n",&x);
    printf("Value of x variable: %d\n",*p);
    printf("Address of 'p' pointer variable: %d\n",&p);
}
void pointer2(){
   // Addition of two number by pointer
    int x=7, y=10, sum=0;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=&y;
    sum= *ptr1 + *ptr2;
    printf("Addition of two number: %d\n", sum);
}
void pointer3(){
    // swapping two number by pointer
    int x=5,y=10,temp;
    int *ptr1;
    int *ptr2;
    ptr1=&x;
    ptr2=&y;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After swapping x=%d, y=%d", *ptr1, *ptr2);

}
void pointer4(){
    // Access array element using pointer
    int a[]={1,2,3,4,5,6,7,8};
    int *ptr;

    ptr=&a[0];

    for(int i=0; i<8; i++){
        printf("%d\n",*ptr);
        ptr++;
    }

}
int main(){
    pointer4();
return 0;
}
