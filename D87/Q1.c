#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int choice;
    scanf("%d", &choice);

    enum Role role = choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}