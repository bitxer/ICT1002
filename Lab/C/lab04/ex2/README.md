# Exercise 2: Linked Lists
## Task Description
Place this node between the "Adams" node and the "Pritchard" node. (The list should be in alphabetical order.)

### Part 1
```
int *p = (int *)malloc(sizeof(int) * N);
/* do something */
```

### Part 2
```
GRADE_NODE_PTR g1 = (GRADE_NODE_PTR)malloc(sizeof(GRADE_NODE));
GRADE_NODE_PTR g2 = (GRADE_NODE_PTR)malloc(sizeof(GRADE_NODE));
g1‐>next = g2;
g2‐>next = NULL;
/* do something */
free(g1);
```