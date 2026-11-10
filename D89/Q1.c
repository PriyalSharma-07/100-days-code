#include <stdio.h>

enum Status {
    START = 10,
    PROCESS = 20,
    END = 30
};

int main() {
    enum Status s1 = START;
    enum Status s2 = PROCESS;
    enum Status s3 = END;

    printf("START = %d\n", s1);
    printf("PROCESS = %d\n", s2);
    printf("END = %d\n", s3);

    return 0;
}