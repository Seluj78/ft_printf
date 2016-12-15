#include "includes/includes.h"

int main() {
	int test_simple_mix;

	test_simple_mix = 42;
	ft_printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	printf("s: %s, p: %p, d:%d", "a string", &test_simple_mix, 42);
	return (0);
}
