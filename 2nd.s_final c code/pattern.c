# include <stdio.h>
void pattern1(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }

}
void pattern2(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }

}
void pattern3(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

}
void pattern4(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

}
void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<(n-i+1); j++){
            printf("* ");
        }
        printf("\n");
    }

}
void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<(n-i+1); j++){
            printf("%d ", j);
        }
        printf("\n");
    }

}
void pattern7(int n){
    for(int i=0; i<n; i++){
        // Space
        for(int j=0; j<(n-i-1); j++){
            printf(" ");
        }
        // star
        for(int j=0; j<(2*i+1); j++){
            printf("*");
        }
        // Space
        for(int j=0; j<(n-i-1); j++){
            printf(" ");
        }
        printf("\n");
    }

}
void pattern8(int n){
    for(int i=1; i<n; i++){
        // Space
        for(int j=1; j<i; j++){
            printf(" ");
        }
        // star
        for(int j=1; j<=(2*n-(2*i+1)); j++){
            printf("*");
        }
        // Space
        for(int j=1; j<i; j++){
            printf(" ");
        }
        printf("\n");
    }

}
void pattern9(int n){
        // Upper part
       for(int i=0; i<n; i++){
        // Space
        for(int j=0; j<(n-i-1); j++){
            printf(" ");
        }
        // star
        for(int j=0; j<(2*i+1); j++){
            printf("*");
        }
        // Space
        for(int j=0; j<(n-i-1); j++){
            printf(" ");
        }
        printf("\n");
    }
    // Lower part
        for(int i=0; i<n; i++){
        // Space
        for(int j=0; j<i; j++){
            printf(" ");
        }
        // star
        for(int j=0; j<(2*n-(2*i+1)); j++){
            printf("*");
        }
        // Space
        for(int j=0; j<i; j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    pattern9(num);
return 0;
}
