# ft_printf [![Build Status](https://travis-ci.org/Seluj78/ft_printf.svg?branch=master)](https://travis-ci.org/Seluj78/ft_printf)

### About
This repository hosts the source code for my rework of the c library function printf (stdio.h)
which I've worked on for about 2 months with [estephan](https://github.com/ElliottStephan "estephan").


### How it works:

Just like the real one, well almost, it's missing a few features that'll be added over time

### Installation:

`make install` then `make` to compile into ft_printf.a (libft needed, see below)

You need my libft to be able to use the ft_printf function.

This is the layout recommended for this lib to work because it'll look for the file libft.h located in `../../libft/includes/` (Relative path)

```text
ft_printf
    FILES
libft
    FILES
```

I recommend checking out the README.md from [my libft](https://github.com/Seluj78/libft "My libft") for more information

### Usage:

Just like a normal printf in C, here's the type code you would want to write (Using my libft as a dependency else it wont work):

```objectivec
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
```commandline
$> gcc main.c libft.a
$> ./a.out
Here's a string I AM A STRING and here's an integer 42
$>
```

### Contributing

I'm far from being a C expert and suspect there are many ways to improve – if you have ideas on how to make ft_printf easier to maintain (and faster), don't hesitate to fork and send pull requests!

You can also take a look through the open issues and help where you can.