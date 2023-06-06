int f(void);
int *fip(); // this type of function declaration can be problematic when porting to C++
void g(int i, int j);
void h(int, int);

int max(int a, int b) // function declarator
{
  return a > b ? a : b; // function body
}
