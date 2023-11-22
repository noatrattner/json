#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("usage: %s <json path>\n", argv[0]);
        return 1;
    }

    // open file
    const char *file_path = argv[1];
    FILE *file = fopen(file_path, "r");

    // read all the file
    int next;
    for (int next = getc(file); next != EOF; next = getc(file))
    {
        printf("%c", next);
    }

    return 0;
}
