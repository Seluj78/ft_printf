# ft_printf [![Build Status](https://travis-ci.org/Seluj78/ft_printf.svg?branch=master)](https://travis-ci.org/Seluj78/ft_printf)

### About
This repository hosts the source code for my rework of the c library function printf (stdio.h)
which I've worked on for about 2 months with [estephan](https://github.com/ElliottStephan "estephan").


### How it works:

Just like the real one, well almost, it's missing a few features that'll be added over time

### Installation:

You need my libft to be able to use the ft_printf function.

I recommend checking out the README.md from [my libft](https://github.com/Seluj78/libft "My libft") for more information

### Usage:

Just like a normal printf in C, here's the type code you would want to write (Using my libft as a dependency else it wont work):

```c
#include "libft.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ft_printf("Here's a string %s and here's an integer %d\n", "I AM A STRING", 42);
    return (0);
}
```

And here's the output one would get (Works with gcc and clang):
```bash
$> gcc main.c libft.a
$> ./a.out
Here's a string I AM A STRING and here's an integer 42
$>
```
