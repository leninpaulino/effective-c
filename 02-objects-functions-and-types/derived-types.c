int *ip;
char *cp;
void *vp;

int i = 17;
int *ip = &i;
ip = &*ip; // & and * cancel out

int ia[11];     // integer array of 11 elements
float *afp[17]; // float point array of 17 elements

// char array
// char str[11];

// for (unsigned int i = 0; i < 10; i++)
// {
//   str[i] = '0' + i;
// }
// str[10] = '\0';

// multidimensional array

void func(int arr[5]);

int main(void)
{
  unsigned int i = 0;
  unsigned int j = 0;

  int arr[3][5];

  func(arr[i]);

  int x = arr[i][j];

  return 0;
}

typedef unsigned int uint_type;
typedef signed char schar_type, *schar_p, (*fp)(void);

struct sigrecord
{
  int signum;
  char signame[20];
  char sigdesc[100];
} sigline, *sigline_p;

sigline.signum = 5;
strcpy(sigline.signame, "SIGINT");
strcpy(sigline.sigdesc, "Interrupt from keyboard");

sigline_p = &sigline;
sigline_p->signum = 5;
strcpy(sigline_p->signame, "SIGINT");
strcpy(sigline_p->sigdesc, "Interrupt from keyboard");
