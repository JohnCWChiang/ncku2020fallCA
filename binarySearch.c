#include <stdio.h>
#define SIZE 11

int binarySearch( int arr[], int low, int high, int x ) {
    while( low <= high ) {
        unsigned int mid = (low + high) >> 1;
        //in JAVA,  '>>>' is used as unsigned right shift
        if( arr[mid] == x ) return mid;
        else if( x < arr[mid] ) return binarySearch( arr, low, mid - 1, x );
        return binarySearch( arr, mid + 1, high, x );
    }

    return -1;
}

int main ( void ) {

    int arr[SIZE] = {1, 3, 4, 6, 9, 12, 14, 15, 17, 19, 24};
    int x = 12;
    int result = binarySearch( arr, 0, SIZE-1, x );

    if( result != -1 ) {
        printf( "found at index %d\n", result);
    } else {
        printf("not found\n" );
    }

    return 0;
}