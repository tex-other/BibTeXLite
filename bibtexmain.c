
#include <unistd.h>

#include <texmfmp.h>
#include <time.h>
#include <errno.h>

char inputfilename[256];
string versionstring = "bibtexlite (3.1415926)";


string
concat3 (const_string s1,  const_string s2,  const_string s3)
{
  int s2l = s2 ? strlen (s2) : 0;
  int s3l = s3 ? strlen (s3) : 0;
  string answer
      = (string) xmalloc (strlen(s1) + s2l + s3l + 1);
  strcpy (answer, s1);
  if (s2) strcat (answer, s2);
  if (s3) strcat (answer, s3);

  return answer;
}

void uexit(int code)
{
    exit(code);
}

int main(int argc, char**argv)
{
  if(argc != 2) {
    fprintf (stderr,
                     "Usage: bibtex *.aux\n");
    return -1;
  }
  
  strncpy(inputfilename, argv[1], 255);

  bibtexMainbody();
 //Parse Argument
   
  return 0;
  
}