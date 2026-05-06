/* project : Workshop branches
author : Alexis
 */

#include <string.h>

int main(int ac, char **av) {
    if (ac == 1)
        return 42;
    if (ac > 2)
        return 21;
    if (ac == 2)
        if (strncmp(av[1], "test", 4) == 0)
            if (strlen(av[1]) == 5)
                return 84;
            return 0;
    return 0;
}
