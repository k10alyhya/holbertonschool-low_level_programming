# Valgrind Analysis

## Program: aliasing_example.c

### Valgrind Command

```bash
valgrind --leak-check=full --show-leak-kinds=all ./aliasing_example
```

### Error 1: Invalid Read of Size 4

Valgrind reported an invalid read at:

```c
printf("  reading b[2]=%d\n", b[2]);
```

The pointer `b` stores the same address as `a` because of:

```c
b = a;
```

After:

```c
free(a);
```

the lifetime of the heap allocation ends. However, `b` still stores the old address, so it becomes a dangling pointer.

The access to `b[2]` is inside the original array bounds, but the heap block has already been freed. Therefore, this is a use-after-free that causes an invalid read of 4 bytes.