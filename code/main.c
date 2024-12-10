#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
      if (argc != 2) {
            fputs("Incorrect usage: sb \"<message>\"\n", stdout);
      }

      char* string = "anders/Desktop/test.md";
      // sprintf(string, "~/Desktop/%ld.md", time(NULL));

      FILE* fp = fopen(string, "w");

      fputs(argv[1], fp);
      fputs("\n", fp);

      fclose(fp);
      return EXIT_SUCCESS;
}
