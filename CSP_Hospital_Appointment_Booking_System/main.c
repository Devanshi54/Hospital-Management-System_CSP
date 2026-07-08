#include <stdio.h>
#include "authentication.h"
#include "main_menu.h"

int main() {
    char username[MAX_LEN];

    printf("=========================================\n");
    printf("   🏥 Welcome to Hospital Management System\n");
    printf("=========================================\n");

    // Run authentication first
    if (authenticate(username)) {
        printf("\n✅ Authentication successful! Welcome, %s.\n", username);

        // Now enter the main menu phase
        mainMenu(username);
    } else {
        printf("\n❌ Authentication failed. Exiting program.\n");
    }

    printf("\nThank you for using the system! 👋\n");
    return 0;
}
