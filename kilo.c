#include <unistd.h>

int main() {
	char c;
	while (read(0, &c, 1) == 1 && c != 'q');
	return 0;
}
