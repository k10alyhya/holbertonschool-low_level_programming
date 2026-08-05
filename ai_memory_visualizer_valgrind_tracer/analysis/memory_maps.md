# AI Memory Visualizer

## Program: stack_example.c

### Purpose
This program demonstrates recursion and how each recursive call creates a separate stack frame.

### Key Execution Points
- Entry into `walk_stack` at depth 0
- Recursive calls at depths 1, 2, and 3
- Return from depth 3 to depth 2
- Return from depth 2 to depth 1
- Return from depth 1 to depth 0

### Memory Behavior
Each recursive call creates a new stack frame containing its own copies of:

- `depth`
- `max_depth`
- `marker`
- `local_int`
- `local_buf`
- `p_local`

The variables have the same names in each call, but they are separate objects with different addresses and independent lifetimes.

At depth 3, the stack contains active frames for:

- `main`
- `walk_stack` depth 0
- `walk_stack` depth 1
- `walk_stack` depth 2
- `walk_stack` depth 3

The frames for depths 0, 1, and 2 remain alive while depth 3 is executing because their function calls have not returned yet.

### Pointer Relationship
In each frame, `p_local` stores the address of `local_int` from the same frame.

Example from the observed run:

```text
&local_int = 0x...
p_local    = 0x...