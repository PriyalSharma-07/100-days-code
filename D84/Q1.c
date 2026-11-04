#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    int n;
    scanf("%d", &n);

    enum Status status = n;

    switch(status) {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Operation Timed Out");
            break;

        default:
            printf("Invalid Status");
    }

    return 0;
}